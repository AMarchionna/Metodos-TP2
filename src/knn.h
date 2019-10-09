#pragma oncehttps://docs.scipy.org/doc/numpy/reference/generated/numpy.ndarray.astype.html

#include "types.h"


class KNNClassifier {
public:
    KNNClassifier(unsigned int n_neighbors);

    void fit(SparseMatrixA X, Matrix y);

    VectorA distance_to_row(VectorA v);

    int predict_row(VectorA v);

    VectorA predict(SparseMatrixA X);
private:

	unsigned int neighbors;

	Matrix X_mine;

	VectorA y_mine;

};
