#include <iostream>
#include <cmath>

float distance(float x, float y)
{
  return std::abs(x - y);
}

int main(int argc, char const *argv[])
{
  float euler = std::exp(1);
  float pi = std::atan(1) * 4;

  std::cout << "|euler - pi| = "
            << distance(euler, pi)
            << "."
            << std::endl;
  return 0;
}
