#include<stdio.h>

void greetings(char hello[]){
	printf("called");
}

void main(){
	char a[10];
	greetings(a);
}
