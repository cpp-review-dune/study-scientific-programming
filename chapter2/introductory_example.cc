// g++ -I/tmp/mtl4 -O2 introductory_example.cc -o introductory_example
//g++ -I/home/john/Github/mtl4/mtl4 -O2 introductory_example.cc -o introductory_example
//g++ -I/home/dcamacho/mtl4 -O2 introductory_example.cc -o introductory_example
#include <iostream>
#include <boost/numeric/mtl/mtl.hpp>

int main(int argc, char **argv)
{
  int const size = 40, N = size * size;

  // Set up a matrix 1,600 x 1,600 with
  mtl::compressed2D<double> A{N, N};
  // 5-point-stencil
  mtl::mat::laplacian_setup(A, size, size);

  // Compute b = A*x with x == 1
  mtl::dense_vector<double> x{N, 1.0}, b;
  b = A * x;

  std::cout << mtl::two_norm(b) << std::endl;
}