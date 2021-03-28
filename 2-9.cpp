#include<stdio.h>
int	func(char	*p)
{
	int	n=0;
	while(1)
	{
		if(*p!='\0')
		{
			n++;
			p++;
		}else{
			break;
		}
	}
	return	0;
}

int	main()
{
	char	s[100];
	scanf("%s",s,100);
	int	n=func(s);
	printf("³¤¶È:%d",n);
	return	0;
}
