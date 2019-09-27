//
// Created by pachi on 5/6/19.
//

#include <iostream>
#include "pca.h"
#include "eigen.h"

using namespace std;

int main(int argc, char** argv){

  std::cout << "Hola mundo!" << std::endl;

  std::cout << "#Funcionalidades" << std::endl;

  SparseMatrix X(4,4); 
  
  X.insert(0,1) = 2;
  X.insert(1, 0) = 50;

  auto v = Vector(X.row(0));
 v = v.transpose();


  cout << X << endl;
  cout << v << endl;

    X = X.transpose();
	for(int i = 0; i< X.rows(); ++i) {
	  X.col(i) = X.col(i) + v;// + v;
	} 

	X = X.transpose();
	
	cout << X << endl;
  // Resta columnas
  //cout << X.colwise()+=v << endl;
  //cout << v << endl;

  return 0;
}
