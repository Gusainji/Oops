#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:
    void input()
    {
        cout << "Enter real and img number"<<endl;
        cin >> real;
        cin >> img;
    }
    complex operator+(complex obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
    void output()
    {
        cout << "output is"<<real<< "+"<<img;
    }
};
int main()
{
    complex c1,c2,res;
    cout << "Enter the c1 number"<<endl;
    c1.input();
    cout << "Enter the c2 number"<<endl;
    c2.input();

    res= c1+c2;
    res.output();
    return 0;
}