#pragma once

#include "types.h"


class KNNClassifier {
public:
    KNNClassifier(unsigned int n_neighbors);

    void fit(SparseMatrix X, Matrix y);

    Vector distance_to_row(Vector v);

    int predict_row(Vector v);

    Vector predict(SparseMatrix X);
private:

	unsigned int neighbors;

	SparseMatrix X_mine;

	Matrix y_mine;

};
