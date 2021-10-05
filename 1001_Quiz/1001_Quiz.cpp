#include<iostream>

using namespace std;

int a = 0;

int main()
{

	int Text[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 1; i <= 10; i++)
	{
		Text[0] = i;

		cout << Text[0] << endl;
	}
	
	return 0;
}