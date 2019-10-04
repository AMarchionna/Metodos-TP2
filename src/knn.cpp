#include <algorithm>
//#include <chrono>
#include <iostream>
#include <vector>
#include "knn.h"
#include "time.h"

using namespace std;


KNNClassifier::KNNClassifier(unsigned int n_neighbors)
{
	neighbors = n_neighbors;
}

void KNNClassifier::fit(SparseMatrix X, Matrix y)
{
	X_mine = X;
	y_mine = y;
}

Vector KNNClassifier::distance_to_row(Vector v){

	auto V = Vector(X_mine.cols());

	for(int i=0; i<X_mine.cols(); i++) {
  		V(i) = (X_mine.row(i)-v.transpose()).norm();
 	}

 	vector<pair<double,int> > index(X_mine.cols());
 	for(int i=0; i<(int)index.size(); i++) index[i] = {V(i), i};
 	sort(index.begin(), index.end()); 

 	auto Res = Vector(X_mine.cols());
 	for (int i = 0; i < X_mine.cols(); ++i)
 	 	Res(i) = index[i].second;

	return Res;

}

int KNNClassifier::predict_row(Vector v) {

	auto dist = distance_to_row(v);

	auto vecinos = Vector(neighbors);

	for(int i=0; i < (int)neighbors; i++) 
		vecinos(i) = y_mine.coeff(dist(i), 0); // Ese coeff funca?

	// Falta determinar la convencion
	int ceros = 0; int unos = 0;
	for(int i=0; i<(int)neighbors; i++){
		if(vecinos(i) == 0) ceros ++;
		else unos ++;
	}

	if(ceros > unos)
		return 0;
	else if (unos < ceros)
		return 1;
	srand(time(NULL));
	return rand() % 2; 
}

Vector KNNClassifier::predict(SparseMatrix X)
{
    cout << "KKKKK" << endl;

    // Creamos vector columna a devolver
    auto ret = Vector(X.cols());

    ret(0) = 15;

    for (unsigned k = 0; k < X.cols(); ++k)
    {
    	auto v = Vector(X.row(k));
        ret(k) = 1;//(predict_row(v) == 1 ? "pos" : "neg");
    }
    return ret;
}
