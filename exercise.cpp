#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	double y;
	double z;
	double a;
	printf("������������أ�kg����\n");
	scanf("%d",&x);
	printf("������������(m)��\n");
	scanf("%lf",&y);
	z = (double)y*y;
	a = (double)x/z;
	printf("���bmiΪ��%lf",a);
	system("pause");


	return 0;
}