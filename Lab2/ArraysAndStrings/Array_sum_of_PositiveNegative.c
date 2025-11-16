// Nitsh Thombre - 25070521099

#include<stdio.h>

void main(){
	int A, B, arr[10], pos, nag;
	scanf("%d",&A);
	pos = 0;
	nag = 0;
	for(B=0; B<A; B++){
		scanf("%d",&arr[B]);
	}
	for(B=0; B<A; B++){
		if(arr[B] < 0){
			nag=nag+arr[B];
		}
		else{
			pos=pos+arr[B];
		}
	}
	printf("%d\n", pos);
	printf("%d\n", nag);
	
}