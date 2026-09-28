#include <stdio.h>

int main()
{
	int amount = 100;
	printf("请输入你有多少钱：");
	scanf("%d",&amount);
	
	int price = 0;
	printf("请输入金额（元）：");
	scanf("%d",&price);
	
	int change = amount - price;
	
	printf("找您%d元。\n",change);
	
	return 0;
}
