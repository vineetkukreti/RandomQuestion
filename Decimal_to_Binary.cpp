#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    int ans = 0,digit,i=0;
    while(n!=0)
    {
        digit = n&1;
        
        ans = pow(10,i)+digit;
        i++;
        n=n>>1;
    }
    cout<<"Digit : "<<ans;
    return 0;
}