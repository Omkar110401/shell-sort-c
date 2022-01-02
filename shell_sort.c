#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}


void ShellSort(int arr[], int n)
{
	int gap,temp,j;
	for(gap=n/2;gap>=1;gap/=2)
	{
		for(int i=gap;i<n;i++)
		{
			temp=arr[i];
			j=i-gap;
			while(j>=0 && arr[j]>temp)
			{
				arr[j+gap]=arr[j];
				j-=gap;
			}
			arr[j+gap]=temp;
		}
	}
}

void PrintArray(int arr[], int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

int main()
{
	int arr[50],n;
	printf("Enter the array size - ");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Original Array - ");
	PrintArray(arr,n);
	ShellSort(arr,n);
	printf("Sorted Array - ");
	PrintArray(arr,n);
	return 0;
}
