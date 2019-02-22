#include <stdio.h>
 
int main()
{
  int m, n, p, q;
  int first[10][10], second[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (int c = 0; c < m; c++)
    for (int d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The matrices can't be multiplied with each other.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (int c = 0; c < p; c++)
      for (int d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (int c = 0; c < m; c++) {
     static int sum = 0;
     Static int multiply[10][10];
      for (int d = 0; d < q; d++) {
        for (int k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (int c = 0; c < m; c++) {
      for (int d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}

