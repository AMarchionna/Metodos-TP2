#include <algorithm>
//#include <chrono>
#include <iostream>
#include "knn.h"

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

	/*auto V = SparseMatrix(rows(X_mine), cols(X_mine));
	for(int i=0; i<)

	return a;*/

}

double KNNClassifier::predict_row(Vector v) {

	double a = 0;



	return a;
}

Vector KNNClassifier::predict(SparseMatrix X)
{
    // Creamos vector columna a devolver
    auto ret = Vector(X.rows());

    for (unsigned k = 0; k < X.rows(); ++k)
    {
    	auto v = Vector(X.row(k));
        ret(k) = predict_row(v);
    }

    return ret;
}
