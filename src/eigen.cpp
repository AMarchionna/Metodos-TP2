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
	for (int i = 0; i < (int)num_iter; i++)
	{
		double ev_new = b.transpose()*(X*b); 
		if (abs(ev - ev_new) < eps) {
			//~ cout << i << ",";
			break;
		}
		//~ ev = ev_new;
		b = X * b ;
		b = b / b.norm() ;
		//~ if (i == num_iter-1) cout << num_iter << ",";
	}
	eigenvalue = (b.transpose() * X) * b;
	eigenvalue = eigenvalue / (b.transpose() * b) ;
		
    return make_pair(eigenvalue, b / b.norm());
}

//~ void power_iteration_test(const Matrix& X, unsigned num_iter, double eps, double autoval)
//~ {
    //~ VectorA b = VectorA::Random(X.cols());
    //~ double eigenvalue;
    //~ /***********************
     //~ * COMPLETAR CODIGO
     //~ **********************/

	//~ for (int i = 0; i < (int)num_iter; i++)
	//~ {
		//~ double ev_new = b.transpose()*(X*b); 
		//~ if (abs(autoval - ev_new) < eps) {
			//~ cout << abs(autoval-ev_new)/autoval << ",";
			//~ break;
		//~ }
		//~ b = X * b ;
		//~ b = b / b.norm() ;
		//~ if (i == num_iter-1) cout << abs(autoval-ev_new)/autoval << ",";
	//~ }
	//~ eigenvalue = (b.transpose() * X) * b;
	//~ eigenvalue = eigenvalue / (b.transpose() * b) ;
		
    //~ return;
//~ }

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
		//~ power_iteration_test(A, num_iter, epsilon,eig.first);
		//cout <<"ENTRE Y ME DIO " << eig.first << endl;
		//cout << endl << eig.second << endl;
		//cout << endl << eigvectors << endl;
		for (int k = 0; k < eig.second.rows(); k++)
		{
			eigvectors(k,i) = eig.second(k);
		}
		//cout << "No explote en el insert" << endl;
		A = A - eig.first * (eig.second * eig.second.transpose()) / (eig.second.transpose() * eig.second);
		//cout << A << endl;
	}
	
	/*cout << eigvalues << endl<< endl;
	cout << eigvectors << endl;*/
	//~ cout << endl << eigvalues << endl << endl;
    return {eigvalues, eigvectors};
}
