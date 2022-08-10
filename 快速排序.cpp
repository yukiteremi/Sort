#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include <conio.h>

int partion(int arr[], int low, int high)
{
	int t = arr[low];
	while(low < high)
	{
		while(arr[high] >= t && low < high)
		    high --;
        arr[low] = arr[high];
        
        while(arr[low] <= t && low < high)
            low ++;
        arr[high] = arr[low];
	}
	arr[low] = t;
	return low;
}

void quick_sort(int arr[], int low, int high)
{
	if(low < high)
	{
		int mid = partion(arr, low, high);
		quick_sort(arr, low, mid - 1);//×óÐòÁÐ 
		quick_sort(arr, mid + 1, high);//ÓÒÐòÁÐ 
	}
}

main()
{
	int arr[] = {25,36,12,36,50,76,66,95};
	int len = sizeof(arr)/sizeof(int);
	printf("ÅÅÐòÇ°£º");
	for(int i = 0; i < len; i ++)
	    printf("%d ", arr[i]);
	
	quick_sort(arr, 0, len - 1);
	
	printf("\n\nÅÅÐòºó£º");
	for(int i = 0; i < len; i ++)
	    printf("%d ", arr[i]);
}

