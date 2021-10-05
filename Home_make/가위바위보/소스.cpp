
#include<iostream>
#include<time.h>

using namespace std;
int main()
{
	int  i = 0;

	// 256가지 -> 0~255
	unsigned char c = 0;
	
	c = 0;
	c = 255;

	char c1 = 0;

	// -128 ~ 0 ~ 127 양수 음수 둘다 표현
	c1 = 255;


	// 정수와 실수는 메모리를 표현하는것 자체가 다르다.

	int a = 4 + 4.0;

	// 정수표현 방식과 실수 표현 방식은 다르다.
	// 실수 표현방식은 정밀도에 의존한다.
	// 따라서 double 자료형이 더 아래의 소수점까지 정확하게 표현히 가능하다.

	// 정수는 정수끼리, 실수는 실수 끼리.

	float f = 10.2415f + (float)20;

	// 실수를 상수로 적을 경우 소수점 뒤에 f 를 붙이면 Float 자료형으로
	// f를 붙이지 않으면 double 자료형으로 출력된다.



	// 연산자
	// 대입연산자, =  
	
	// 산술 연산자
	// +, -, *, /, %(모듈러스, 나머지, 피연산자가 모두 정수일때 가능)
	// ++, --
	// 한 단계 증가 또는 감소

	int data = 10 + 10;

	// data = data + 20;

	data += 20;

	data = 10 / 3;


	data = 0;
	//전위, 후위 차이점 후위는 연산 우선순위가 대입연산자보다 늦춰진다 가장 마지막에 연산된다.
	++data; //전위(전치) 
	data++; //후위(후치)



	//후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중이로 밀린다.
	data = 0;

	a = 10;
	data = ++a;
	data = a++;


	data = 0;
	data++;
	data++;

	// 논리 연산자
	// !(역), &&(AND) ||(OR)
	// 참(true), 거짓(false)
	// 참 : 0이 아닌 모든 수, 대표적으로 1
	// 거짓 : 0

	bool truefalse = false;

	bool IsTure = 100;

	IsTure = true;
	IsTure = !true;

	int iTrue = 0;
	iTrue = !iTrue;

	iTrue = 100 && 200;
	iTrue = 0 || 0;

	// 비교 연산자
    // == , !=
	// --, !-, <. <=, >, >=
    // 참, 거짓

	// 구문
	// if, else
	
	data = 0;

	if (0 && 200)
	{
		data = 100;
	}

	if (data == 100)
	{

	}




	// switch case



	// 삼향 연산자
	// :?


	return 0;

}
	









