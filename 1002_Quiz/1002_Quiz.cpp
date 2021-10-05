#include<iostream>

using namespace std;


int aExpense;
int bExpense;
int cPrise;
int Count;

int main()
{
	cout << "고정비용(A)을 입력해 주세요 : ";
	cin >> aExpense;

	cout << "가변 비용(B)을 입력해 주세요 : ";
	cin >> bExpense;

	cout << "판매 가격(C)을 입력해 주세요 : ";
	cin >> cPrise;

	if (cPrise <= bExpense)
	{
		cout << -1 << endl;
	}
	cout << aExpense / (cPrise - bExpense);


	return 0;
}
