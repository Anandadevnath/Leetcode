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
void pattern5(int n)
{
  // for (int i = n; i > 0; i--)
  // {
  //   for (int j = i; j > 0; j--)
  //   {
  //     cout << "* ";
  //   }
  //   cout << "\n";
  // }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}
void pattern6(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << j << " ";
    }
    cout << "\n";
  }
}
void pattern7(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= n - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    for (int j = 0; j <= n - i - 1; j++)
    {
      cout << " ";
    }
    cout << "\n";
  }
}
void pattern8(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j <= i; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2 * n - (2 * i + 1); j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j <= i; j++)
    {
      cout << " ";
    }
    cout << "\n";
  }
}
void pattern9(int n)
{
  pattern7(n);
  pattern8(n);
}
void pattern10(int n)
{
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i;
    if (i > n)
    {
      stars = 2 * n - i;
    }
    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

int main()
{
  int n;
  cin >> n;
  pattern10(n);
}