#include <iostream>
using namespace std;
// variant 8, student of group 110, Iryna Kibets

int NOD(int n1, int n2)
{
   //Task 3 Write a program for determining the least common multiple of two natural numbers 
  int div;
  if (n1 == n2)  return n1;
  int d = n1 - n2;
  if (d < 0) {
    d = -d;  div = NOD(n1, d);
  } else
    div = NOD(n2, d); 
  return div;
}
// Наименьшее общее кратное
int NOK(int n1, int n2) 
{ 
  return n1*n2 / NOD(n1, n2); 
}
int main() 
{
  int n1, n2;
  cout << "n1=";
  cin >> n1;
  cout << "n2=";
  cin >> n2;
  cout << NOK(n1, n2);
  cin.get(); cin.get();
  return 0;
}
