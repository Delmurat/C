#include<stdio.h>

int	func(int	i)
{
	int	a=i%10;
	int	b=(i/10)%10;
	int	c=i/100;
	if(a*a*a+b*b*b*+c*c*c==i)
	{
		return	1;
	}else{
		return	0;
	}
	
}

int	main()
{
	int	a=0;
	printf("�������֣��������ǲ���ˮ�ɻ���\n");
	scanf("%d",&a);
	int	i=func(a);
	if(i==1)
	{
		printf("%d��ˮ�ɻ���",a);
	}else{
		printf("%d����ˮ�ɻ���",a);
	}
	return	0;
}
