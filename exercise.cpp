#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	double y;
	int z;
	double a;
	printf("������������أ�kg����\n");
	scanf("%d",&x);
	printf("������������(m)��\n");
	scanf("%lf",&y);
	z = y*y;
	a = 1.0*x/z;
	printf("���bmiΪ��%lf",a);
	system("pause");


	return 0;
}