#include <iostream>

int main()
{
  int number = 1, range = 20;
  bool calculating = true, check = true;
  while(calculating)
  {
    check = true;
    for(int i = range; i > 0; i--)
    {
      if(number % i != 0) {check = false;}
    }
    if(check == true) {calculating = false;}
    else {number++;}
  }
  std::cout << number << std::endl;
}
