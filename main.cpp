#include <stdio.h>
void main()
{
	char *s = "What a nice day!";
	char *p = NULL;  //指向单词的开始
	char *q = NULL;  //指向单词的结束
	q = s;
	while( * q) q ++;
	q = q - 1;
	p = q;
	int i;
	while(1)
	{
		while(p != s && *p != ' ')
			 p = p - 1;
		if(p == s)
				{
					for(i = 0; i <= q - p; i ++ )
				    putchar( * (p+i));
					break;
		}
		for(i = 1; i <= q - p; i++ )
		putchar(*(p+i));
		putchar(*p);
		q = p - 1;
		p = q;
	}
       printf("version 1.0\n");

}