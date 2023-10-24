#include<iostream>
using namespace std;

class SumSeries{
    int n;
    int k;
    int sum = 0;
    public:
    SumSeries()
    {
        cout << "Enter the number"<<endl;
        cin >> n;
        for(int i = 0;i <= n;i++)
        {
            sum = sum + k;
            k = k*10+9;
        }
    }
    friend int show(SumSeries);
};
int show(SumSeries f)
{
    cout << "The sum is"<<f.sum;
}
int main()
{
        SumSeries p;
        show(p);
}