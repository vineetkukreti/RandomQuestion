#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s,m;

cout<<"Enter first string = ";
cin>>s;
cout<<"Enter second string = ";
cin>>m;
cout<<"\nString : "<<s<<endl;
int n = s.length();
int l = m.length();
for(int i=0;i<n;i++)
{
    for(int j=1;j<l;j++)
    {
        if(s[i]==m[j])
        {
           while(j<l)
           {
               s[i]=s[i+1];
               j++;
           }
           --n;
            
        }
    }
    
}
cout<<"\nchanged string : "<<s;
return 0;
}