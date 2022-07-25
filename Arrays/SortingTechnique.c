#include <stdio.h>
#include <conio.h>

#define MAX 100

struct Array
{
	int arr[MAX];
};
void menu()
{
	printf("\n[1]Insertion Sort");
	printf("\n[2]Bubble Sort");
	printf("\n[3]Selection Sort");
	printf("\n[4]Quick Sort");
	printf("\n[5]Merge Sort");
	printf("\n[6]Radix Sort");
	printf("\n[7]Shell Sort");
	printf("\n[8]Heap Sort");
}
void displayArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int Partition(int arr[], int l, int h)
{
	int pivot = arr[h];
	int i = l - 1, j;
	for (j = l; j <= h - 1; ++j)
	{

		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[h]);
	return (i + 1);
}
void QS(int arr[], int l, int h)
{
	int part;
	if (l < h)
	{
		part = Partition(arr, l, h);
		QS(arr, l, part - 1);
		QS(arr, part + 1, h);
	}
}
void quickSort(struct Array obj, int n)
{
	int *arr = obj.arr;
	QS(arr, 0, n);
	displayArray(arr, n);
}

//4 3 2 7 5
void Merge(int arr[], int l, int mid, int h)
{
	int n1 = (mid - l) + 1;
	int n2 = h - mid;
	int arr1[n1];
	int arr2[n2];
	int i, j;
	for (i = 0; i < n1; ++i)
	{
		arr1[i] = arr[l + i];
	}
	for (j = 0; j < n2; ++j)
	{
		arr2[j] = arr[mid + 1 + j];
	}
	i = 0, j = 0;
	int k = l;
	while (i < n1 && j < n2)
	{
		if (arr1[i] < arr2[j])
		{
			arr[k] = arr1[i];
			i++;
			k++;
		}
		else
		{
			arr[k] = arr2[j];
			k++;
			j++;
		}
	}
	while (i < n1)
	{
		arr[k] = arr1[i];
		k++;
		i++;
	}
	while (j < n2)
	{
		arr[k] = arr2[j];
		k++;
		j++;
	}
}
void MS(int arr[], int l, int h)
{
	int mid;
	if (l < h)
	{
		mid = (l + h) / 2;
		MS(arr, l, mid);
		MS(arr, mid + 1, h);

		Merge(arr, l, mid, h);
	}
}
void MergeSort(struct Array obj, int n)
{

	int *arr = obj.arr;
	MS(arr, 0, n - 1);
	displayArray(arr, n);
}
void RadixSort(struct Array obj, int n)
{
	int *arr = obj.arr;
}
void ShellSort(struct Array obj, int n)
{
	int *arr = obj.arr;
	int gap, i, j;
	int isSwap;
	for (gap = n / 2; gap > 0; gap /= 2)
	{
		do
		{
			isSwap = 0;
			for (j = gap; j < n; ++j)
			{
				if (arr[j - gap] > arr[j])
				{
					swap(&arr[j - gap], &arr[j]);
					isSwap = 1;
				}
			}
		} while (isSwap != 0);
	}
	displayArray(arr, n);
}
void selectionSort(struct Array obj, int n)
{
	int *arr = obj.arr;
	int min_ele, i, j;
	for (i = 0; i < n - 1; ++i)
	{
		min_ele = i;
		for (j = i + 1; j < n; ++j)
		{
			if (arr[min_ele] > arr[j])
			{
				min_ele = j;
			}
		}
		swap(&arr[min_ele], &arr[i]);
		printf("After pass %d Array will be : ", i + 1);
		displayArray(arr, n);
	}
	printf("\nAfter Sorting: ");
	displayArray(arr, n);
}
void BubbleSort(struct Array obj, int n)
{
	int *arr = obj.arr;
	int i, temp, j;
	for (i = 0; i < n - 1; ++i)
	{
		for (j = i + 1; j < n; ++j)
		{
			if (arr[i] > arr[j])
			{
				swap(&arr[i], &arr[j]);
			}
		}

		printf("After pass %d Array will be : ", i + 1);
		displayArray(arr, n);
	}
	printf("\nAfter Sorting: ");
	displayArray(arr, n);
}
void InsertionSort(struct Array obj, int n)
{
	int *arr = obj.arr;
	int temp, ptr, i;
	for (i = 0; i < n - 1; ++i)
	{
		temp = arr[i + 1];
		ptr = i;

		while (temp < arr[ptr] && ptr >= 0)
		{
			arr[ptr + 1] = arr[ptr];
			ptr--;
		}
		arr[ptr + 1] = temp;

		printf("After pass %d Array will be : ", i + 1);
		displayArray(arr, n);
	}
	printf("\nAfter Sorting: ");
	displayArray(arr, n);
}

int main()
{

	int n, ch, i;
	struct Array obj;
	printf("\nEnter Size of Array: ");
	scanf("%d", &n);
	//Reading An Array
	for (i = 0; i < n; ++i)
	{
		printf("\nEnter %d Element: ", i + 1);
		scanf("%d", &obj.arr[i]);
	}
	displayArray(obj.arr, n);
	do
	{
		menu();
		printf("\nEnter Your choice: ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			InsertionSort(obj, n);
			break;
		case 2:
			BubbleSort(obj, n);
			break;
		case 3:
			selectionSort(obj, n);
			break;
		case 4:
			quickSort(obj, n);
			break;
		case 5:
			MergeSort(obj, n);
			break;
		case 6:
			break;
		case 7:
			ShellSort(obj, n);
			break;
		case 8:
			break;
		}

	} while (ch >= 1 && ch <= 8);

	return 0;
}
