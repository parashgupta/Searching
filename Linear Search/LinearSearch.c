#include<stdio.h>
int linearSearch(int x[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(key==x[i])
		{
			return i;
		}
	}
	return -1;
}

void main()
{
	int x[] = {10,20,14,45,38,12,67,23,59,5};
	int n=10;
	printf("%d\n",linearSearch(x,n,5));
	printf("%d\n",linearSearch(x,n,12));
}
