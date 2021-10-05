#include<iostream>

using namespace std;

int main()
{
	int A = 1;
	int B = 1;

	cout << "A를 입력하세요 : ";
	cin >> A;

	cout << "B를 입력하세요 : ";
	cin >> B;

	if (A > B)
	{
		cout << "A는 B보다 크다." << endl;
	}
	else if (B > A)
	{
		cout << "B가 A보다 크다.\t";
	}
	else if(A == B)
	{
		cout << "A와 B는 같다.\t";
	}
	else
	{
		cout << "잘못된 값을 입력하였습니다." << endl;
	}
defalt:



	return 0;
}