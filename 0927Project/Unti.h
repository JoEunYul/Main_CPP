#pragma once
//���� �̸��� �ְ� ������ �ȵǾ�����
int Add(int A, int B);
int Min(int A, int B);
int Mul(int A, int B);
int Div(int A, int B); 

int Add(int A, int B) // ������ 
                      // CPP���� �̵��Ͽ��� ��ܿ� #include'Until.h'�ۼ� �� �����θ� �ۼ��� ���´�. 
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