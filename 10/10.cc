#include <iostream>

int main()
{
  long long num = 2000000, answer = 0;
  for(long long i = 2; i < num; i++)
  {
    bool is_prime = true;
    for(long long j = 2; j < i; j++)
    {
      if(i % j == 0) {is_prime = false;}
    }
    if(is_prime) {answer += i;}
  }
  std::cout << answer << std::endl;
}
