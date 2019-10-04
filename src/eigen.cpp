#include <algorithm>
#include <chrono>
#include <iostream>
#include "eigen.h"


using namespace std;

pair<double, Vector> power_iteration(const Matrix& X, unsigned num_iter, double eps)
{
    Vector b = Vector::Random(X.cols());
    double eigenvalue;
    /***********************
     * COMPLETAR CODIGO
     **********************/
	
	for (int i = 0; i < num_iter; i++)
	{
		b = X * b ;
		b = b / b.norm() ;
	}
	eigenvalue = b.transpose() * X * b / (b.transpose() * b) ;
		
    return {eigenvalue, b / b.norm()};
}

pair<Vector, Matrix> get_first_eigenvalues(const Matrix& X, unsigned num, unsigned num_iter, double epsilon)
{
    Matrix A(X);
    Vector eigvalues(num);
    Matrix eigvectors(A.rows(), num);
	
    /***********************
     * COMPLETAR CODIGO
     **********************/
    
    for(int i = 0; i < num; i++){
		pair<double, Vector> eig = power_iteration(A, num_iter, epsilon);
		eigvalues.push_back(eig.first);
		eigvectors.col(i) = eig.second;
	}
    
    return {eigvalues, eigvectors};
}
