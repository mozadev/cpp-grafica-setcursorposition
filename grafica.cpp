#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <iomanip>
using namespace std;
using namespace System;

void grafica(int *n, int *x, int *y)
{
for (int i = 1; i <= *n; i++)
{
Console::SetCursorPosition(*x, *y);
cout << "*";
(*x)++;
}
for (int i = 1; i <= *n; i++)
{
Console::SetCursorPosition(*x, *y);
cout << "*";
(*y)++;
}
for (int i = 1; i <= *n; i++)
{
Console::SetCursorPosition(*x, *y);
cout << "*";
(*x)--;
}
for (int i = 1; i <= *n; i++)
{
Console::SetCursorPosition(*x, *y);
cout << "*";
(*y)--;
}
}
int main()
{
int *n = new int;
int *x = new int;
int *y = new int;
cout << "ingresa n "; cin >> *n;
cout << "ingresa x "; cin >> *x;
cout << "ingresa y "; cin >> *y;
grafica(n, x, y);
_getch();
}