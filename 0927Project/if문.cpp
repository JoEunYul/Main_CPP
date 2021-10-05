#include<iostream>

using namespace std;

int main()
{
	int Number = 1;
    cout << " 숫자를 입력해 주세요 : ";
	cin >> Number;

	if (Number % 2 == 0)
    {
		cout << "짝수 입니다." << endl;
	}
	else
	{
		cout << "홀수 입니다." << endl;
	}

	int Score = 0;
	char Grade = 'F';

	cout << " 성적을 입력해 주세요 : ";
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
//		//짝수 조건 2로 나눴을때 나머지가 없어야 한다.
//}
//
