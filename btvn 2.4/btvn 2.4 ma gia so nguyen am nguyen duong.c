#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf ( "nhap so a:");
	scanf ("%d", &a);
	if (a>0){
		 printf ( "%d la so duong\n", a);
	}if  (a<0){
	      printf ("%d la so am \n", a);
	 }if (a==0){
	      printf ( "so 0 khong phai la so am , duong  "); 
}
	return 0;

}
