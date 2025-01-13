#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}
void pattern2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}
void pattern3(int n)
{
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << "\n";
  }
}
void pattern4(int n)
{
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << "\n";
  }
}
int main()
{
  int n;
  cin >> n;
  pattern4(n);
}