#include <iostream>
#include <fstream>

int main()
{
  std::ifstream fin;
  fin.open("13_num.dat");
  long long num[100], sum = 0;
  for(int i = 0; i < 100; i++)
  {
    fin >> num[i];
    sum += num[i] / 100 / 100 / 100 / 100;
  }
  std::cout << sum << std::endl;
}