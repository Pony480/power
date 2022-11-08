#include <stdio.h>
int main()
{
	int n,m,p=0,max=0;
	int a[100]={0};      //最多100个
	printf("请输入整数个数:\n");
	scanf("%d",&n);      //1-100之间的正整数才有意义
	printf("请输入n个整数:\n");
	for(m=0;m<n;m++)
        scanf("%d",&a[m]);
	for(m=0;m<n;m++)
	{
		if(p<0)
			p=a[m];
		else
			p=p+a[m];
		if(max<p)
			max=p;
	}
	printf("最大子段和为%d\n",max);
	return 0;
}