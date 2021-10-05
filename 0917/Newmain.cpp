#include<iostream>

using namespace std;

int main()
{

	/*
	type
	int -> float
	float -> int
	float <- doible
	casting(형변환)
	(형)원래형태
	static_cast<새로운형> (원래 형태)
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

	//cout << " 수학 점수를 입력하세요 : ";
	//cin >> Math;
	//cout << " 언어 점수를 입력하세요 : ";
	//cin >> Lang;
	//cout << " 영어 점수를 입력하세요 : ";
	//cin >> Engl;

	//Sum = Math + Lang + Engl;
	//float Avg = static_cast<float>(Sum) / 3.0f;

	//cout << "3과목의 점수의 합은 " << Sum << " 이며, 평균값은 " << Avg << " 입니다. " << endl;


	char C = 512;
	cout << C << "finish" << endl;







	return 0;
	// 합계점수 ,평균점수
}