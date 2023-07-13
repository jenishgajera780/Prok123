
#include <stdio.h>

void main() {


  int i, j;
  int p[3][3], t[3][3];

  printf("Enter matrix P\n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {


      printf("Enter the elements of matrix P [%d,%d]: ", i, j);
      scanf("%d", & p[i][j]);}}


  printf(" matrix P is:\n\n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {

      printf("%d ", t[i][j]);}
    printf("\n");}}

(int p[3][3], int t[3][3]) {

int r,c;

for (r = 0; r < 3; r++) {
    for (c = 0; c < 3; c++) {

t[r][c] = p[c][r];

}
}
}
