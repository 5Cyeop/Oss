#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100] = "안녕하세요?";
    char b[100] = "날씨가 참 좋군요.";
    char c[100] = "안녕히 계세요!";

    cout << "함수 사용" << endl;

    cout << strlen(a) << " " << strlen(b) << " " <<  strlen(c) << endl;

    cout << "반복문으로 계산" << endl;

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i + 1] == '\0')
        {
            cout << i + 1 << " ";
        }
    }

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i + 1] == '\0')
        {
            cout << i + 1 << " ";
        }
    }
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i + 1] == '\0')
        {
            cout << i + 1 << " " << endl;
        }
    }
    

        

    return 0;
}