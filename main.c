#include <stdio.h>
int main() 
{
  int nu, i, m1, m2, m3, m4, m5, totle;
  float par, spi;
  char name[10], n;
  for (i = 0; i < 30; i++) 
  {
    printf("Enter stduent name\n");
    scanf("%s", name);
    printf("Enter stduent rollno. \n");
    scanf("%d", &nu);
    printf("ih %s your roll number is %d \n\n", name, nu);
    printf("Enter your Maths marks\n");
    scanf("%d", &m1);
    printf("Enter your B.C.P marks\n");
    scanf("%d", &m2);
    printf("Enter your C.Senglish marks\n");
    scanf("%d", &m3);
    printf("Enter your F.O.E.E marks\n");
    scanf("%d", &m4);
    printf("Enter your E & S marks\n");
    scanf("%d", &m5);
    totle = m1 + m2 + m3 + m4 + m5;
    printf("totle = %d\n", totle);
    par = totle / 5.0;
    printf("par = %f \n", par);
    spi = par / 10 + 0.5;
    printf("spi = %f\n", spi);
    printf("Looking at the result of another student Enter Y or N\n");
    scanf(" %c", &n);
    if (n == 'y') {
      printf("Continue\n");
    } else {
      printf("Thanks\n");
      return 0;
    }
  }
}
