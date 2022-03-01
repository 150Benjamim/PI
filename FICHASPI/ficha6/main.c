#include <stdio.h>
#include "Stack.h"
#include "Queue.h"

int main() {

    //stack testing

    STACK a;
    int x;
    SinitStack (&a);

    Spush (&a,13);
    Spop(&a,&x);


    //queue testing
    QUEUE q;

    SinitQueue (&q);

    Senqueue (&q, 10);
    Senqueue (&q, 8);
    Senqueue (&q, 9);

    for (int i = 0; i< Max-3; i++) Senqueue(&q,33);

    int xx, y, z;

    Sdequeue(&q,&xx);
    Sdequeue(&q,&y);
    Sdequeue(&q,&z);

    Senqueue(&q,999);



    return 0;
}
