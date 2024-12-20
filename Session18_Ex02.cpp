#include <stdio.h>

struct Student{
	char fullName[50];
	char age[50];
	char phoneNumber[50];
};

int main(){
	struct Student std1;
	printf("Moi ban nhap ho va ten: ");
	fgets(std1.fullName, sizeof(std1.fullName), stdin);
	printf("\nMoi ban nhap tuoi: ");
	fgets(std1.age, sizeof(std1.age), stdin);
	printf("\nMoi ban nhap so dien thoai: ");
	fgets(std1.phoneNumber, sizeof(std1.phoneNumber), stdin);
	printf("\nTen cua ban la: %s", std1.fullName);
	printf("\nTuoi cua ban la: %s", std1.age);
	printf("\nSDT cua ban la: %s", std1.phoneNumber);

	return 0;
}

