#include <stdio.h>

struct Student{
	char fullName[50];
	char age[50];
	char phoneNumber[50];
};

int main(){
	struct Student std1[5];
	for(int i=1; i<6; i++){
		printf("\nMoi ban nhap ho va ten sv %d: ", i);
	    fgets(std1[i].fullName, sizeof(std1[i].fullName), stdin);
	    printf("\nMoi ban nhap tuoi sv %d: ", i);
		fgets(std1[i].age, sizeof(std1[i].age), stdin);
		printf("\nMoi ban nhap so dien thoai sv %d: ",i);
		fgets(std1[i].phoneNumber, sizeof(std1[i].phoneNumber), stdin);
		printf("\nTen cua sv %d la: %s", i, std1[i].fullName);
		printf("\nTuoi cua sv %d la: %s", i, std1[i].age);
		printf("\nSDT cua sv %d la: %s", i, std1[i].phoneNumber);
	}


	return 0;
}

