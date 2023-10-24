#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the element"<<endl;
    cin >> n;

    if(n <= 0)
    {
        cout << "Invalid number"<<endl;
        return 1;
    }
     int* arr = new int[n];

     cout << "Enter the"<< n << "Element"<<endl;
     for(int i = 0;i < n;i++)
     {
        cin >> arr[i];
     }
     if(n % 2 != 0)
     {
        int midE = n / 2;
        cout << "Mid element is"<<arr[midE]<<endl;
     }else{
        cout << "Can't take the mid element";
     }

     int S = 0;
     int E = n-1;
     while(S < E)
     {
        int temp =arr[S];
        arr[S] = arr[E];
        arr[E] = temp;
        S++;
        E--;
     }
     cout << "Reversed array is";
     for(int i = 0;i < n;i++)
     {
        cout << arr[i]<<" ";
     }
     cout << endl;
     delete[]arr;
     return 0;
}