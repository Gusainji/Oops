#include<iostream>
using namespace std;

class I{
    int val;
    public:
    I()
    {
        val = 10;
    }
    void operator++()
    {
        val = val+5;
    }
    void display()
    {
        cout << "The value is"<< val <<endl;
    }
};
int main()
{
    I in;
    ++in;
    in.display();
    return 0;
}