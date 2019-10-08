#pragma once

#include "types.h"


class KNNClassifier {
public:
    KNNClassifier(unsigned int n_neighbors);

    void fit(SparseMatrixA X, MatrixA y);

    VectorA distance_to_row(VectorA v);

    int predict_row(VectorA v);

    VectorA predict(SparseMatrixA X);
private:

	unsigned int neighbors;

	SparseMatrixA X_mine;

	MatrixA y_mine;

};
