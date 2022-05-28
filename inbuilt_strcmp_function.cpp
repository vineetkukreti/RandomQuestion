#include <iostream>
using namespace std;
int getLength(char a[])
{
    int count = 0;
    int i = 0;
    while(a[i]!='\0')
    {
        i++;
        count++;
    }
    return count;
}
int xtrcmp(char a[],char b[])
{
    int n = getLength(a);
    int m = getLength(b);
    if(n!=m)
        return 0;
    int i = 0,j = 0;
    while(i<n)
    {
        if(a[i]!=b[i])
            return 0;
       i++;
      
    }
    return 1;
}

int main()
{
   char a[]  = "hello ";
   char b[]  = "hello ";
   if(xtrcmp(a,b)==1)
        cout<<"String is equal"<<endl;
   else
        cout<<"String is not equal"<<endl;

    return 0;
}

