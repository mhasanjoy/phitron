#include<stdio.h>

int main()
{
    char a[10];
	char ch = 'a';
	for(int i = 0; i < 8; i++){
		a[i] = ch+8-i;
	}
	a[8] = '\0';
	printf("%s\n", a);


    return 0;
}
