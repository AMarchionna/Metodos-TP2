//
// Created by pachi on 5/6/19.
//

#include <iostream>
#include "knn.h"
#include "pca.h"
#include "eigen.h"
#include <chrono>

using namespace std;

int main(int argc, char** argv){

  std::cout << "Hola mundo!" << std::endl;

//Experimentacion del criterio de parada
int num_iter = 5000;
int epsilon = 1e-9;

for(int i=100; i<6000; i += 50) {

     cout << i << ",";
     MatrixXd mat2;
     mat2 = (MatrixXd::Random(i,i).array().abs() < 0.1).cast<double>() * MatrixXd::Random(i,i).array().abs();
     for(int k = 0; k < i; k++) {
     	for(int j = 0; j < i; j++) {
     		mat2(k,j) = static_cast<int>(10.0*abs(mat2(k,j)));
            }
        }  
     MatrixXd m = mat2.transpose()*mat2;
     pair<double, VectorA> V_Stop = power_iteration(m, num_iter, epsilon);
     pair<double, VectorA> V_noStop = power_iteration(m, num_iter, epsilon);
     cout << (V_Stop.first - V_noStop.first)/V_noStop.first << "," << (V_Stop.second-V_noStop.second).norm() << endl;
  }

  return 0;
}
