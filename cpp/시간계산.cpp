#include <iostream>
using namespace std;

class ConvertSecond
{
    public:
        double getResult();
        void setData();

    private:
        int hour = 0;
        int minute = 0;
        int second = 0;
};


void ConvertSecond::setData()
    {
        cout << "시(hour)입력: ";
        cin >> hour;

        cout << "분(minute)입력: ";
        cin >> minute;

        cout << "초(second)입력: ";
        cin >> second;


    }

double ConvertSecond::getResult()
    {
        return hour * 3600 + minute * 60 + second;
    }




int main()
{
    ConvertSecond a;
    a.setData();
    cout << "입력하신 시간은 총 " << a.getResult() << "초 입니다." << endl;

    ConvertSecond b;
    cout << "기본 시간은 총 " << b.getResult() << "초 입니다." << endl;


    return 0;
}