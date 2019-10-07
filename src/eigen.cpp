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
    SparseMatrixA eigvectors(X.rows(), num);

    /***********************
     * COMPLETAR CODIGO
     **********************/
    cout << num << endl;

    for(int i = 0; i < (int)num; i++){
		pair<double, VectorA> eig = power_iteration(A, num_iter, epsilon);
		eigvalues(i) = eig.first;
		cout <<"ENTRE Y ME DIO " << eig.first << endl;
		cout << endl << eig.second << endl;
		cout << endl << eigvectors << endl;
		for (int k = 0; k < eig.second.rows(); k++)
		{
			eigvectors.insert(k,i) = eig.second(k);
		}
		cout << "No explote en el insert" << endl;
		A = A - eig.first * (eig.second * eig.second.transpose()) / (eig.second.transpose() * eig.second);
		cout << A << endl;
	}
	
	/*cout << eigvalues << endl<< endl;
	cout << eigvectors << endl;*/

    return {eigvalues, eigvectors};
}
