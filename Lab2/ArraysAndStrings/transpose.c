// Nitish Thombre - 25070521099

#include <stdio.h>

int main() {
	int n, i, j;

	scanf("%d", &n);
	
	int m[n][n];
	int t[n][n];
	
	//getting input for the user;
	for (i=0;i<n; i++){
		for (j=0;j<n; j++){
			scanf("%d", &m[i][j]);
		}
	}
	//for printing the transpost of the matrix;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			t[j][i]=m[i][j];
		}
	}
	for(i=0; i<n; i++){
		for(j= 0; j<n; j++){
			printf("%d", t[i][j]);
			printf(" ");
		}
		printf("\n");
		
	}
	return 0;
}
