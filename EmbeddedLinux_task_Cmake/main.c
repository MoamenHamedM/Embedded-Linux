

#include "./Includes/add.h"
#include "./Includes/sub.h"
#include "./Includes/div.h"
#include "./Includes/mult.h"
#include "./Includes/mod.h"


int main(void)
{
 int result;
 int num1 = 10,num2 = 5;
 
 result = add(num1,num2);
 
 result = sub(num1,num2);
 
 result = mult(num1,num2);
 
 result = div(num1,num2);
 
 result = mod(num1,num2);

 return 0;
}

