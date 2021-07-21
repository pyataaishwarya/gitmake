#include<stdio.h>
//bubblesort
void sort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("array elements after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}

