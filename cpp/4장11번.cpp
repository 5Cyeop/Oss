#include <iostream>
using namespace std;

class ThreeMatrices
{
    int a[3][5] = {{5, 10, 2, 7, 5},{4, 6, 2, 2, 9},{1, 9, 2, 8 ,4}};
    int b[3][5] = {{5, 2, 7, 4, 5},{10, 6, 9, 2, 3},{2, 6, 4, 7, 1}};
    int c[3][5] = {0};

    public:
        int *p = &c[0][0];
        void printC()
        {
            for (int i = 0; i < 15; i++)
            {
                cout << p[i] << " ";
                if((i+1)%5 == 0)
                {
                    cout << endl;
                }
            }
        }
        void buildC(char n)
        {
            for (int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    if (n == '+') 
                    {
                        c[i][j] = a[i][j] + b[i][j];
                    }
                    
                    else if(n == '-')
                    {
                        c[i][j] = a[i][j] - b[i][j];
                    }

                }
            }
        }
};


int main()
{
    ThreeMatrices m;
    cout << "Add..." << endl;   
    m.buildC('+'); 
    m.printC();
    
    cout << "Subtract..." << endl;  
    m.buildC('-'); 
    m.printC();

    return 0;
}