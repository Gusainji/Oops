#include<iostream>
using namespace std;
// int main()
// {
//     int a[] = {1,2,3,4,5};
//     //cout << a[0];
//     int *p = a;
//     cout << *p;
// }
int fact(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    int a;
    cout << "Enter the number"<<endl;
    cin >> a;
    cout<<"Factorial of"<< a <<"is"<< fact(a)<<endl;
    return 0;
}