#include<iostream>
using namespace std;

void parameter(int radius, const float pi = 3.14)
{
  cout << 2 * pi * radius;
}

void sum(int x, int y = 5)
{
  cout << x + y << endl;
}

int main()
{
  // sum(4);
  // sum(3,8);
  parameter(3);
  return 0;
}

