#include<iostream>

using namespace std;

int main()
{
	int Number = 1;
    cout << " ���ڸ� �Է��� �ּ��� : ";
	cin >> Number;

	if (Number % 2 == 0)
    {
		cout << "¦�� �Դϴ�." << endl;
	}
	else
	{
		cout << "Ȧ�� �Դϴ�." << endl;
	}

	int Score = 0;
	char Grade = 'F';

	cout << " ������ �Է��� �ּ��� : ";
	cin >> Score;
	if (100 >= Score && Score >= 90)
	{
		Grade = 'A';
	}
	else if (90 > Score && Score >= 80)
	{
		Grade = 'B';
	}
	else if (80 > Score && Score >= 70)
	{
		Grade = 'C';
	}
	else if (70 > Score && Score >= 50)
	{
		Grade = 'D';
	}
	else 
	{
		Grade = 'F';
	}

//
//
//
//
//
//
//
//	return 0;
//		//¦�� ���� 2�� �������� �������� ����� �Ѵ�.
//}
//
