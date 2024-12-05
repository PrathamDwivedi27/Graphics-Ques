#include <graphics.h>
#include <conio.h>

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Draw the house base
    setcolor(BLUE);
    rectangle(200, 300, 400, 450);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(201, 301, BLUE);

    // Draw the roof
    setcolor(RED);
    line(200, 300, 300, 200);  // Left slope
    line(300, 200, 400, 300);  // Right slope
    line(200, 300, 400, 300);  // Base of the roof
    setfillstyle(SOLID_FILL, RED);
    floodfill(300, 250, RED);

    // Draw the door
    setcolor(BROWN);
    rectangle(270, 370, 330, 450);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(271, 371, BROWN);

    // Draw the sun
    setcolor(YELLOW);
    circle(500, 100, 50);  // Sun circle
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(501, 101, YELLOW);

    // Draw grass
    setcolor(GREEN);
    rectangle(0, 450, getmaxx(), getmaxy());
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(10, 460, GREEN);

    // Keep the graphics window open until a key is pressed
    getch();
    closegraph();
    return 0;
}
