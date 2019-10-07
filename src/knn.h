#pragma once

#include "types.h"


class KNNClassifier {
public:
    KNNClassifier(unsigned int n_neighbors);

    void fit(MatrixA X, MatrixA y);

    VectorA distance_to_row(VectorA v);

    int predict_row(VectorA v);

    VectorA predict(MatrixA X);
private:

	unsigned int neighbors;

	MatrixA X_mine;

	MatrixA y_mine;

};
