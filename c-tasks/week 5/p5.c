#include <stdio.h>
#include <stdlib.h>

int main()
{   int x =5,y=6,z=7;
   int *px =&x, *py=&y, *pz=&z;
    printf("x=%d,y=%d,z=%d,px=%d,py=%d,pz=%d,*px=%d,*py=%d,*pz=%d\n",x,y,z,px,py,pz,*px,*py,*pz);
    pz=px;
    px=py;
    py=pz;
    printf("x=%d,y=%d,z=%d,px=%d,py=%d,pz=%d,*px=%d,*py=%d,*pz=%d",x,y,z,px,py,pz,*px,*py,*pz);

    return 0;
}
