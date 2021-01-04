#include <stdio.h>

void	fd_swap(int *n1, int *n2);

void	fd_merge(int arr[], int l, int mid, int h);

void	fd_merge_sort(int arr[], int l, int h)
{
	if (l < h)
	{
		int mid = (l + h) / 2;
		fd_merge_sort(arr, l, mid);
		fd_merge_sort(arr, mid + 1, h);
		fd_merge(arr, l, mid, h);
	}
}

void	fd_swap(int *n1, int *n2)
{
	int tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void	fd_merge(int arr[], int l, int mid, int h)
{
	int i;
	int j;
	int k;
	int n1;
	int n2;

	n1 = mid - l + 1;
	n2 = h - mid;
	
	int left[n1];
	int right [n1];

	i = 0;
	while (i < n1)
	{
		left[i] = arr[l];
		l++;
		i++;
	}
	j = 0;
	while (j < n2)
	{
		arr[j] = arr[l];
		l++;
		j++;
	}
	i = 0;
	j = 0;
	k = l;
	while (i <= n1 && j <= n2)
	{
		if (left[i] <= right [j])
		{
			arr[k] = left[i];
			i++;
		}
		else
		{
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	while (i <= n1)
	{
		arr[k] = left[i];
		i++;
		k++;
	}
	while (j <= n2)
	{
		arr[k] = right[j];
		j++;
		k++;
	}

}

int	main(void)
{
	int numbers[] = {8, 1, 0, 7, 3, 4, 9, 6, 5, 2};
	int size;
	int i;

	size = sizeof(numbers) / sizeof(*numbers);
	
	printf("UNSORTED LIST:\n");
	i = 0;
	while (i <= size - 1)
	{
		printf("%d ", numbers[i]);
		i++;
	}

	fd_merge_sort(numbers, 0, size - 1);
	printf("\n");

	printf("SORTED LIST:\n");
	i = 0;
	while (i <= size)
	{
		printf("%d ", numbers[i]);
		i++;
	}
}
