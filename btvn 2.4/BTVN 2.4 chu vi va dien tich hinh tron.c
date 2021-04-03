#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int C; // chu vi 
	int S; // dien tich
	int R; // ban kinh
	
	printf (" nhap chieu dai ban kinh");
	scanf ("%d", &R );
	
	C= 2*R*3,14;
	S= R*R*3.14;
	
	printf("chu vi hinh tron la : %d\n",C);
	printf("dien tich hinh tron la : %d", S);
	
	
	return 0;
}
