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
	printf("�����뼸����:");//���� 5 4 2 1 3
	scanf("%d", &n);
	for(i = 0; i < n; i ++)//ѭ������ 
	{
		printf("�������%d����:", i + 1);
		scanf("%d", &a[i]); 
	}
	printf("\n\n");
	for(i = 0; i < n; i ++)//�������������� 
	{
		printf("%d\t", a[i]);
	}
	printf("\n\n");
	k = n;//k��������  ������ 
	for(i = 0 ; k != 1 ; i ++)
	{
		for(j = 0; j < k ; j ++)//�����ֵ  j < k��������ѭ������  ������k -- 
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
		printf("%d %d %d\t", max, jmax, n-i-1);//������ֵ  ���ֵλ��  ������Ŀ�� 
		k --;//
		if(a[jmax] != a[n-i-1])//���� 
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

