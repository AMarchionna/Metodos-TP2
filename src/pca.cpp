#include <iostream>
#include "pca.h"
#include "eigen.h"

using namespace std;
const int const_iter = 1e3;
const double eps = 1e-9;



PCA::PCA(unsigned int n_components)
{
    components = n_components ;
}

void PCA::fit(SparseMatrixA X)
{
	X_mine = X;
}


SparseMatrixA PCA::transform(SparseMatrixA X){
	int n = X.cols();
	VectorA prom = X.row(0);
	prom = prom.setZero(X.cols());
	for (int i = 0; i < n; i++)
	{
		prom = prom + X.row(i) ;
	}
	prom = prom / n ;
	SparseMatrixA A = X - prom;
	A = A / sqrt(n-1) ; //Ver bien despues
	SparseMatrixA M = X.transpose() * X;
	pair<VectorA, SparseMatrixA> v = get_first_eigenvalues(M, M.cols(), const_iter, eps);
	SparseMatrixA T = v.second ;
	SparseMatrixA V = T.leftCols(components);
	X = X.leftCols(components);
	return V.transpose() * X; 
}
