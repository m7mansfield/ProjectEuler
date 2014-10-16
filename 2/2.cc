#include <iostream>

int main()
{
  int one = 1, two = 2, tmp = 0, sum = 2;
  while(tmp < 4000000)
  {
    tmp = one + two;
    one = two;
    two = tmp;
    if(tmp % 2 == 0) {sum += tmp ;}
  }
  std::cout << sum << std::endl;
}
