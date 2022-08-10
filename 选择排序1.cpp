#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include <conio.h>

void selection_short(int arr[], int len)
{
	for(int i = 0; i < len - 1; i ++)
	{
		int min = i;
		for(int j = i + 1; j < len; j ++)
		{
			if(arr[j] < arr[min])
			    min = j;
		}
		if(min != i)
		{
			int t = arr[i];
			arr[i] = arr[min];
			arr[min] = t;
		}
		printf("\n\n第%d次排序：", i + 1);
		for(int j = 0; j < len; j ++)
		printf("%d  ", arr[j]);
	}
}

main()
{
	int arr[] = {21,25,49,23,16,8};
	int len = sizeof(arr)/sizeof(int);
	printf("排序前：");
	for(int i = 0; i < len; i ++)
	printf("%d  ", arr[i]);
	selection_short(arr, len); 
	printf("\n\n排序后：");
	for(int i = 0; i < len; i ++)
	printf("%d  ", arr[i]);
}

