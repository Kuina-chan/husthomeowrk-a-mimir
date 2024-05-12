#include <stdio.h>
int main(){
	int price, kg, tax;
	printf("price input: ", price);
	scanf("%d", &price);
	printf("amount input: ", kg);
	scanf("%d", &kg);
	printf("tax input: ", tax);
	scanf("%d", &tax);
	int payment;
	payment = price*kg*(tax + 100)/100;
	printf("Total payment: %d", payment);
};
