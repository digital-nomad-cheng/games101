#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){

    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << a << std::endl;
    std::cout << a/b << std::endl;
    std::cout << std::sqrt(b) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl;

    // Example of vector
    std::cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f,2.0f,3.0f);
    Eigen::Vector3f w(1.0f,0.0f,0.0f);
    // vector output
    std::cout << "Example of output \n";
    std::cout << v << std::endl;
    // vector add
    std::cout << "Example of add \n";
    std::cout << v + w << std::endl;
    // vector scalar multiply
    std::cout << "Example of scalar multiply \n";
    std::cout << v * 3.0f << std::endl;
    std::cout << 2.0f * v << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i,j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    std::cout << "Example of output \n";
    std::cout << i << std::endl;
    // matrix add i + j
    std::cout << "Example of i + j" << std::endl;
    std::cout << i + j << std::endl;
    // matrix scalar multiply i * 2.0
    std::cout << "Example of i * 20" << std::endl;
    std::cout << i * 2.0 << std::endl;
    // matrix multiply i * j
    std::cout << "Example of i * j" << std::endl;
    std::cout << i * j << std::endl;
    // matrix multiply vector i * v
    std::cout << "Example of i * v" << std::endl;
    std::cout << i * v << std::endl;

    // Task 0
    /*
    Given a point P=(2, 1), roate it 45 degeress in reverse clock wise,
    then translate it by (1, 2).
    Calcuate the the coordinates after transformation.
    */
    Eigen::Vector3f p(2.0f, 1.0f, 1.0f); // P in homogenous coordinates
    // rotation matrix should be
    Eigen::Matrix3f R;
    R << cos(0.25f * M_PI), -sin(0.25f * M_PI), 0,
         sin(0.25f * M_PI),  cos(0.25f * M_PI), 0,
         0, 0, 1;
    // translation matrix should be:
    Eigen::Matrix3f T;
    T << 1, 0, 1, 0, 1, 2, 0, 0, 1;

    std::cout << "P after transformation:" << std::endl;
    std::cout << T * R * p << std::endl;
    return 0;
}