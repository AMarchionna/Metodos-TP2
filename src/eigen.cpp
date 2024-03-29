#include <algorithm>
#include <chrono>
#include <iostream>
#include "eigen.h"


using namespace std;

pair<double, VectorA> power_iteration(const Matrix& X, unsigned num_iter, double eps)
{
    VectorA b = VectorA::Random(X.cols());
    double eigenvalue;
    /***********************
     * COMPLETAR CODIGO
     **********************/
	double ev = 0;

	for (int i = 0; i < (int)num_iter; i++){
		double ev_new = b.transpose()*(X*b); 
		if (abs(ev - ev_new) < eps) {
			break;
		}
		b = X * b ;
		b = b / b.norm() ;
	}
	eigenvalue = (b.transpose() * X) * b;
	eigenvalue = eigenvalue / (b.transpose() * b) ;
		
    return make_pair(eigenvalue, b / b.norm());
}

pair<VectorA, Matrix > get_first_eigenvalues(const Matrix& X, unsigned num, unsigned num_iter, double epsilon)
{
    Matrix A(X);
    VectorA eigvalues(num);
    Matrix eigvectors(X.rows(), num);

    /***********************
     * COMPLETAR CODIGO
     **********************/

    for(int i = 0; i < (int)num; i++){
		pair<double, VectorA> eig = power_iteration(A, num_iter, epsilon);
		eigvalues(i) = eig.first;
		for (int k = 0; k < eig.second.rows(); k++){
			eigvectors(k,i) = eig.second(k);
		}
		A = A - eig.first * (eig.second * eig.second.transpose()) / (eig.second.transpose() * eig.second);
	}
	
    return {eigvalues, eigvectors};
}
