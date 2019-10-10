#include <iostream>
#include "pca.h"
#include "eigen.h"

using namespace std;
const int const_iter = 1e4;
const double eps = 1e-9;



PCA::PCA(unsigned int n_components){
    components = n_components ;
}

void PCA::fit(Matrix X){
	X_mine = X;
	int m = X.rows();
	VectorA prom = X.row(0);
	prom = prom.setZero(X.cols());
	for (int i = 0; i < m; i++)
	{
		prom = prom + X.row(i).transpose() ;
	}
	prom = prom / m;

	Matrix A(X.rows(), X.cols());
	for(int i=0; i<X.rows(); i++)
		for(int j=0; j<X.cols(); j++)
			A(i, j) = X.coeff(i, j) - prom(j);

	Matrix M = A.transpose() * A;
	M = M / (m-1) ;

	pair<VectorA, Matrix> v = get_first_eigenvalues(M, components, const_iter, eps);
	V_mine = v.second ;
}


Matrix PCA::transform(SparseMatrixA X){
	return X*V_mine;
}
