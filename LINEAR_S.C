//Linear search array
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,loc,item,a[20];
	clrscr();
	printf("Enter array size:");
	scanf("%d",&n);
	printf("\nEnter array elements :");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray Elements:");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nEnter array element to search :");
	scanf ("%d",&item);
	a[n+1]=item;
	loc=1;
	while(a[loc]!=item)
	{
		loc=loc+1;
	}
	if(loc==(n+1))
	{
		printf("\nITEM not found!!");
	}
	else
	{
		printf("\n %d item found at %d index.",item,loc);
	}

	getch();
}