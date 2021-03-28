#include<stdio.h>

int	main()
{
	printf("输入一个数");
	int	a;
	scanf("%d",&a);
	if(0<=a && a<=20)
	{
		printf("ok");
	
	}
	else if(a<=40 && a<=50){
		printf("ok again");
	}
	if(a>50){
		printf("FUCK	 NO");
	}
	
	//default:
		//printf("fuck");
		//break;
	
	
	return	0;
}
