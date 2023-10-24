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
    void print()
    {
        cout << "Your number is " << a << "and" << b<<endl;
    }
};
int main()
{
    complex c(4,6);
    c.print();
    return 0;
}