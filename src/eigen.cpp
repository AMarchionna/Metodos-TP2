#include <algorithm>
#include <chrono>
#include <iostream>
#include "eigen.h"


using namespace std;

pair<double, VectorXd> power_iteration(const MatrixXd& X, unsigned num_iter, double eps)
{
    VectorXd b = VectorXd::Random(X.cols());
    double eigenvalue;
    /***********************
     * COMPLETAR CODIGO
     **********************/
	
	for (int i = 0; i < (int)num_iter; i++)
	{
		b = X * b ;
		b = b / b.norm() ;
	}
	eigenvalue = (b.transpose() * X) * b;
	eigenvalue = eigenvalue / (b.transpose() * b) ;
		
    return make_pair(eigenvalue, b / b.norm());
}

pair<VectorXd, MatrixXd> get_first_eigenvalues(const MatrixXd& X, unsigned num, unsigned num_iter, double epsilon)
{
    MatrixXd A(X);
    VectorXd eigvalues(num);
    MatrixXd eigvectors(A.rows(), num);
	
    /***********************
     * COMPLETAR CODIGO
     **********************/
    
    for(int i = 0; i < (int)num; i++){
		pair<double, VectorXd> eig = power_iteration(A, num_iter, epsilon);
		eigvalues[i] = eig.first;
		eigvectors.col(i) = eig.second;
	}
    
    return {eigvalues, eigvectors};
}
