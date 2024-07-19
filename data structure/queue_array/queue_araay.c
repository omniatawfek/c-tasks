#include <stdio.h>
#include "queue_array.h"
void CreateQueue(Queue *pq)
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}
void Append(QueueEntry e,Queue *pq)
{
    pq->rear=(pq->rear+1)%MAXQUEUE;
    pq->entry[pq->rear]=e;
    pq->size++;
}
void Serve(QueueEntry *pe,Queue *pq)
{
    *pe=pq->entry[pq->front];
    pq->front=(pq->front+1)%MAXQUEUE;
    pq->size--;
}


void TraverseQueue(Queue *pq,void(*pf)(QueueEntry))
{
    int pos,s;
    for(pos=pq->front,s=0;s<pq->size;s++)
    {
        (*pf)(pq->entry[pos]);
        pos=(pos+1)%MAXQUEUE;
    }
}
