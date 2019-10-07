#include <iostream>
#include "pca.h"
#include "eigen.h"

using namespace std;
const int const_iter = 1e4;
const double eps = 1e-9;



PCA::PCA(unsigned int n_components)
{
    components = n_components ;
}

void PCA::fit(SparseMatrixA X)
{
	X_mine = X;
}


SparseMatrixA PCA::transform(SparseMatrixA& X){
	cout << "ENTRE1" << endl;
	int n = X.cols();
	VectorA prom = X.row(0);
	prom.setZero(X.cols());
	for (int i = 0; i < n; i++)
	{
		prom = prom + X.row(i).transpose() ;
	}
	cout << "ENTRE2" << endl;
	prom = prom / n ;
	SparseMatrixA A(X.rows(), X.cols());
	for(int i=0; i<X.rows(); i++)
		for(int j=0; j<X.cols(); j++)
			A.insert(i, j) = X.coeff(i, j) - prom(j); 
	SparseMatrixA M = A.transpose() * A;
	M = M / (n-1) ; //Ver bien despues
	cout << "ENTRE3" << endl;
	cout << "Calculando " << components << " autovalores..." << endl;
	pair<VectorA, SparseMatrixA> v = get_first_eigenvalues(M, components, const_iter, eps);
	cout << "Sali de buscar los autovalores" << endl;
	//SparseMatrixA V = v.second ;
	return A; 
}
