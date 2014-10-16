#include <iostream>

int main()
{
  long long answer = 0, chain = 0;
  for(long long c = 1000000; c > 0; c--)
  {
    long long n = c, counter = 0;
    while(n != 1)
    {
      if(n % 2 ==0)
      {
        n /= 2;
        counter++;
      }
      else if(n % 2 != 0)
      {
        n = (3 * n) + 1;
        counter++;
      }
    }
    if(counter > chain)
    {
      answer = c;
      chain = counter;
    }
  }
  std::cout << answer << std::endl;
}