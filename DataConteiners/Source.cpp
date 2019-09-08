#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n] = { 3, 5, 8, 13, 21 };
	cout << *(Arr +  4) << endl;
	
}