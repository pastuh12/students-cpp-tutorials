#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void summFor()
{
  double n1;
  int fact = 1, n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
    cout << fact << endl;
    n1 += fact / pow(i, 5);
  }
  cout << n1;
}

void funcWhile()
{
  int start = -3, end = 1, count = 0;
  float x = start, step = 0.5, b, number;
  cin >> b;
  while (x <= end)
  {
    number = sin(b * x) * pow(2, -(x - 3)) / (5 - sqrt(x + 4));
    if (number > 0)
      count += 1;
    x += step;
  }
  cout << count;
}

int main()
{
  setlocale(LC_ALL, "Rus");
}