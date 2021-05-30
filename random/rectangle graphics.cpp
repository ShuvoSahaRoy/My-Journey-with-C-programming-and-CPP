#include<graphics.h>
#include<conio.h>
int main(){

    int ghor = DETECT,li;

    initgraph(&ghor, &li, " ");

    line(125,75,75,125);

    line(125,75,175,125);

    line(75,125,175,125);

    rectangle(90,200,160,125);
    rectangle(120,200,130,150);

    getch();
    return 0;
}
