#include <ctime>
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;
// 1. 지도를 초기화 한다.
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

int PlayerX = 1; // 메모리에 넣는거 변수 선언
int PlayerY = 1; // X,Y 플레이어 정수

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

	// Map[X][Y] X,Y좌표를 반복문으로 표현
	// 
	// 2.입력을 받는다.

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
	// 3.처리한다. 
//   플레이어를 움직인다.
// 횟수를 알면 fo문, 무제한은 while


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
	// 4.지도를 그린다.



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

			else if (Map[Y][X] == 0) //0을 공백으로 처리하는 과정
			{
				cout << " " << " ";
			}

			else if (Map[Y][X] == 1)  // 1을 ■ 로 출력하기
			{
				cout << "X" << " ";
			}
			else if (Map[Y][X] == 9)  // 9골인 위치 설정
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
		cout << "클리어 하였습니다" << endl;
	}
}
void MovePlayer(int XDirection, int YDirection)
{
	//탐지
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