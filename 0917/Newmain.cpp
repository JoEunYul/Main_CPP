#include<iostream>

using namespace std;

int main()
{

	/*
	type
	int -> float
	float -> int
	float <- doible
	casting(����ȯ)
	(��)��������
	static_cast<���ο���> (���� ����)
	int -> char
	char -> int
	*/

	unsigned int;


	int Math = 0;
	int Lang = 0;
	int Engl = 0;
	int Sum = 0;
    

	char A = 65;
	int B = 'B';

	int Sum = A + B;

	cout << static_cast<int>(Sum) << endl;

	//cout << " ���� ������ �Է��ϼ��� : ";
	//cin >> Math;
	//cout << " ��� ������ �Է��ϼ��� : ";
	//cin >> Lang;
	//cout << " ���� ������ �Է��ϼ��� : ";
	//cin >> Engl;

	//Sum = Math + Lang + Engl;
	//float Avg = static_cast<float>(Sum) / 3.0f;

	//cout << "3������ ������ ���� " << Sum << " �̸�, ��հ��� " << Avg << " �Դϴ�. " << endl;


	char C = 512;
	cout << C << "finish" << endl;







	return 0;
	// �հ����� ,�������
}