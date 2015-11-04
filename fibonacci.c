#include <stdio.h>



int main() {
	const int MAX_REPETICOES = 20;
	int a=1;
	int b =1;
	int i;
	printf("%d, ",a);
	printf("%d, ",b);
	
	for(i=0;i<MAX_REPETICOES-2;i++)
	{
		b=a+b;
		a=b-a;
		printf("%d,",b);
	}
	return 0;
}
