#pragma once
#include "types.h"


class PCA {
public:
    PCA(unsigned int n_components);

    void fit(Matrix X);

    Matrix transform(SparseMatrixA X);
private:

	Matrix X_mine;
	
	Matrix V_mine;
	
	int components;
};
