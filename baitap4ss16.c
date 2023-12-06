#include <stdio.h>
int main(){
	FILE *filePointer;
	int current;
	char content[30];
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\BT03.txt","w");
	if(filePointer == NULL){
		printf("Khong the mo file:\n");
		return 1;
	}
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\BT03.txt","r");
	if(filePointer == NULL){
		printf("Khong the mo file:\n");
		return 1;
	}
	int lineCount = 1; 
	char check;
	while ((check = fgetc(filePointer)) != EOF) {
		if (check == '\n') {
			lineCount++;
		}
	}
	fclose(filePointer);
	printf("So dong trong file: %d\n", lineCount+1);
	return 0;
}
