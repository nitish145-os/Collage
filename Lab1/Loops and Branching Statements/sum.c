// Nitish Thombre - 25070521099

# include <stdio.h>

void main(){ 
	int n, sum = 0, cou =0;
	scanf("%d", &n);
	while(n!=0){
		cou++;
		sum = sum +n % 10;
		n = n / 10;
	}
	if(cou == 5){
		printf("%d", sum);
	}
	else{
		printf("Invalid input");
	}
}