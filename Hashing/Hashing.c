#include<stdio.h>
#define capacity 10

int x[capacity];

int  hashcode(int v)
{
	return v%capacity;
}

void init()
{
	int i;
	for(i=0;i<capacity;i++)
	{
		x[i] =-1;
	}
}

void insert(int v)
{
	x[hashcode(v)] = v;
}

void Search(int v)
{
	if(hashcode(v)==v) printf("Data found At index %d\n",hashcode(v));
	else printf("Data Not Found");
}

void showAll()
{
	printf("All Data \n");
	int i;
	for(i=0;i<capacity;i++)
	{
		printf("x[%d] => %d\n",i,x[i]);
	}
}

void main()
{
	int i;
	init();
	for(i=9;i>=1;i--)
	{
		insert(i);
	}
	insert(66);
	showAll();
	Search(8);
	Search(100);
}
