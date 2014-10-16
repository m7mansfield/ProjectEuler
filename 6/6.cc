#include <iostream>

int main()
{
  int range = 100, sum = 0, square = 0, answer = 0;
  for(int c = range; c > 0; c--)
  {
    sum = sum + (c * c);
  }
  for(int d = range; d > 0; d--)
  {
    square = square + d;
  }
  square *= square;
  answer = square - sum;
  std::cout << answer << std::endl;
}
