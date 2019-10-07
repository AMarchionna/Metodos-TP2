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
void PCA::fit(MatrixA X)
{
	X_mine = X;
}


MatrixA PCA::transform(MatrixA X){
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
	MatrixA A = X - prom;
	A = A / sqrt(n-1) ; //Ver bien despues
	MatrixA M = A.transpose() * A;
	cout << "ENTRE3" << endl;
	pair<VectorA, MatrixA> v = get_first_eigenvalues(M, components, const_iter, eps);
	MatrixA V = v.second ;
	X = X.leftCols(components);
	return V.transpose() * X; 
}
