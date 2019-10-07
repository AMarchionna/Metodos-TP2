#pragma once
#include "types.h"


class PCA {
public:
    PCA(unsigned int n_components);

    void fit(SparseMatrixA X);

    SparseMatrixA transform(SparseMatrixA& X);
private:

	SparseMatrixA X_mine;

	int components;
};
