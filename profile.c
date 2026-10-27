#include <stdio.h>

int main(void) {
char name[] = "Andrew Kyeyune";
int age = 20, year = 1;
float gpa = 3.53;
int is_local = 1;

printf("==================STUDENT PROFILE==========================\n");
printf("%-12s: %s\n",  "Name",   name);
printf("%-12s: %d\n",  "Age",   age);
printf("%-12s: %.2f\n","GPA",    gpa);
printf("%-12s: %d\n",  "Year",   year);
printf("%-12s: %s\n",  "Status", is_local ? "Urban" : "International");
printf("===========================\n");
return 0;
}