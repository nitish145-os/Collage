
// Nitihs Thombre - 25070521099

#include <stdio.h>
#include <math.h>



void main(){
	int i,n;
	
	printf("Enter the number of values: ");
	scanf("%d", &n);
	
	float arr[n], sum = 0;
	float m, v, d, dp = 0;

	printf("Enter values : ");
	for (i=0; i<n ; i++){
		float r;
		scanf("%f", &r);
		arr[i] = r;
	}
	for (i=0; i<n; i++){
		sum = sum +arr[i];
	}
	
	m = sum /n;
	
	for(i = 0; i<n; i++){
		dp = dp + ((arr[i] - m) * (arr[i] - m)/n);
	}
	
	d = sqrt(dp);

	printf("Mean = %.2f\n", m);
	printf("Variance = %.2f\n", dp);
	printf("Deviation = %.2f\n", d);
}