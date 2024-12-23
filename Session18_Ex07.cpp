#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Students{
	int id;
	char fullName[50];
	int age;
	char phoneNumber[12];
};
void deleteStudents(struct Students s[], int *n){
	char *name;
	int found = 0;
	name = (char *)calloc(50, sizeof(char));
	printf("\nNhap ten sv muon xoa: ");
	fgets(name, *n, stdin);
	name[strlen(name) - 1] = '\0';
	for(int i = 0; i < *n; i++){
		if(strstr(s[i].fullName, name) != NULL){
			found = 1;
			(*n)--;
			for(int j = i; j < *n; j++){
				s[j] = s[j+1];
			}
		}
	}
	if(found == 0){
		printf("\nTen sinh vien khong ton tai\n");
	}
	else{
		printf("\nThong tin sinh vien sau khi xoa la\n\n");
	    for(int i = 0; i < *n; i++){
	    	printf("ID: %d", s[i].id);
	    	printf("\nHo ten: %s", s[i].fullName);
	    	printf("\nTuoi: %d", s[i].age);
	    	printf("\nSo dien thoai: %s", s[i].phoneNumber);
	    	printf("\n-------------------\n");
		}
	}
	free(name);
}
int main(){
	int n = 5;
	struct Students s[50] ={
		{1, "Toi la A", 18, "0123456789"},
        {2, "Toi la B", 19, "0023456789"},
        {3, "Toi la C", 20, "0003456789"},
        {4, "Toi la D", 21, "0000456789"},
        {5, "Toi la E", 22, "0000056789"}
	};
    printf("Thong tin sinh vien truoc khi xoa la\n\n");
    for(int i = 0; i < n; i++){
    	printf("ID: %d", s[i].id);
    	printf("\nHo ten: %s", s[i].fullName);
    	printf("\nTuoi: %d", s[i].age);
    	printf("\nSo dien thoai: %s", s[i].phoneNumber);
    	printf("\n-------------------\n");
	}
	deleteStudents(s, &n);
	return 0;
}
