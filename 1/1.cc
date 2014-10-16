#include <iostream>

int main()
{
  int sum = 0;
  for(int c = 0; c < 1000; c++)
  {
    if(c % 3 == 0) {sum += c;}
    else if(c % 5 == 0) {sum += c;}
  }
  std::cout << sum << std::endl;
}
