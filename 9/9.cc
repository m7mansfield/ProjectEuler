#include <iostream>

int main()
{
  int a = 0, b = 0, c = 0;
  for(a = 0; a <= 1000; a++)
  {
    for(b = 0; b <= 1000; b++)
    {
      for(c = 0; c <= 1000; c++)
      {
        if((a*a + b*b == c*c) && (a + b + c == 1000))
        {std::cout << a * b * c << std::endl;}
      }
    }
  }
}
