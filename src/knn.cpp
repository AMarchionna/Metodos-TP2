#include <algorithm>
//#include <chrono>
#include <iostream>
#include <vector>
#include "knn.h"
#include "time.h"

using namespace std;


KNNClassifier::KNNClassifier(unsigned int n_neighbors)
{
	cout << "Clasificador inicializado con k=" << n_neighbors << "..." << endl;
	neighbors = n_neighbors;
}

void KNNClassifier::fit(SparseMatrixA X, Matrix y)
{
	X_mine = X;
	y_mine = y;
}

VectorA KNNClassifier::distance_to_row(VectorA v){

	auto V = VectorA(X_mine.rows());

	for(int i=0; i<X_mine.rows(); i++) {
		 
  		
  		V(i) = (X_mine.row(i)-v.transpose()).norm();
 	}

 	vector<pair<double,int> > index(X_mine.rows());
 	for(int i=0; i<(int)index.size(); i++) index[i] = {V(i), i};
 	sort(index.begin(), index.end()); 

 	auto Res = VectorA(X_mine.rows());
 	for (int i = 0; i < X_mine.rows(); ++i)
 	 	Res(i) = index[i].second;

	return Res;

}

int KNNClassifier::predict_row(VectorA v) {

	auto dist = distance_to_row(v);

	auto vecinos = VectorA(neighbors);

	for(int i=0; i < (int)neighbors; i++){
		int s = dist(i);
		vecinos(i) = y_mine(s);
	}
	int ceros = 0; int unos = 0;
	for(int i=0; i<(int)neighbors; i++){
		if(vecinos(i) == 0) ceros ++;
		else if (vecinos(i) == 1) unos ++;
	}
	assert(unos+ceros==neighbors);
	if(ceros > unos){
		return 0;
	}
	if (unos > ceros){
		return 1;
	}
	srand(time(NULL));
	return rand() % 2; 
}

VectorA KNNClassifier::predict(SparseMatrixA X)
{
    // Creamos vector columna a devolver
    auto ret = VectorA(X.rows());
	Matrix Y = Matrix(X);
	cout << "Calculando predicciones..." << endl;
    for (unsigned k = 0; k < X.rows(); ++k)
    {
    	auto v = VectorA(X.row(k));
        ret(k) = predict_row(v);
    }
    return ret;
}
