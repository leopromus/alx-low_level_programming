#include<stdio.h>
int main (void) 
{
char c;
int i;
long li;
long long lli;
float f;

printf("size of a char : %ld byte(s) \n", sizeof(c));
printf("size of an integer : % ld byte(s) \n", sizeof(i));
printf("size of a long integer : %ld byte(s) \n", sizeof(li));
printf("size of a long long integer : %ld byte(s) \n", sizeof(lli));
printf("size of a float : %ld byte(s) \n", sizeof(f));
return (0);
