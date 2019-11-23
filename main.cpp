#include "Eigen/Dense"
#include "Eigen/src/Core/Matrix.h"
#include <iostream>

class Lattice {

    public:
Lattice (Eigen::Matrix3d mat):
    column_mat (mat)
    {
    }
Eigen::Vector3d a()
{
    return column_mat.col(0);
}

    private: 
        Eigen::Matrix3d column_mat;


};

int main()
{
    Eigen::Matrix3d test_matrix;
test_matrix << 1,0,0,
               0,1,0,
               0,0,1;
Lattice bcc(test_matrix);
std::cout<<bcc.a();
    return 0;
}  
