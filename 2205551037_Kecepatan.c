
#include <stdio.h>



float hasil(float jarak, float waktu){
	float hasil;

	hasil = jarak/waktu;

	return hasil;
}

int main(){

	float jarak, waktu, total;
	char huruf;

do{
	printf("\t\t\t=============================================\n");
	printf("\t\t\t| Ni Putu Sri Indah Damayanti >> 2205551037 |\n");
	printf("\t\t\t=============================================\n");
    system("pause");
    system("cls");
	printf("\t\t\t====================================\n");
	printf("\t\t\t======PROGRAM HITUNG KECEPATAN======\n");
	printf("\t\t\t====================================\n");
	printf("\t\t\t| Masukan jarak tempu\n");
	printf("\t\t\t| >> ");
	scanf("%f", &jarak);
	printf("\t\t\t| Masukan waktu tempu\n ");
	printf("\t\t\t| >> ");
	scanf("%f", &waktu);

	if(jarak >0 && waktu >0){
		total = hasil(jarak, waktu);
		printf("\t\t\t====================================\n");
		printf("\t\t\t|Hasil kecepatannya adalah\n");
		printf("\t\t\t| >> %.2f\n", total);
		printf("\t\t\t====================================\n");
	}else{
		printf("\t\t\t====================================\n");
		printf("\t\t\t|            INPUT ERROR           |\n");
		printf("\t\t\t====================================\n");
	}
	printf("\t\t\t  APAKAH INGIN MENGULANG PROGRAM?\n");
	printf("\t\t\t  >> ");
	scanf("%s", &huruf);

	}while(huruf == 'y' || huruf == 'Y');

	return 0;
}
