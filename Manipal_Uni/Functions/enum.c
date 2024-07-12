#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum month{Jan=1000, feb=2000, mar=3000, apr=4000, may, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

int main()
{
    int now = feb;

    printf("%d", now);
    srand(time(0));


    int rnum = (rand() % 10) + 1;

    printf("%d", rnum);



    return 0;
}
