#pragma once

#include "types.h"


class KNNClassifier {
public:
    KNNClassifier(unsigned int n_neighbors);

    void fit(Matrix X, Matrix y);

    VectorA distance_to_row(VectorA v);

    int predict_row(VectorA v);

    VectorA predict(Matrix X);
private:

	unsigned int neighbors;

	Matrix X_mine;

	Matrix y_mine;

};
