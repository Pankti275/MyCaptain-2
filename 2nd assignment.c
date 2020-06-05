#include<stdio.h>
int main()
{
printf("Enter Student's Marks:");
int marks=0;
scanf("%d",&marks);
if (marks<40)
{
printf("Grade F");
}
else if (marks>=40 && marks<=54)
{
printf("Grade D");
}
if (marks>=55 && marks<=69)
{
printf("Grade C");
}
else if (marks>=70 && marks<=84)
{
printf("Grade B");
}
if (marks>=85 && marks<=100)
{
  printf("Grade A");
}
}







