#include <stdio.h>
#include <stdlib.h>
#include "linkedstack.h"

void create_stack(stack *ps)
{
    ps->top=NULL;
}
void push(stack_entry e,stack *ps)
{
   stack_node *pn=(stack_node*)malloc=(sizeof(stack_node));
   pn->entry=e;
   pn->next=ps->top;
   ps->top=pn;
}
void pop(stack_entry *pe,stack *ps)
{
   *pe=ps->top->entry;
   stack_node *pn=ps->top;
   ps->top=ps->top->next;
   free(pn);

}
void traverse_stack(stack *ps,void (*pf)(stack_entry))
{ stack_node *pn=ps->top
while(pn)
{
    (*pf)=ps->entry;
    pn=pn->next;
}
}
int stack_full(stack *ps)
{
    return 0;
}
int stack_empty(stack *ps)
{
    return ps->top==NULL;
}
