#include<iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;

	cout << "A + B 의 합을 구하는 식 입니다. " << endl;
	
	cout << "A를 입력 하세요. (단, 1~10 사이의 숫자) :";
	
	tryagain:

	cin >> A;
	if (1 <= A && A <= 10)
	{
		cout << "B를 입력 하세요\t";
		cin >> B;
	}
	else
	{
		cout << "A를 다시 입력해 주세요" << endl;
		goto tryagain;
	}
	
	cout << "A + B의 합은 " << A + B << "입니다." << endl;


	return 0;
}