//Given an unsorted array of positive integers, design an algorithm and implement it using a program
//to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity
//= O(n log n))

#include<iostream>
using namespace std;

void print(int a[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void merge(int a[],int low,int mid,int high)
{
	int i = low;
	int b[100];
	int j = mid+1,k = low;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
			{
				b[k] = a[i];
				i++;
			}
			else
			{
				b[k] = a[j];
				j++;
			}
			k++;
	}
	while(i<=mid)
	{
		b[k] = a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		b[k] = a[j];
		k++;
		j++;
	}
	for(int i = low;i<=high;i++)
	{
		a[i] = b[i];
	}
}
void merge_sort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid = (low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
	}
	
}
int main()
{
	int a[] = {12,34,54,0,45,7,10,34};
	int n = sizeof(a)/sizeof(a[0]);
	merge_sort(a,0,n-1);
	print(a,n);
	int flag = 0;
	cout<<endl;
	for(int i = 1;i<n;i++)
	{
		if(a[i-1]==a[i])
		{
			flag = 1;
		}
	}
	if(flag)
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}
