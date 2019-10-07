#pragma once
#include "types.h"


class PCA {
public:
    PCA(unsigned int n_components);

    void fit(MatrixA X);

    MatrixA transform(MatrixA X);
private:

	MatrixA X_mine;

	int components;
};
