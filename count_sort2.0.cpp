#include<iostream>
using namespace std;
void print(int a[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

}
void count_sort(int a[],int n)
{
	int max = a[0];
	// max ke liye
	for(int i = 0;i<n;i++)
	{
		if(a[i]>max)
			max = a[i];
	}
	
	int count[max] = {0};
	// frequency 
	for(int i = 0;i<n;i++)
	{
		count[a[i]]++;
	}
	
	for(int i = 1;i<=max;i++)
	{
		count[i] = count[i]+count[i-1];
	}
	int b[n];
	for(int i = n-1;i>=0;i--)
	{
		b[--count[a[i]] ]= a[i];
	}
	for(int i = 0;i<n;i++)
	{
		a[i] = b[i];
	}
	
	
}
int main()
{
	int a[] = {6,1,7,5,1,7,4,7,1,8,3,1,8,5,2,8,9,1,1,2,8};
	int n = sizeof(a)/sizeof(a[0]);
	int k = 3;
	cout<<"Array before sorting : ";
	print(a,n);
	count_sort(a,n);
	cout<<"\nArray after sorting  : ";
	print(a,n);
	int t = 0;
	while(n>0)
	{
		if(t==3)
		{
			cout<<"\n"<<" "<<a[n]<<" sd"<<endl;
			break;
		}
		t++;
		n--;
	}
	
}
