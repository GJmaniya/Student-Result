#include <stdio.h>

int main() {
  int nu, i, m1, m2, m3, totle;
  float par;
  char name[10], yes, no;
  for (i = 0; i < 5; i++) 
  {
    printf("Enter stduent name\n");
    scanf("%s", name);
    printf("Enter stduent rollno. \n");
    scanf("%d", &nu);
    printf("ih %s your roll number is %d ?\n\n", name, nu);
    printf("Enter your maths marks\n");
    scanf("%d", &m1);
    printf("Enter your sic marks\n");
    scanf("%d", &m2);
    printf("Enter your english marks\n");
    scanf("%d", &m3);
    totle = m1 + m2 + m3;
    printf("totle = %d\n", totle);
    par = totle / 3.0;
    printf("%s you have a par = %f ", par, name);
      
  }
}
