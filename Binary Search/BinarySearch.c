#include<stdio.h>
int BinarySearch(int x[],int n,int key)
{
	int si=0;  //si -> starting index
	int mid;
	while(si<=n)
	{
		mid = (si+n)/2;
		if(key==x[mid])
		{
		return mid;
		}
		else if(key<x[mid])
		{
			n=mid-1;
		}
		else if(key>x[mid])
		{
			si=mid+1;
		}
	}
		return -1;
}

void main()
{
int x[] = {2,5,8,10,12,15,18,50,80,90};   //Array should be sorted
int n=10;
printf("%d\n",BinarySearch(x,n,5));
printf("%d\n",BinarySearch(x,n,200));
}