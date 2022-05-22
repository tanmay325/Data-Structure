#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,no,beg,item,end,mid,a[10];
	clrscr();
	printf("Enter array size:");
	scanf("%d",&n);
	printf("\nEnter array elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray elements :");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf ("\nEnter element to search :");
	scanf("%d",&item);
	beg=1;
	end=n;
	mid=(beg+mid)/2;
	while(beg<=end && a[mid]!=item)
	{
		if(item<a[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		mid=(beg+end)/2;
	}
	if(a[mid]==item)
	{
		printf("\n%d found at %d",item,mid);
	}
	else
	{
		printf("\nNO found.");
	}
	getch();
}