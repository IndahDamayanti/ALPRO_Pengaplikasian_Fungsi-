#include <stdio.h>
int l_persegi_panjang (float a, float b){
float luas;

	//perhitungan luas persegi panjang
	luas = (a*b);
	printf ("luas persegi panjang : %.f\n",luas);
	return luas;
}
int k_persegi_panjang (float a, float b){
float keliling;

	//perhitungan keliling persegi panjang
	keliling = (2*a)+(2*b);
	printf ("keliling persegi panjang : %.f\n",keliling);
	return keliling;
}

int main (){
	//deklarasi variabel
	float panjang,lebar,luas,keliling ;


	printf("\t\t\t=============================================\n");
	printf("\t\t\t| Ni Putu Sri Indah Damayanti >> 2205551037 |\n");
	printf("\t\t\t=============================================\n");
    system("pause");
    system("cls");
    printf("\t\t\t========================================================\n");
	printf("\t\t\t========PROGRAM LUAS DAN KELILING PERSEGI PANJANG=======\n");
    printf("\t\t\t========================================================\n");

	printf ("panjang persegi : ");
	scanf ("%f", &panjang);

	printf ("lebar persegi : ");
	scanf ("%f", &lebar);

	l_persegi_panjang (panjang,lebar);
	k_persegi_panjang (panjang,lebar);

    return 0;
}
