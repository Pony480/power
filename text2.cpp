#include <stdio.h>
int main()
{
	int n,m,p=0,max=0;
	int a[100]={0};      //���100��
	printf("��������������:\n");
	scanf("%d",&n);      //1-100֮�����������������
	printf("������n������:\n");
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
	printf("����Ӷκ�Ϊ%d\n",max);
	return 0;
}