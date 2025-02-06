#include<stdio.h>
int main(){
	FILE *f;
	f=fopen("bt01.txt", "r");
	if(f==NULL){
		printf("khong the mo file\n");
		return 1;
	}
	char c;
	c=fgetc(f);
	if(c!=EOF){
		printf("ky tu dau tien cua chuoi la: %c\n",c);
	}else{
		printf("file trong.\n");
	}
	fclose(f);
	return 0;
}
