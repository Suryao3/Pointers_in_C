#include<stdio.h>

void swap(int *number1,int *number2)
{
	int temp;
	temp = *number1;
	*number1 = *number2;
	*number2 = temp;
}

int main()
{
	int number1,number2;
	
	number1 = 10;
	number2 = 20;
	
	printf("Number 1 : %dtNumber 2 : %d\n",number1,number2);
	swap(&number1,&number2);
	printf("Number 1 : %dtNumber 2 : %d\n",number1,number2);
	
    return 0;
}
