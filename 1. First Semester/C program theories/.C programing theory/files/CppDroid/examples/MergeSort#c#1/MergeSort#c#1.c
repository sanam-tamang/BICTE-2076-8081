/*
Summary: Merge sort is a divide and conquer comparison-based sorting algorithm. It works as follows:-
1. Divide the unsorted list into n sublists, each containing 1 element (a list of 1 element is considered sorted).
2. Repeatedly merge sublists to produce new sublists until there is only 1 sublist remaining. This will be the sorted list.
Complexity - O(n·log n)
*/

#include <stdio.h>
void mergeSort(int [], int, int, int);
void partition(int [],int, int);
int main()
{
	int list[50];
	int i, size;


	printf("Enter total number of elements:");
	scanf("%d", &size);

	printf("Enter the elements:\n");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &list[i]);
	}

	partition(list, 0, size - 1);

	printf("After merge sort:\n");
	for(i = 0;i < size; i++)
	{
		printf("%d   ",list[i]);
	}
	getch();
	return 0;

}

void partition(int list[],int low,int high)
{
	int mid;
	if(low < high)
	{
		mid = (low + high) / 2;
		partition(list, low, mid);
		partition(list, mid + 1, high);
		mergeSort(list, low, mid, high);
	}
}

void mergeSort(int list[],int low,int mid,int high)
{
	int i, mi, k, lo, temp[50];
	lo = low;
	i = low;
	mi = mid + 1;
	while ((lo <= mid) && (mi <= high))
	{
		if (list[lo] <= list[mi])
		{
			temp[i] = list[lo];
			lo++;
		}
		else
		{
			temp[i] = list[mi];
			mi++;
		}
		i++;
	}
	if (lo > mid)
	{
		for (k = mi; k <= high; k++)
		{
			temp[i] = list[k];
			i++;
		}
	}
	else
	{
		for (k = lo; k <= mid; k++)
		{
			temp[i] = list[k];
			i++;
		}
	}
	for (k = low; k <= high; k++)
	{
		list[k] = temp[k];
	}
}

/*
Input: Enter total number of elements:5
Enter the elements:
12
36
22
76
54
*/
