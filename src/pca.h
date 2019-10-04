#pragma once
#include "types.h"

using namespace Eigen;

class PCA {
public:
    PCA(unsigned int n_components);

    void fit(MatrixXd X);

    Eigen::MatrixXd transform(MatrixXd X);
private:

	MatrixXd X_mine;

	int components;
};
