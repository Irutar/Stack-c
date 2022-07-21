#include <stdio.h>
#include "stack.h"

int main()
{	int i;
	tstack s;
	init(&s);
	
	for(i=0;i<=10;i++)
	{
		push(&s,i);
	}
	clear(&s);
	for(i=0;i<=10;i++)
	{
		push(&s,i);
	}
	for(i=0;i<10;i++)
	{	
		if( isempty(&s)==0 ) {
			printf("pop: %d\n",pop(&s) );
		}
		else {
			printf("Nothing to be poped\n");
		}
	}


	clear(&s);
	finalize(&s);
	return 0;
}

