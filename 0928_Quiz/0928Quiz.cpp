#include<iostream>

using namespace std;

int main()
{
	int A = 1;
	int B = 1;

	cout << "A�� �Է��ϼ��� : ";
	cin >> A;

	cout << "B�� �Է��ϼ��� : ";
	cin >> B;

	if (A > B)
	{
		cout << "A�� B���� ũ��." << endl;
	}
	else if (B > A)
	{
		cout << "B�� A���� ũ��.\t";
	}
	else if(A == B)
	{
		cout << "A�� B�� ����.\t";
	}
	else
	{
		cout << "�߸��� ���� �Է��Ͽ����ϴ�." << endl;
	}
defalt:



	return 0;
}