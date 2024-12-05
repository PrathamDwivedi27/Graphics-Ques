#include<graphics.h>

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int squareX=100, squareY=100, squareSize=100;
    rectangle(squareX, squareY, squareX+squareSize, squareY+squareSize);

    squareSize-=20;
    rectangle(squareX+10, squareY+10, squareX+squareSize+10, squareY+squareSize+10);

    squareSize-=20;
    rectangle(squareX+20, squareY+20, squareX+squareSize+20, squareY+squareSize+20);

    squareSize-=20;
    rectangle(squareX+30, squareY+30, squareX+squareSize+30, squareY+squareSize+30);

    getch();
    closegraph();

    return 0;
}