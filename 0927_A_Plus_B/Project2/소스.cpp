#include<iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;

	cout << "A + B �� ���� ���ϴ� �� �Դϴ�. " << endl;
	
	cout << "A�� �Է� �ϼ���. (��, 1~10 ������ ����) :";
	
	tryagain:

	cin >> A;
	if (1 <= A && A <= 10)
	{
		cout << "B�� �Է� �ϼ���\t";
		cin >> B;
	}
	else
	{
		cout << "A�� �ٽ� �Է��� �ּ���" << endl;
		goto tryagain;
	}
	
	cout << "A + B�� ���� " << A + B << "�Դϴ�." << endl;


	return 0;
}