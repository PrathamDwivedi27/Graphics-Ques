#include<graphics.h>

int main()
{
    // int gd = DETECT, gm;
    // initgraph(&gd, &gm, NULL);
    initwindow(400, 300, "Circle");
    circle(200, 200, 50);
    getch();
    closegraph();
    return 0;
}
 
