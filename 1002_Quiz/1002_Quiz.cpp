#include<iostream>

using namespace std;


int aExpense;
int bExpense;
int cPrise;
int Count;

int main()
{
	cout << "�������(A)�� �Է��� �ּ��� : ";
	cin >> aExpense;

	cout << "���� ���(B)�� �Է��� �ּ��� : ";
	cin >> bExpense;

	cout << "�Ǹ� ����(C)�� �Է��� �ּ��� : ";
	cin >> cPrise;

	if (cPrise <= bExpense)
	{
		cout << -1 << endl;
	}
	cout << aExpense / (cPrise - bExpense);


	return 0;
}
