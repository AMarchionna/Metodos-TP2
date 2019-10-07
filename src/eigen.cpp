#include <algorithm>
#include <chrono>
#include <iostream>
#include "eigen.h"


using namespace std;

pair<double, VectorA> power_iteration(const MatrixA& X, unsigned num_iter, double eps)
{
    VectorA b = VectorA::Random(X.cols());
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

pair<VectorA, MatrixA > get_first_eigenvalues(const MatrixA& X, unsigned num, unsigned num_iter, double epsilon)
{
    MatrixA A(X);
    VectorA eigvalues(num);
    MatrixA eigvectors(A.rows(), num);
	
    /***********************
     * COMPLETAR CODIGO
     **********************/
    
    for(int i = 0; i < (int)num; i++){
		pair<double, VectorA> eig = power_iteration(A, num_iter, epsilon);
		eigvalues[i] = eig.first;
		cout <<"ENTRE Y ME DIO " << eig.first << endl;
		for (int k = 0; k < eig.second.rows(); i++)
		{
			eigvectors(i,k) = eig.second[k];
		}
		A = A - eig.first * (eig.second * eig.second.transpose()) / (eig.second.transpose() * eig.second);
	}
    return make_pair(eigvalues, eigvectors);
}
