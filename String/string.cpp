#include<stdio.h>

void greetings(char hello[]){
	printf("called \n%s",hello);
}
void toUpper(char a[]){
	printf("Converted string to Upper Case");
}
void toTitle(char a[]){
	print("Converted to caps");
}	
void toLower(char b[]){
	printf("Converted string to Lower Case");
}	
void main(){
	char a[10];
	greetings(a);
}
