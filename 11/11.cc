#include <iostream>
#include <fstream>

int main()
{
  std::ifstream fin;
  fin.open("11_num.dat");
  long long nums[20][20], answer = 0, hor = 0, ver = 0,
            diag_down = 0, diag_up = 0;
  for(int i = 0; i < 20; i++)
  {
    for(int j = 0; j < 20; j++)
    {
      fin >> nums[i][j];
    }
  }
  fin.close();
  for(int i = 0; i < 16; i++)
  {
    for(int j = 0; j < 16; j++)
    {
      diag_down = nums[i][j] * nums[i+1][j+1] *
             nums[i+2][j+2] * nums[i+3][j+3];
      if(i > 2)
      {
        diag_up = nums[i][j] * nums[i-1][j+1] *
                      nums[i-2][j+2] * nums[i-3][j+3];
      }
      hor = nums[i][j] * nums[i][j+1] *
            nums[i][j+2] * nums[i][j+3];
      ver = nums[i][j] * nums[i+1][j] *
            nums[i+2][j] * nums[i+3][j];
      if(diag_down > answer) {answer = diag_down;}
      if(diag_up > answer) {answer = diag_up;}
      if(hor > answer) {answer = hor;}
      if(ver > answer) {answer = ver;}
    }
  }
  std::cout << answer << std::endl;
}
