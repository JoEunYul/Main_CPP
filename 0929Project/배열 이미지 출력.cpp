#include <ctime>
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;
// 1. ������ �ʱ�ȭ �Ѵ�.
char Map[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,1,0,0,0,0,0,1},
	{1,0,0,1,0,0,0,0,1,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,0,0,0,0,1,1,0,0,1},
	{1,1,1,0,0,1,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,1,0,1},
	{1,0,0,0,0,0,0,1,9,1},
	{1,1,1,1,1,1,1,1,1,1}

};

int PlayerX = 1; // �޸𸮿� �ִ°� ���� ����
int PlayerY = 1; // X,Y �÷��̾� ����

bool(bIsRunning) = true;
int Meg = 0;
void Process(char Key);
void Draw();
void MovePlayer(int XDirection, int YDirection);
void Finish();
void Input();


bool IsGoal();
char Key;

void ChangeColor(int Color);

int main()
{

	// Map[X][Y] X,Y��ǥ�� �ݺ������� ǥ��
	// 
	// 2.�Է��� �޴´�.

	while (bIsRunning)
	{
		Input();
		Process(Key);
		system("cls");
		Draw();
	 }

		
	


	return 0;
}

void Input()
{
	Key = _getch();

}
void Process(char Key)
{
	// 3.ó���Ѵ�. 
//   �÷��̾ �����δ�.
// Ƚ���� �˸� fo��, �������� while


	switch (Key)
	{
		//Up
	    case 'w':
	    case 'W':
	    {
		MovePlayer(0, -1);
		break;
	    }
	    //Down
	    case 's':
	    case 'S':
	    {
		MovePlayer(0, 1);
		break;
	    }
	    //Left
	    case 'a':
	    case 'A':
	    {
		MovePlayer(-1, 0);
		break;
	    }
	    //Right
	    case 'd':
	    case 'D':
	    {
		MovePlayer(1, 0);
		break;
	    }
	    case 'q':
	    case 'Q':
	    {
		bIsRunning = false;
	    }

	}

	if(IsGoal())
	{
		bIsRunning = false;
	}

	

}
void Draw()
{
	// 4.������ �׸���.



	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				ChangeColor(171);
				cout << "P" << "";
				ChangeColor(7);
				cout << " ";
			}

			else if (Map[Y][X] == 0) //0�� �������� ó���ϴ� ����
			{
				cout << " " << " ";
			}

			else if (Map[Y][X] == 1)  // 1�� �� �� ����ϱ�
			{
				cout << "X" << " ";
			}
			else if (Map[Y][X] == 9)  // 9���� ��ġ ����
			{
				ChangeColor(142);
				cout << "G" << "";
				ChangeColor(7);
				cout << " ";
			}
		}		
		cout << endl;
	}
	if (Meg == 1)
	{
		cout << "Ŭ���� �Ͽ����ϴ�" << endl;
	}
}
void MovePlayer(int XDirection, int YDirection)
{
	//Ž��
	int NewPlayeX = PlayerX + XDirection;
	int NewPlayeY = PlayerY + YDirection;

	if (Map[NewPlayeY][NewPlayeX] == 0)
	{
		PlayerX = NewPlayeX;
		PlayerY = NewPlayeY;
	}
	else if (Map[NewPlayeY][NewPlayeX] == 9)
	{
		PlayerX = NewPlayeX;
		PlayerY = NewPlayeY; 
		Meg = 1;
		
	}
}
bool IsGoal()
{
	return Map[PlayerY][PlayerX] == 9 ? true : false;
	/*if (Map[PlayerY][PlayerX] == 9)
	{
		return true;
	}*/
		
}

void ChangeColor(int Color)
{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}