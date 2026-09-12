#include <cmath>
#include <iostream>
#include <print>

int main()
{
  double epsilon = 0.0;
  std::cin >> epsilon;
  double pi_quater = 0.0;

  double a_n = 1.0;
  long int n = 0;

  while (std::abs(a_n) >= epsilon)
  {
    pi_quater += a_n;
    n += 1;
    a_n = std::pow(-1, n) / (2 * n + 1);
  }

  std::print("{}\n", pi_quater * 4);

  double eiler_num = 0.0;
  a_n = 1.0;
  n = 0;

  while (std::abs(a_n) >= epsilon)
  {
    eiler_num += a_n;
    a_n = a_n / (n + 1);
    n += 1;
  }

  std::print("{}\n", eiler_num);
}