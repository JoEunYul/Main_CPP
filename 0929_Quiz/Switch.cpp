#include<iostream>

using namespace std;

int score;

int main()
{
	cout << " ���� ������ �Է��� �ּ��� : ";
	cin >> score;

	switch (score/10)
	{
		case 10:
		{
			cout << "A�����Դϴ�." << endl;
			break;
		}
		case 9:
		{
			cout << "B�����Դϴ�." << endl;
			break;
		}
		case 8:
		{
			cout << "C�����Դϴ�." << endl;
			break;
		}
		case 7:
		{
			cout << "D�����Դϴ�." << endl;
			break;
		}
		case 6:
		{
			cout << "E�����Դϴ�." << endl;
			break;
		}
		default:
			cout << "F�����Դϴ�." << endl;
		break;
	}



}