#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double A[7], B[7], C[7];
	
		cout <<"Enter temperature for a week in Province A, B, C" <<endl;
	for (int x = 0; x < 7; x++)
	{
		cout << "Province A, Day " << x + 1 << ": "; cin >> A[x];
	}
	cout << "******************************************"<<endl;
	for (int x = 0; x < 7; x++)
	{
		cout << "Province B, Day " << x + 1 << ": "; cin >> B[x];
	}
	cout << "******************************************"<<endl;
	for (int x = 0; x < 7; x++)
	{
		cout << "Province C, Day " << x + 1 << ": "; cin >> C[x];
	}
	cout << "******************************************"<<endl;	
	cout << "Temperatures of Province A:\n";
	for (int x = 0; x < 7; x++)
	{
		cout << "Day "<< x + 1 << ": " << A[x] << endl;
	}
	cout << "******************************************"<<endl;
	cout << "Temperatures of Province B:\n";
	for (int x = 0; x < 7; x++)
	{
		cout << "Day "<< x + 1 << ": " << B[x] << endl;
	}
	cout << "******************************************"<<endl;
	cout << "Temperatures of Province C:\n";
	for (int x = 0; x < 7; x++)
	{
		cout << "Day "<< x + 1 << ": " << C[x] << endl;
	}
	
	_getch();
	return 0;
}
