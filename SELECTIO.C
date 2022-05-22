#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,a[20],k,temp,min,j,loc;
	clrscr();
	printf("Enter size:");
	scanf("%d",&n);
	printf("\n Enter element :");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nBefore sorting :");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	for(k=1;k<=(n-1);k++)
	{
		min=a[k];
		loc=k;
		for(j=(k+1);j<=n;j++)
		{
			if(min>a[j])
			{
			min=a[j];
			loc=j;
			}
		}
		temp=a[k];
		a[k]=a[loc];
		a[loc]=temp;
	}
	printf("\nAfter element:");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}





