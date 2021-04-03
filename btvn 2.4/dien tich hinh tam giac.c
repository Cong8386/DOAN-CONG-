#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int S; // dien tich tam giac
	int h; // chieu cao tam giac
	int a; // chieu dai canh day tam giac
	
	printf("nhap vao chieu cao tam giac\n");
	scanf("%d",&h);
	
	printf("nhap vao chieu dai canh day tam giac\n");
	scanf("%d",&a);
	 S=a*h/2;
	 printf("dien tich tam giac la : %d",S);
	 
	return 0;
}
