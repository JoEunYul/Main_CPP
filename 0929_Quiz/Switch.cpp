#include<iostream>

using namespace std;

int score;

int main()
{
	cout << " 시험 점수를 입력해 주세요 : ";
	cin >> score;

	switch (score/10)
	{
		case 10:
		{
			cout << "A학점입니다." << endl;
			break;
		}
		case 9:
		{
			cout << "B학점입니다." << endl;
			break;
		}
		case 8:
		{
			cout << "C학점입니다." << endl;
			break;
		}
		case 7:
		{
			cout << "D학점입니다." << endl;
			break;
		}
		case 6:
		{
			cout << "E학점입니다." << endl;
			break;
		}
		default:
			cout << "F학점입니다." << endl;
		break;
	}



}