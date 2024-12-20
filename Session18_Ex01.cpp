#include <stdio.h>

struct Student{
	char fullName[50];
	char age[50];
	char phoneNumber[50];
};

int main(){
	struct Student std1={"Vu Dinh Kien","18","0988566154"};
	printf("Ho va ten: %s\n", std1.fullName);
	printf("Tuoi: %s\n", std1.age);
	printf("So dien thoai: %s\n", std1.phoneNumber);
	

	return 0;
}

