#include<stdio.h>

void set(float number)
{
		number = 10.0;
		printf("%f inside function.\n",number);
}

void assign(float *number)
{
		*number = 10.0;
		printf("%f inside function.\n",*number);
}

int main()
{
	float floatNumber,floatNum;
	printf("Enter the number: ");
	scanf("%f",&floatNumber);
	
	set(floatNumber);
	printf("After called : %f inside main function\n",floatNumber);

	printf("Enter the number: ");
	scanf("%f",&floatNum);
	
	assign(&floatNum);
	printf("After called : %f inside main function\n",floatNum);
	
    return 0;
}
