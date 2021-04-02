#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1; /* first number to be read from user */
	int num2; /*second number to be read from user */
	
	printf ("enter two integers, and I will tell you\n");
	printf ("the relationships they satisfy:");
	
	scanf ("%d %d" , &num1, &num2); /*read two integers */
	if(num1==num2)
	{
		printf ( "%d is equal to %d\n", num1, num2);
		} /*end if*/
		
		
	
	 if( num1!= num2)
	 {
	printf ( "%d khong bang %d\n", num1, num2);} /*end if */
	if (num1>num2)
	{ printf ( "%d lon hon %d\n", num1, num2);} /*end if */
	if (num1 < num2){
		printf ( "%d nho hon %d\n", num1, num2);} /*end if*/
	if (num <= num2){ printf ( "%")	
		return 0;
		
	
}
