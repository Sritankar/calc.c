#include <stdio.h>

int main()

{

char operator;

double first,second;

printf("enter the operator (+,-,*,/) :" );

scanf("%c",&operator);


printf("enter the two numbers one by one");

scanf("%lf %lf" ,&first,&second);

switch (operator)

{

case '+':
            
       printf("%lf + %lf =%lf",first,second,(first+second));
       break;


case '-':
      printf("%lf - %lf = %lf",first,second,(first-second));
      break;


case '*':
     printf("%lf * %lf = %lf",first,second,(first/second));
     break;


case '/':
     if(second!= 0.0)
     
     printf("%f / %f = %lf",first,second,(first/second));
     
     else
     
     printf("divide by zero situtation");
     break;
    
     defult:
     
     printf("invalid operator");
     break;

}
return 0;
 
}