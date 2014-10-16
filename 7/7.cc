#include <iostream>

int main()
{
  int num = 1, it = 1, range = 10001;
  while(it <= range)
  {
    num++;
    bool is_prime = true;
    for(int c = num - 1; c > 1; c--)
    {
      if(num % c == 0) {is_prime = false;}
    }
    if(is_prime) {it++;}
  }
  std::cout << num << std::endl;
}
