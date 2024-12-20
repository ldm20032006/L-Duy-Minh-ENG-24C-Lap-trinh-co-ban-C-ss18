#include <stdio.h>

typedef struct{
	char id[5];
	char fullName[50];
	char age[50];
	char phoneNumber[50];
}Student;

int main(){
	Student std1;
	for(int id=100; id<106; id++){
		printf("\nMoi ban nhap ho va ten sv[%d]: ", id);
	    fgets(std1.fullName, sizeof(std1.fullName), stdin);
	    printf("\nMoi ban nhap tuoi sv[%d]: ", id);
		fgets(std1.age, sizeof(std1.age), stdin);
		printf("\nMoi ban nhap so dien thoai sv[%d]: ",id);
		fgets(std1.phoneNumber, sizeof(std1.phoneNumber), stdin);
		printf("\nTen cua sv[%d] la: %s", id, std1.fullName);
		printf("\nTuoi cua sv[%d] la: %s", id, std1.age);
		printf("\nSDT cua sv[%d] la: %s", id, std1.phoneNumber);
	}

}

