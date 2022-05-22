#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[20],j,temp;
	clrscr();
	printf("Enter size:");
	scanf("%d",&n);
	printf("\n Enter element :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nBefore sorting :");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-1);j++)
		{
			if(a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("\nAfter element:");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
	getch();
}