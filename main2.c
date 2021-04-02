#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int toan, ly, hoa,tong ;
	float trungbinh;
	
	printf("diem mon toan\n");
	scanf ("%d", &toan);
	
	printf("diem mon hoa\n");
	scanf ( "%d", &hoa);
	
	printf("diem mon ly \n");
	scanf ( "%d", &ly);
	 
	 
	 tong =toan+ly+hoa;
	 
	 trungbinh = tong/3;
	 
	 printf("trung binh ba mon =%f",trungbinh);
	 
	return 0;
}
