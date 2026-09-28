#include <stdio.h>

int main()

{
	int watermalon = 0;
	
	printf("请输入多少个好西瓜（个）");
	scanf("%d",&watermalon);
	
	int total = 100 - watermalon;
	
	printf("共有%d个\n", total);
	
	return 0; 
}
