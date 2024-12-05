#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int circleX = 300, circleY = 250;
    int innerRadius = 40;
    int outerRadius = 120;

    // Draw the central and outer circles
    circle(circleX, circleY, innerRadius);
    circle(circleX, circleY, outerRadius);

    // Calculate the properties of the smaller circles
    int smallCircleRadius = (outerRadius - innerRadius) / 2;
    float distanceFromCenter = innerRadius + smallCircleRadius;

    // Draw smaller circles around the central circle
    for (int i = 0; i < 360; i += 60) {
        // Calculate the position of the smaller circles
        int x = circleX + distanceFromCenter * cos(i * 3.14159 / 180);
        int y = circleY + distanceFromCenter * sin(i * 3.14159 / 180);
        circle(x, y, smallCircleRadius); // Draw the smaller circle
    }

    getch();
    closegraph();

    return 0;
}
