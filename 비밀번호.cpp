#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char pw[100];
    char pw2[100];
    char name[100];
    
    cout << "이름입력: ";
    cin >> name;
    cout << endl;

    cout << "암호입력: ";
    cin >> pw;
    cout << endl;

    cout << "다시입력: ";
    cin >> pw2;
    cout << endl;

    if (strcmp(pw, pw2) == 0)
    {
        cout << name << "님께서 로그인하셨습니다." << endl;
    }
    else
    {
        cout << name << "님, 다시 입력하세요." << endl;
    }





    return 0;
}