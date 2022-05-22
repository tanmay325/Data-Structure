//Deletion Array Element
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,item,n,j,k,a[20];
	clrscr();
	printf("\nEnter Array size :");
	scanf("%d",&n);
	printf("\nEnter array elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nBefore Deletion");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nEnter position to delete element:");
	scanf("%d",&k);

//	item=a[k];
	for(j=k;j<=(n-1);j++)
	{
		a[j]=a[j+1];
	}
	n=n-1;

	printf ("\nAfter Deletion array element:");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}


	getch();
}
