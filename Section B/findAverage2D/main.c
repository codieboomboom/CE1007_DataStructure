#include <stdio.h>
void findAverage2D(float matrix[4][4]);
int main()
{
 float ar[4][4];
 int i,j;

 printf("Enter data: \n");
 for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++)
        scanf("%f", &ar[i][j]);
            }
 findAverage2D(ar);
 printf("findAverage2D(): :\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%.2f ", ar[i][j]);
        printf("\n");
 }
 return 0;
}
void findAverage2D(float matrix[4][4])
{
 /* write your program code here */
 int i = 0;
 int j = 0;
 float sum3;

 for (i = 0; i < 4; i++){
    sum3 = 0;
    for (j = 0; j < 3; j++){
        sum3 = sum3 + matrix[i][j];
    }
    matrix[i][j] = sum3/3.0;
 }

}
