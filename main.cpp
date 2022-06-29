// Hoppock, Zachary
// doubleArrays.cpp
// November 14, 2020
// Allocate an array with different values
// Version #1

#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 11;
  double values[SIZE];

  cout << "a. ";
  for (int i = 0; i < SIZE - 1; i++)
  {
    values[i] = i + 1;
    cout << values[i] << " ";
  }
  cout << endl;
  
  cout << "b. ";
  for (int i = 0; i < SIZE; i++)
  {
    values[i] = i * 2;
    cout << values[i] << " ";
  }
  cout << endl;

  cout << "c. ";
  for (int i = 1; i < SIZE; i++)
  {
    values[i] = i * i;
    cout << values[i] << " ";
  }
  cout << endl;

  cout << "d. ";
  for (int i = 0; i < SIZE - 1; i++)
  {
    values[i] = 0;
    cout << values[i] << " ";
  }
  cout << endl;

  cout << "e. ";
  for (int i = 1; i < 5; i++)
  {
    values[i] = i * i;
  }
  values[5] = values[3];
  values[6] = 7;
  values[7] = values[2];
  values[8] = values[3];
  values[9] = 11;
  for (int i = 01; i < SIZE - 1; i++)
  {
    cout << values[i] << " ";
  }
  cout << endl;

  cout << "f. ";
  int j = 0;
  for (int i = 0; i < SIZE - 1; i++)
  {
    values[i] = j;
    j++;
    if (j == 2)
    {
      j = 0;
    }
    cout << values[i] << " ";
  }
  cout << endl;

  cout << "g. ";
  j = 0;
  for (int i = 0; i < SIZE - 1; i++)
  {
    values[i] = j;
    j++;
    if (j == 5)
    {
      j = 0;
    }
    cout << values[i] << " ";
  }
  cout << endl;

  return 0;
}