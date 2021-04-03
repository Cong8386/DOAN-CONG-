#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float VND; // menh gia tien viet nam
	float USD; // menh gia tien do la my 
	float tiennhanduoc;
	
	printf ("nhap vao mot menh gia tien do la my\n");
	scanf("%f", &USD);
	
	tiennhanduoc=USD*22000;

	printf ("so tien sau khi quy doi la :%f vnd\n", tiennhanduoc);
	
	return 0;
}
