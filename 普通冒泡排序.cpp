#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include <conio.h>

void bubble_sort(int arr[], int len)
{
	int count = 0;
	int flag; 
	for(int i = 1; i < len; i ++)
	{
		flag = 0;
		for(int j = 0; j < len - i; j ++)
		{
			if(arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				flag = 1;
			}
		}
		if(!flag)
		    break;
	} 
}

main()
{
	int arr[] = {21,25,49,23,16,8};
	int len = sizeof(arr)/sizeof(int);
	printf("≈≈–Ú«∞£∫");
	for(int i = 0; i < len; i ++)
	    printf("%d\t", arr[i]);
    bubble_sort(arr, len);
	printf("\n\n≈≈–Ú∫Û£∫");
	for(int i = 0; i < len; i ++)
	    printf("%d\t", arr[i]);
}

