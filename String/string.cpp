#include<stdio.h>

void greetings(char hello[]){
	printf("called \n%s",hello);
}
void toUpper(char a[]){
	printf("Converted string to Upper Case");
}
//edit in remote
void myFunc(){
	printf("I am in remote");
}
void toTitle(char a[]){
	print("Converted to caps");
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
