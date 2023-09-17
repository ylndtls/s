#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	double y;
	int z;
	double a;
	printf("请输入你的体重（kg）：\n");
	scanf("%d",&x);
	printf("请输入你的身高(m)：\n");
	scanf("%lf",&y);
	z = y*y;
	a = 1.0*x/z;
	printf("你的bmi为：%lf",a);
	system("pause");


	return 0;
}