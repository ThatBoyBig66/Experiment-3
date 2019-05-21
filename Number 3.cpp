#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	char arr[7];
	int a, b, temp;
	cout << "Enter 7 characters: " <<endl;
	for (a=0;a<7;a++)
	{
		cout << "Enter character " << a + 1 << ":";
		cin >> arr[a];
	}
	for (a=0;a<7;a++)
	{
	for (b=0;b<7-a-1;b++)
	{
		if (arr[b] > arr [b+1])
		{
		temp = arr[b];
		arr[b] = arr[b+1];
		arr[b+1] = temp;
		} 
	}
	}
	cout << "Elements:"<<endl;
	for (a=0;a<=6;a++)
	{
		cout << arr[a];
	}
	cout << "Total #of: " << a << " elements.";
	_getch();
	return 0;
}
