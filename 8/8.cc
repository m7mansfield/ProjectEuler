#include <iostream>
#include <fstream>

int main()
{
  long long num[1000];
  long long product = 0, tmp = 0;
  std::ifstream fin;
  fin.open("8_num.dat");
  for(int i = 0; i < 1000; i++) {fin >> num[i];}
  fin.close();
  for(int j = 0; j < 987; j++)
  {
    tmp = num[j] * num[j+1] * num[j+2] * num[j+3] *
          num[j+4] * num[j+5] * num[j+6] * num[j+7] *
          num[j+8] * num[j+9] * num[j+10] * num[j+11] *
          num[j+12];
    if(tmp > product) {product = tmp;}
  }
  std::cout << product << std::endl;
}
