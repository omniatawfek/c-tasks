#include <stdio.h>
#include <stdlib.h>
#define "linkedqueue.h"

void Display(QueueEntry e)
{
    printf("e = %d\n",e);
}
int main() {
    Queue q;
    CreateQueue(&q);
    Append(6,&q);
    Append(7,&q);
    Append(8,&q);
    TraverseQueue(&q,&Display);
    return 0;
}

