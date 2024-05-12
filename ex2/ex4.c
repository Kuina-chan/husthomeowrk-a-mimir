#include <stdio.h>
int main(){
	int a, b;
	printf("a input: ");
	scanf("%d", &a);
	printf("b input: ");
	scanf("%d", &b);
	printf("%d %d\n", a, b);
	
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("Exchanged: %d, %d", a, b);
}
