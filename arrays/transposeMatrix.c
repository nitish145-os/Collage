//Nitish Thombre 25070521099

#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int matrix[n][n];
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {

      scanf("%d", &matrix[i][j]);
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", matrix[j][i]);
    }
    printf("\n");
  }

  return 0;
}
