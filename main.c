#include<stdio.h>
#define SIZE 20
void sort(int a[],int n);
void selectionsort(int a[],int n);
void insertionsort(int a[],int n);
void quicksort(int a[],int d,int n);
void mergesort(int a[],int d,int n);

int main()
{
	int a[SIZE],b[SIZE],c,i,n,d=0;
	printf("enter number of elements:\n");
	scanf("%d",&n);
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("array elements before sorting technique:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("enter the sorting option:\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			sort(a,n);
			break;
		case 2:
			selectionsort(a,n);
			break;
		case 3:
			insertionsort(a,n);
			break;
		case 4:
			quicksort(a,0,n-1);
			break;
		case 5:
			mergesort(a,0,n-1);
			break;
		default:
			printf("invalid input\n");

	}
}
