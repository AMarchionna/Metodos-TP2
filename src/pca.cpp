#include <iostream>
#include "pca.h"
#include "eigen.h"

using namespace std;
using namespace Eigen; 
const int const_iter = 1e3;
const double eps = 1e-9;



PCA::PCA(unsigned int n_components)
{
    components = n_components ;
}

void PCA::fit(MatrixXd X)
{
	X_mine = X;
}


MatrixXd PCA::transform(MatrixXd X){
	int n = X.cols();
	VectorXd prom = X.row(0);
	prom = prom.setZero(X.cols());
	for (int i = 0; i < n; i++)
	{
		prom = prom + X.row(i) ;
	}
	prom = prom / n ;
	MatrixXd A = X - prom;
	A = A / sqrt(n-1) ; //Ver bien despues
	MatrixXd M = X.transpose() * X;
	pair<VectorXd, MatrixXd> v = get_first_eigenvalues(M, M.cols(), const_iter, eps);
	MatrixXd T = v.second ;
	MatrixXd V = T.leftCols(components);
	X = X.leftCols(components);
	return V.transpose() * X; 
}
