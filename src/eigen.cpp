#include <algorithm>
#include <chrono>
#include <iostream>
#include "eigen.h"


using namespace std;

pair<double, VectorA> power_iteration(const SparseMatrixA& X, unsigned num_iter, double eps)
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

pair<VectorA, SparseMatrixA > get_first_eigenvalues(const SparseMatrixA& X, unsigned num, unsigned num_iter, double epsilon)
{
    SparseMatrixA A(X);
    VectorA eigvalues(num);
    SparseMatrixA eigvectors(A.rows(), num);
	
    /***********************
     * COMPLETAR CODIGO
     **********************/
    
    for(int i = 0; i < (int)num; i++){
		pair<double, VectorA> eig = power_iteration(A, num_iter, epsilon);
		eigvalues[i] = eig.first;
		for (int k = 0; k < eig.second.rows(); i++)
		{
			eigvectors.insert(i,k) = eig.second[k];
		}
		
	}
    return make_pair(eigvalues, eigvectors);
}
