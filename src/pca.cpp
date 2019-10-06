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
	cout << "ENTRE1" << endl;
	int n = X.cols();
	VectorA prom = X.row(0);
	prom = prom.setZero(X.cols());
	for (int i = 0; i < n; i++)
	{
		prom = prom + X.row(i) ;
	}
	cout << "ENTRE2" << endl;
	prom = prom / n ;
	SparseMatrixA A = X - prom;
	A = A / sqrt(n-1) ; //Ver bien despues
	SparseMatrixA M = A.transpose() * A;
	cout << "ENTRE3" << endl;
	pair<VectorA, SparseMatrixA> v = get_first_eigenvalues(M, components, const_iter, eps);
	SparseMatrixA V = v.second ;
	X = X.leftCols(components);
	return V.transpose() * X; 
}
