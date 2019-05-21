#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int x, y, temp;
	double a, b, num[10];
	
	cout << "ENTER 10 NUMBERS"<<endl; 	
	for (x = 0; x < 10; x++)
	{
	cout << "Number " << x+1 <<":";
		cin >> num[x];
	}
	for (x = 0; x < 10; x++)
	{
		for (y - x + 1; y < 10; y++)
		{
			if (num[y] > num [y+1])
			{
				temp = num[y];
				num[y] = num[y+1];
				num[y+1] = temp;
			} 
		}
	}
	if (x = 9)
	{
		b= num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9];
		a = b / 10;

		cout << "\nThe smallest number is: "<< num[0] << endl;
		cout << "The largest number is: " << num[9] << endl;
		cout << "Sum of all numbers: " << b << endl;
		cout << setprecision(2) << fixed << showpoint << "The average of the values: " << a << endl;
	}
	getch();
	return 0;
}
