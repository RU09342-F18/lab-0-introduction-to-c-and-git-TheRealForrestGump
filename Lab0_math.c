/**
 * main.c
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/

#include <stdio.h>
#include <math.h>
int add(int num1,int num2);
int subtract (int num1,int num2);
int multiply(int num1,int num2);
float divide(float num1,float num2);
int modulous(int num1,int num2);
int lshift(int num1,int num2);
int rshift(int num1,int num2);
int AND(int num1, int num2);
int OR(int num1,int num2);
int XOR(int num1,int num2);
int inverse(int num1,int num2);

int main(void)
{
    unsigned int a = 60;
    unsigned int b = 13;
    printf("Simple Calculator Functions\n");
    printf(" ======================================\n");
    add(14,6);
    subtract(13,17);
    multiply(12,12);
    divide(117,2);
    modulous(36,10);
    printf(" ======================================\n\n");
    printf("Bitwise Functions\n");
    printf(" ======================================\n");
    lshift(60,1);
    rshift(60,2);
    AND(a,b);
    OR(a,b);
    XOR(a,b);
    inverse(a,b);
    printf(" ======================================\n");
	return 0;
}
int add (int num1,int num2)
{
    // this function subtracts two numbers
    int ans = num1 + num2;
    return printf (" %d plus %d is equal to: %d\n",num1,num2,ans);
}
int subtract (int num1,int num2)
{
    // this function subtracts two numbers
    int ans = num1 - num2;
    return printf (" %d minus %d is equal to: %d\n",num1,num2,ans);
}
int multiply(int num1,int num2)
{
    // this function will multiply the two values that are input into
    // the function
    int ans = (num1 * num2);
    return printf (" %d times %d is equal to: %d\n",num1,num2,ans);
}
float divide(float num1, float num2)
{
    // divide two numbers
    float  division = (num1 / num2);
    return printf (" %2.0f divided by %2.0f is equal to: %5.2f\n",num1,num2,division);
}
int modulous(int num1,int num2)
{
    // find the remainder
    int  ans = (num1 % num2);
    int divide = (num1 / num2);
    return printf (" %d divided by %d is equal to %d with a remainder of: %d\n",num1,num2,divide,ans);
}
int lshift(int num1, int num2)
{
    // shift left
    int ans = (num1 << num2);
    return printf (" %d shifted left by %d bit(s) is equal to: %d\n",num1,num2,ans);
}
int rshift(int num1,int num2)
{
    // shift right
    int ans = (num1 >> num2);
    return printf (" %d shifted right by %d bit(s) is equal to: %d\n",num1,num2,ans);
}
int AND(int num1, int num2)
{
    int ans = (num1 & num2);
    return printf(" %d AND %d is equal to %d\n",num1,num2,ans);
}
int OR(int num1, int num2)
{
    int ans = (num1 | num2);
    return printf(" %d OR %d is equal to %d\n",num1,num2,ans);
}
int XOR(int num1, int num2)
{
    int ans = (num1 ^ num2);
    return printf(" %d XOR %d is equal to %d\n",num1,num2,ans);
}
int inverse(int num1, int num2)
{
    int ans1 = (~num1);
    int ans2 = (~num2);
   return printf(" %d negated is: %d and %d negated is: %d\n",num1,ans1,num2,ans2);
}
