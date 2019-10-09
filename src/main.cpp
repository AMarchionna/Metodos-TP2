//
// Created by pachi on 5/6/19.
//

#include <iostream>
#include "knn.h"
#include "pca.h"
#include "eigen.h"

using namespace std;

int main(int argc, char** argv){

  std::cout << "Hola mundo!" << std::endl;
  
  Matrix X(3,3);
  X(2,1)=2;
  X(1,1)=4;
  X(1,0)=-1;
  X(1,2)=5;
  X(0,2)=5;
  cout << X << endl;
  VectorA v = X.row(1).normalized();
  VectorA V(3);
  V(0)=-2;V(1)=5;V(2)=7;V=V.normalized();
  cout << X << endl << endl << v << endl << endl;
  cout << V << endl << endl;
  cout << v.transpose() * V << endl; 
  VectorA prom = v.transpose() * V;
  cout << prom(0) << endl << endl;
  /*Matrix X(3,3);
  Matrix Y(3,1);
  SparseMatrixA Z(3,3);
  vector<int> valores_X = {1,1,1,2,2,2,3,3,3};
  vector<int> valores_Y = {0, 1, 1};
  vector<float> valores_Z = {2.7, 2.7, 2.7, 2.1, 2.1, 2.1, 1, 1, 1};
  //~ VectorA prom = X.ro,w(0);
  //~ prom(1) = 5; prom(0) = 2; 


  for (int i = 0; i < X.rows(); ++i){
    for (int j = 0; j < X.cols(); ++j){
      X(i,j)=valores_X[i*X.cols()+j];
    }
  }

  for (int i = 0; i < Y.rows(); ++i){
    for (int j = 0; j < Y.cols(); ++j){
      Y(i,j)=valores_Y[i*Y.cols()+j];
    }
  }

  for (int i = 0; i < Z.rows(); ++i){
    for (int j = 0; j < Z.cols(); ++j){
      Z.insert(i,j)=valores_Z[i*Z.cols()+j];
    }
  }

  cout << Z << endl;

  KNNClassifier K = KNNClassifier(2);
  K.fit(X,Y);

  VectorA solution = K.predict(Z);

  cout << endl << solution << endl;*/



  //~ cout << X << endl;

  //~ //pair<VectorA, Matrix >  L = get_first_eigenvalues(X, 2,1000, 1e-9);

  //~ //cout << L.first << endl << endl << L.second << endl << endl;

  //~ cout << X << endl;

  //~ PCA my_PCA = PCA(2);

  //~ my_PCA.fit(X);

  //~ my_PCA.transform(X);

  /*cout << X << endl << endl;


   PCA pca= PCA(2);
   pca.fit(X);*/
   //~ cout << pca.transform(X) << endl;

//https://www.itl.nist.gov/div898/handbook/pmc/section5/pmc552.htm

/*
  Matrix D = Matrix(A);

  cout << D << endl;
*/
  /*X.insert(0,0) = 1;
  X.insert(1, 1) = 2;

  pair<double, VectorA> K = power_iteration(X, 100,1e-9);

  cout << K.first << endl << endl;
  cout << K.second << endl;*/
/*
  pair<VectorA, Matrix > L = get_first_eigenvalues(X,3,100,1e-9);*/


  /*cout << K.first << endl;*/

  //~ X.insert(0,1) = 2;
  //~ X.insert(1, 0) = 50;

  //~ auto v = Vector(X.row(0));
 //~ v = v.transpose();
 //~ v(3) = 8;

 //~ auto V = Vector(X.cols());

 //~ for(int i=0; i<X.cols(); i++) {
  //~ V(i) = (X.row(i)-v.transpose()).norm();
 //~ }
 //~ /* cout << X << endl;
  //~ cout << v << endl;

    //~ X = X.transpose();
	//~ for(int i = 0; i< X.rows(); ++i) {
	  //~ X.col(i) = X.col(i) + v;// + v;
	//~ } 

	//~ X = X.transpose();*/ 
	
	

  //~ cout << v.norm() << endl << endl << endl;

  //~ cout << X.row(0) - v << endl << endl << endl;

  //~ cout << v << endl << endl;

  //~ cout << X << endl;

  return 0;
}
