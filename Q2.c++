#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex()
    {
        cout << "Enter the number of a and b"<< endl;
        cin >> a >> b;
    }
    void print()
    {
        cout<<"your number is "<< a << "+" << b<<endl;
    }
};
int main()
{
    complex c;
    c.print();
    return 0;
}