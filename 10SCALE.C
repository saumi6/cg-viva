#include <graphics.h>
#include <stdio.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    // Define your object points here
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;
    int xf=100,yf=100;
    float sx = 1.5, sy = 0.5; // Scaling factors
    // Draw the original object
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    rectangle(x1, y1, x2, y2);
    getch();
    cleardevice();

    // Scale the object
    x1 = xf+(x1-xf) * sx;
    x2 = xf+(x2-xf) * sx;
    y1 = yf+(y1-yf) * sy;
    y2 = yf+(y2-yf) * sy;
    // Draw the scaled object
    rectangle(x1, y1, x2, y2);
    getch();
    closegraph();
}