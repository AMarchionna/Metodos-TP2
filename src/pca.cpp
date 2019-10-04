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

void PCA::fit(Matrix X)
{
	X_mine = X;
}


MatrixXd PCA::transform(SparseMatrix X)
{
	int n = X.cols();
	Vector prom = zeromatrix(X.cols() , 1);
	for (int i = 0; i < n; i++)
	{
		prom = prom + X.row(i) ;
	}
	prom = prom / n ;
	MatrixXd A = X - prom;
	A = A / sqrt(n-1) ; //Ver bien despues
	MatrixXd M = X.transpose() * X;
	pair<Vector, Matrix > v = get_first_eigenvalues(M, M.cols(), const_iter, eps);
	MatrixXd T = v.second ;
	MatrixXd V = T.submatrix(T, components +1,...,T.cols());
	X = X.submatrix(X, components +1,...,X.cols());
	return V.transpose() * X; 
	
  throw std::runtime_error("Puede ser que falle");
}
