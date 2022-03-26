#include <iostream>
 long nCr(int n, int r);

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r,nCr;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
  long nCr(int n, int r)
{
  return n!/r!(n-r)!;
}