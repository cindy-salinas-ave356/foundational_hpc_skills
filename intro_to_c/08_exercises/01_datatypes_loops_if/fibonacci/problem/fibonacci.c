/*-------------------------------------------------------------------
Program to calculate Fibonacci numbers below 1000. 
Fill in the TODO sections below.
-------------------------------------------------------------------*/
#include <stdio.h>

int main() {
  int n1 = 0;
  int n2 = 1;


  // TODO: fill in the printf below to print the first two Fibonacci numbers (0 and 1)
  printf("%d, %d",n1, n2);

  // TODO: create loop to print the each next Fibonacci number 
  // and end the loop if the value of the fibonacci number
  // is greater than 1000
int nextTerm = n1 + n2;
 while (nextTerm < 1000) {	 
	 printf(", %d", nextTerm);
	 n1 = n2;
	 n2 = NextTerm;
	
	 printf("/n");
	 return 0;
}
