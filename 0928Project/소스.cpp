#include<iostream>
#include <windows.h> //windows ������� include

using namespace std;
//d���� �����ڰ� ����       
char Input();
void Process(char Key);
void Render();

//�����ڰ� �����ϴ� Process
void CustomProcess(char Key);

//�����ڰ� �����ϴ� Render
void CustomRender();

int Gold = 0;

bool bGameState = true;
// ����
// ��������� ���� 
int main()
{   
    // Game engine
    // ������� �Է��� �޴´�. Input
    // �׸��� �׸���. (���� ���� ��´�) Render
    // ������Ʈ�� ��ġ�Ѵ�. Process

    while (bGameState) // ���� �˼� ������ ���
    {

        char Key = Input();
        Process(Key);
        Render();

    }

    return 0;
}

//    ��������ȯ
char Input() // ���� �ڵ�
{
    //�ܼ��� �ܼ� �Է�
    //���̽�ƽ, �����е�
    // ��ġ�е�, ���콺 ��
    char Key;

    cin >> Key;

    return Key;
}
void Process(char Key)
{
    cout << Key << endl; //log

    if (Key == 'q'|| Key == 'Q')
    {
        bGameState = false;  //��ܿ� while ���� ����
    }

    if (Key == 'G' || Key == 'g')
    {
        Gold++;
    }

}
void Render()
{
    // ���α׷��� ������� ���� 
    system("cls"); //�ܼ�â clear
    cout << "�׸���." << endl;

    CustomRender();
}
void CustomProcess(char Key)
{
   
}
void CustomRender()
{
    cout << "Gold : " << Gold << endl;
}