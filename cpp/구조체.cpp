#include <iostream>
#include <cmath>
using namespace std;

struct Line 
{
    public:
    int sx, sy;
    int ex, ey;
};

int main()
{
    struct Line myline;

    cout << "시작점 좌표 정수 두 개를 입력하세요." << endl;
    cin >> myline.sx >> myline.sy;
    cout << "끝점 좌표 정수 두 개를 입력하세요." << endl;
    cin >> myline.ex >> myline.ey;

    double d = sqrt(pow(myline.ex - myline.sx, 2) + pow(myline.ey - myline.sy, 2));
    cout << "myline의 길이는 " << d << "입니다." << endl;

    return 0;
}