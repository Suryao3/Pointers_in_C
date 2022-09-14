#include<stdio.h>

int main()
{
	int number = 10;
	int *temp = &number;
	
	printf("%d\n",number);
	printf("%d\n",*temp);
	printf("%p\n",temp);
	printf("%p\n",&number);	
	
    return 0;
}
