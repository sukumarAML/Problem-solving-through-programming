#include <stdio.h>
int calculateTotal(int m1, int m2, int m3) {
return m1 + m2 + m3;
}
void applyGrace(int *total, int grace) {
if (*total + grace <= 300)
*total += grace;
else
*total = 300;
}
int main(void) {
int m1, m2, m3, grace, total;
float average;
printf("Enter three marks and grace: ");
if (scanf("%d %d %d %d", &m1, &m2, &m3,
&grace) != 4) {
printf("Invalid Input\\n");
return 0;
}
if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100 || grace < 0 || grace > 5) {
printf("Invalid Input\\n");
return 0;
}
total = calculateTotal(m1, m2, m3);
applyGrace(&total, grace);
average = total / 3.0f;
printf("Total after grace = %d\\n", total);
printf("Average = %.2f\\n", average);
if (average >= 40.0f) 
printf("Pass\\n");
else 
printf("Fail\\n");
return 0;
}