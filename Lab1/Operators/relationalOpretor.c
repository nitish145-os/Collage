// Nitish Thombre - 25070521099

#include <stdio.h>

void main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	printf("%d < %d: %s\n",a,b, (a < b) ? "True" : "False");
	printf("%d <= %d: %s\n", a, b, (a <= b) ? "True" : "False");
	printf("%d > %d: %s\n", a, b, (a > b) ? "True" : "False");
	printf("%d >= %d: %s\n", a, b, (a >= b) ? "True" : "False");
	printf("%d == %d: %s\n", a, b, (a == b) ? "True" : "False");
	printf("%d != %d: %s\n", a, b, (a != b) ? "True" : "False");
}