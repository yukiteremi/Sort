#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"
#include "windows.h"
#include "ctype.h"
main()
{
	int a[100];
	int max;
	int i, j;
	int n, k, jmax, t, jmin, min;
	printf("请输入几个数:");//输入 5 4 2 1 3
	scanf("%d", &n);
	for(i = 0; i < n; i ++)//循环输入 
	{
		printf("请输入第%d个数:", i + 1);
		scanf("%d", &a[i]); 
	}
	printf("\n\n");
	for(i = 0; i < n; i ++)//输出刚输入的数组 
	{
		printf("%d\t", a[i]);
	}
	printf("\n\n");
	k = n;//k用来控制  交换的 
	for(i = 0 ; k != 1 ; i ++)
	{
		for(j = 0; j < k ; j ++)//求最大值  j < k用来控制循环次数  下面有k -- 
		{
			if(j == 0)
			{
				jmax = 0; 
				max = a[j];
			} 
			if(max < a[j])
			{
				max = a[j];
				jmax = j;
			}
		}
		printf("%d %d %d\t", max, jmax, n-i-1);//输出最大值  最大值位置  交换的目标 
		k --;//
		if(a[jmax] != a[n-i-1])//交换 
		{
			t = a[jmax];
			a[jmax] = a[n-i-1];
			a[n-i-1] = t;
		}
	}
	printf("\n\n");
	for(i = 0; i < n ; i ++)
	{
		printf("%d\t", a[i]);
	}
}

