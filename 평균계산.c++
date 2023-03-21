#include <iostream>
using namespace std;

int main()
{
    int kor, eng, mat, sum = 0;
    
    cout << "국영수 점수 입력:";
    cin >> kor >> eng >> mat;
 
    sum = kor + eng + mat;

    cout << "합계:" << sum << endl;
    cout << sum/3.0 << endl;

    return 0;
}