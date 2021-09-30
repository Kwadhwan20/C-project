#include<stdio.h>

int add(int n1, int n2){
  int output=0;
  output= n1+n2;
  return output;
}

void main()
{
  int num1=0;
  int num2= 0;
  int sum=0;
  
  printf("Enter the values of num1 and num2=");
  scanf("%d",&num1);
  scanf("%d",&num2);
  sum = add(num1,num2);
  printf("%d",sum);
}
