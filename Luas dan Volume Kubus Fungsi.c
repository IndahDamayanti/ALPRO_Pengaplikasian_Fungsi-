#include <stdio.h>
#include <stdlib.h>


int l_permukaan_kubus (float sisi){
float luas_permukaan;

	//perhitungan luas permukaan kubus
	luas_permukaan = (6*sisi*sisi);
	printf ("luas permukaan : %.f\n",luas_permukaan);
	return luas_permukaan;
}
int v_kubus (float sisi){
float volume;

	//perhitungan volume kubus
	volume = (sisi*sisi*sisi);
	printf ("volume : %.f\n",volume);
	return volume;
}

int main (){
	//deklarasi variabel
	float sisi, luas_permukaan, volume ;


	printf("\t\t\t=============================================\n");
	printf("\t\t\t| Ni Putu Sri Indah Damayanti >> 2205551037 |\n");
	printf("\t\t\t=============================================\n");
    system("pause");
    system("cls");
    printf("\t\t\t=============================================\n");
	printf("\t\t\t========PROGRAM LUAS DAN VOLUME KUBUS========\n");
	printf("\t\t\t=============================================\n");
	printf ("sisi : ");
	scanf ("%f", &sisi);

	l_permukaan_kubus(sisi);
    v_kubus (sisi);

    return 0;
}

