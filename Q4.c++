#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int x,int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void print()
    {
        cout << "The number is"<< a <<"and" << b << endl; 
    }
};
int main()
{
    complex c1(1,2);
    c1.print();
    complex c2(2);
    c2.print();
    return 0;
}