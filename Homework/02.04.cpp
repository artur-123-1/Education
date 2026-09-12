#include <iostream>
#include <print>

int main()
{
  for (int hundreds = 1; hundreds <= 9; hundreds++)
  {
    for (int tens = 0; tens <= 9; tens++)
    {
      for (int digits = 0; digits <= 9; digits++)
      {
        int number = hundreds * 100 + tens * 10 + digits;
        int sum_of_qubes = hundreds * hundreds * hundreds + tens * tens * tens + digits * digits * digits;
        if (number == sum_of_qubes)
        {
          std::print("{}\n", number);
        }
      }
    }
  }
}