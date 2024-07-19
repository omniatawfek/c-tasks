#include <stdio.h>
#include <stdlib.h>
#include "stack_array.h"

void create_stack(stack *ps)
{
    ps->top=0;
}
void push(stack_entry e,stack *ps)
{
    ps->entry[ps->top++]=e;
}
void pop(stack_entry *pe,stack *ps)
{
   *pe=ps->entry[--ps->top];
}
void traverse_stack(stack *ps,void (*pf)(stack_entry))
{int i;
 for(i=ps->top,i>0;i--)
 {
     (*pf)(ps->entry[i-1]);
 }

}
int stack_full(stack *ps)
{
    return ps->top == max;
}
int stack_empty(stack *ps)
{
    return !ps->top;
}
