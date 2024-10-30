#include <stdio.h>

typedef struct owo{
	char *owomessage;
	int owoint;
}owo;

int main(void){
	printf("test\n");
	owo newowo;
	newowo.owomessage="owowowowo";
	newowo.owoint=1;
	printf("%s\n",newowo.owomessage);
	return 0;
}
