#include<stdio.h>

int judge(int* nums, int numsSize){
    int k;
    int i;
    int j;
    for(i=0;i<numsSize;i++)
	{
		for(j=0;j<numsSize;j++)
		{
			if((nums[j]==nums[i])&&(j!=i))
			{
				k=1;
				break;
                printf("i=%d,j=%d,k=%d\n",i,j,k);
			}
			else
			{
				k=0;
			}
		}
    }
//    printf("%d\n",numsSize);
    return k;
}
 

int main()
{
	int a[6]={0,4,5,0,3,6};
	int c;
	c=judge(a,6);
	return 0;
}