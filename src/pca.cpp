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
	int m = X.rows();
	VectorA prom = X.row(0);
	prom = prom.setZero(X.cols());
	for (int i = 0; i < m; i++)
	{
		prom = prom + X.row(i).transpose() ;
	}
	prom = prom / m;
	//~ cout << prom << endl << endl;
	MatrixA A(X);
	for(int i=0; i<X.rows(); i++)
		for(int j=0; j<X.cols(); j++)
			A(i, j) = X.coeff(i, j) - prom(j);
	//~ cout << endl << A << endl << endl; 
	MatrixA M = A.transpose() * A;
	M = M / (m-1) ; //Ver bien despues
	//~ cout << endl << M << endl;
	//~ cout << "Calculando " << components << " autovalores..." << endl;
	pair<VectorA, SparseMatrixA> v = get_first_eigenvalues(M, components, const_iter, eps);
	//~ cout << "Sali de buscar los autovalores" << endl;
	SparseMatrixA V = v.second ;
	//~ cout << X << " " << V << endl;
	//Segun el enunciado del tp es X*V
	//Para mi deberia ser (X-prom)*V+prom o algo asi,
	//tipo trasladar al origen, aplicar la transformacion, y retrasladar.
	return X*V; 
}
