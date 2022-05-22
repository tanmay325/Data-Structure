#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,ptr,a[20],n,temp;
	clrscr();
	printf("Enter size :");
	scanf("%d",&n);
	printf("\n Enter array element :");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Before sorting:");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	for(k=1;k<=(n-1);k++)
	{
		for(ptr=1;ptr<=(n-k);ptr++){
			if(a[ptr]>a[ptr+1]){
				temp=a[ptr];
				a[ptr]=a[ptr+1] ;
				a[ptr+1]=temp;
			}
		}
	}
	printf("\nAfter Sorting: ");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}