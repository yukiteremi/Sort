#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include <conio.h>

void insert_sort(int arr[], int len)
{
	int i, j, t;
	for(i = 1; i < len; i ++)
	{
		t = arr[i];
		for(j = i - 1; j >= 0 && arr[j] > t; arr[j + 1] = arr[j], j --);
		    
		arr[j + 1] = t; 
	}
	printf("\n\n≈≈–Ú∫Û£∫");
	for(int i = 0; i < len; i ++)
	    printf("%d\t", arr[i]);
}

main()
{
	int arr[] = {2, 9, 5, 4, 8, 1, 6};
	int len = sizeof(arr)/sizeof(int); 
	printf("≈≈–Ú«∞£∫");
	for(int i = 0; i < len; i ++)
	    printf("%d\t", arr[i]);
	insert_sort(arr, len);
}

