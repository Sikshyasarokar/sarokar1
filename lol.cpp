#include <stdio.h>
#include <string.h>

int main() {
	FILE *fptr = fopen("abc.txt", "w");
	char name[20], ch[5];
	float m[3];
	do{
		printf("enter name and marks for 3 subjects :");
		scanf("%s %f %f %f", name, &m[0], &m[1], &m[2]);
		fprintf(fptr, "\n%s %f %f %f", name, m[0], m[1], m[2]);
		printf("Do you want to continue ? (Y/N)");
		scanf("%s", ch);
		strupr(ch);
	}while(strcmp(ch, "Y") == 0);
	fclose(fptr);
	return 0;
}