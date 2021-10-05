#pragma once
//선언 이름만 있고 구현은 안되어있음
int Add(int A, int B);
int Min(int A, int B);
int Mul(int A, int B);
int Div(int A, int B); 

int Add(int A, int B) // 구현부 
                      // CPP파일 이동하여서 상단에 #include'Until.h'작성 후 구현부를 작성해 놓는다. 
{
	return A + B;
}
int Min(int A, int B)
{
	return A - B;
}
int Mul(int A, int B)
{
	return A * B;
}
int Div(int A, int B)
{
	return A / B;
}