#include<stdio.h>
#include<conio.h>

void main()
{
	int i,temp,a[10],j,n;
	clrscr();
	printf("Enter array size :");
	scanf("%d",&n);
	printf("\nEnter array element :\n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nYou Entered : \n");
	for (i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
	for (i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp )
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\nSorted array :\n");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}

	getch();
}