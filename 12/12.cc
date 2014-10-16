#include <iostream>

int main()
{
  long long answer = 0, tri = 0, it = 1, div = 0;
  bool calculating = true;
  while(calculating)
  {
    div = 0;
    tri = 0;
    for(long long i = 1; i <= it; i++)
    {
      tri = tri + i;
    }
    for(long long j = tri; j > 0; j--)
    {
      if(tri % j == 0) {div++;}
    }
    if(div > 500) {answer = tri; calculating = false;}
    it++;
  }
  std::cout << answer << std::endl;
}