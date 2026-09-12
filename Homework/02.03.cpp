#include <iostream>
#include <print>

int main()
{
  char letter = '\0';
  std::cin >> letter;
  switch (letter)
  {
  [[likely]] case 'A' ... 'Z':
    std::print("BIG LETTERS");
    break;
  [[likely]] case 'a' ... 'z':
    std::print("small letters");
    break;
  [[likely]] case '0' ... '9':
    std::print("numbers");
    break;
  [[unlikely]] case '!': case ',': case '.': case '?': case ':': case ';':
    std::print("punctuation");
    break;
  [[unlikely]] default:
    std::print("extra");
    break;
  }
}