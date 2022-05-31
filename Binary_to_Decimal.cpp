#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 11;
    int digit;
    int ans = 0,i=0;
    while(n>0)
    {
        digit = n%10;
        if(digit==1)
            ans = ans+pow(2,i);
       n =    n/10;
       i++;
    }
cout<<ans;
    return 0;
}