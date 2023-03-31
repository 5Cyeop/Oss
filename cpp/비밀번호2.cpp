#include <iostream>
#include <string>
using namespace std;


int main()
{
    string name;
    string pw;
    string pw2;

    cout << "이름입력:";
    getline(cin ,name);
    cout << endl;

    cout << "암호입력:";
    getline(cin, pw);
    cout << endl;
    
    cout << "다시입력:";
    getline(cin, pw2);
    cout << endl;

    if (pw == pw2)
        cout << name << "님께서 로그인하셨습니다." << endl;
    
    else
        cout << name << "님 다시 입력하세요." <<endl;



    return 0;
}