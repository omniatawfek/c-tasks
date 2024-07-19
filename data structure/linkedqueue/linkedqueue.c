#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
void CreateQueue(Queue *pq)
{
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;
}
void Append(QueueEntry e,Queue *pq)
    QueueNode pn=(QueueNode) malloc(sizeof(QueueNode));
    pn->next=NULL;
    pn->entry=e;
    if(!pq->rear)
    {
        pq->front=pn;
    }else
    {
        pq->rear->next=pn;
    }
    pq->rear=pn;
    pq->size++;
}
void Serve(QueueEntry *pe,Queue *pq)
{
   QueueNode *pn=pq->front;
   *pe=pn->entry;
   pq->front=pn->next;
   free(pn);
   if(!pq->front)
   {
       pq->rear=NULL;
   }
   pq->size--;
}

void TraverseQueue(Queue *pq,void(*pf)(QueueEntry)) //accessing mechanism (8)
{
    for(QueueNode *pn=pq->front;pn;pn=pn->next)
    {
        (*pf)(pn->entry);
    }
}
