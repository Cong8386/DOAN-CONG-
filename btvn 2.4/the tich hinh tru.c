#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int R; // ban kinh mat day hinh tru
	int h; // chieu cao hinh tru
	int V; // the tich hinh tru
	 printf (" nhap vao chieu cao cua hinh tru");
	 scanf("%d", &h);
	 
	 printf("nhap vao ban kinh mat day hinh tru");
	 scanf("%d",&R);
	 
	 V = R*R*h*3.14 ;
	 
	 printf("the tich hinh tru bang:%d", V);
	 
	 
	return 0;
}
