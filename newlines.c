#include <stdio.h>
main(){
	int c,nc;
	
	nc = 0;
	while ((c =getchar()) != EOF){
	if (c == ' ')
	++nc;
if (c == '\n')
	++nc;
if (c == '	')
	++nc;
		printf("%ld\n",nc);
	
	}
}