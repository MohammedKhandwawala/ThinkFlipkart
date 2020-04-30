#include<stdio.h>

void greetings(char hello[]){
	printf("called \n%s",hello);
}
void toUpper(char a[]){
	printf("Converted string to Upper Case");
}	
void toLower(char b[]){
	printf("Converted string to Lower Case");
}
void newFunc(){
	print("This is a new func");
}	
void main(){
	char a[10];
	greetings(a);
}
