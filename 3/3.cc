#include <iostream>

int main()
{
  long num = 600851475143, answer = 0;
  for(long c = num - 1; c > 1; c--)
  {
    if(num % c == 0 && c % 2 != 0)
    {
      bool isPrime = true;
      for(long d = c - 1; d > 1; d--)
      {
        if(c % d == 0) {isPrime = false;}
      }
      if(isPrime && answer < c) {answer = c;}
    }
  }
  std::cout << answer << std::endl;
}
