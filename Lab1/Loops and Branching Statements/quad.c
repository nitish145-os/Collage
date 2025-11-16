// Nitish Thombre - 25070521099
#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, d, r1, r2;
	printf("Enter coefficients a, b and c: ");
	scanf("%f %f %f", &a, &b, &c);

	d = ((b*b) - (4*a*c));

	if(d>= 0){
		if(d==0){
			r1 = (-1 * b +d)/2 *a;
			r2 = (-1 * b  + d)/ 2 *a;
			printf("root1 = root2 = %.2f", r1);
		}
		else{
			r1 = (-1 * b + d)/ 2 *a;
			r2 = (-1 * b - d)/ 2 *a;
			printf("root1 = %.2f and root2 = %.2f", r1, r2);
		}
	}
	
	else {
		printf("root1 = %.2f+%.2fi and root2 = %.2f%.2fi", (-1 * b)/ (2 *a), sqrt(-1 * d) / (2 * a), (-1 *b)/ (2 *a), -1 * sqrt(-1 *d)/ (2 *a));
	}
	
	return 0;
}