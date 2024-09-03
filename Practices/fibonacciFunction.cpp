#include <iostream>
using namespace std;
int function(int m)
{
    int Arr[m];
    Arr[0] = 0;
    Arr[1] = 1;
    for (int i = 2; i < m; i++)
    {
        Arr[i] = Arr[i - 1] + Arr[i - 2];
    }
    for (int i = 0; i < m; i++)
    {
        cout << Arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Fibonacci Number is : ";
    function(n);
    return 0;
}
