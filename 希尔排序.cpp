#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include <conio.h>

void sort(int arr[], int len)
{
	int gap = len / 2;
	int j;
	while(gap >= 1)
	{
		for(int i = gap; i < len; i ++)
		{
			int t = arr[i];
			for(j = i - gap; j >= 0 && arr[j] > t; j -= gap)
			{
				arr[j + gap] = arr[j];
			}
			arr[j + gap] = t;
		}
		gap /= 2;
	}
	for(int i = 0; i < len; i ++)
	    printf("%d ", arr[i]);
}

main()
{
	int arr[] = {84, 83, 88, 87, 61, 50, 70, 60, 80, 99};
	int len = sizeof(arr)/sizeof(int);
	sort(arr, len);
}

