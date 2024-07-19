#include <stdio.h>
#include <stdlib.h>

#include "linkedstack.h"
void display(stack_entry e)
{
    printf("e=%d\n",e);
}

 int main()
{
    stack s;
  create_stack(&s);
    if(!stack_full(&s)){
    push(5,&s);
    push(6,&s);
    push(7,&s);}
traverse_stack(&s,void (*pf)(stack_entry));
    if(!stack_empty(&s))
    pop( &e,&s);

    return 0;



}
