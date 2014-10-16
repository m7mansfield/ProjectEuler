#include <iostream>
#include <stack>

int main()
{
  std::stack<int> values;
  int value = 0, digit = 0,
      reverse = 0, answer = 0, tmp = 0;
  for(int c = 999; c > 99; c--)
  {
    for(int d = 999; d > 99; d--)
    {
      value = c * d;
      values.push(value);
    }
  }
  while(!values.empty())
  {
    value = values.top();
    tmp = value;
    values.pop();
    while(tmp > 0)
    {
      digit = tmp % 10;
      reverse = reverse * 10 + digit;
      tmp = tmp / 10;
    }
    if(value == reverse && value > answer)
    {
      answer = value;
    }
    reverse = 0;
    value = 0;
    tmp = 0;
  }
  std::cout << answer << std::endl;
}
