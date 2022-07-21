typedef struct tstack
{
int top;
int *data;
}tstack;

#define SIZE 5

void push(struct tstack* s,int a);
int pop(struct tstack* s);
void init(struct tstack* s);
void finalize(struct tstack* s);
void clear(struct tstack* s);
int isempty(struct tstack* s);
