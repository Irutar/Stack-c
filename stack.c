#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

void init(struct tstack* s)
{
	s->top=0;
	s->data=malloc(sizeof(int)*SIZE);
}

void finalize(struct tstack* s)
{
	s->top=0;
	free(s->data);
}
void clear(struct tstack* s)
{
	s->top=0;
}
void push(struct tstack* s,int a)
{	
	int *tmp=NULL;
	if( (s->top%SIZE==0) && (s->top>0) )
	{
	     if( (tmp=realloc(s->data,sizeof(int)*(SIZE+s->top))) == NULL )
		{
			printf("Mem all err");
			free(s->data);
			exit(EXIT_FAILURE);
		}
		s->data=tmp;
	}
	s->data[s->top]=a;
	s->top++;
}

int pop(struct tstack* s)
{
	return s->data[--(s->top)];
}
int isempty(struct tstack* s)
{
	if(s->top<=0) {
		return 1;
	}
	else {
		return 0;
	}
}
