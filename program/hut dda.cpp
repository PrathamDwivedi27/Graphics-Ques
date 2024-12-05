#include<graphics.h>
#include<math.h>

void dda(int x0,int y0,int xn,int yn){
    int dx=xn-x0, dy=yn-y0, steps;
    steps=abs(dx)>abs(dy)?abs(dx):abs(dy);

    float xInc=dx/(float)steps, yInc=dy/(float)steps;
    float x=x0, y=y0;
    for(int i=0;i<=steps;i++){
        putpixel(x,y,WHITE);
        x+=xInc;
        y+=yInc;
        delay(50);
    }
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // int x0=100, y0=100, xn=200, yn=200;
    // dda(x0,y0,xn,yn);

    dda(50,100,100,50);     // Left slope from start
    dda(100,50,150,100);    // Right slope from top
    dda(50,100,150,100);
    
    dda(50,100,50,200);
    dda(150,100,150,200);
    dda(50,200,150,200);
    

    getch();
    closegraph();

    return 0;
}