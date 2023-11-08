#include <graphics.h>
#include <stdio.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    // Define your object points here
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;
    int tx = 50, ty = 50; // Translation values
    // Draw the original object
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    rectangle(x1, y1, x2, y2);
    getch();
    cleardevice();
    // Translate the object
    x1 += tx;
    x2 += tx;
    y1 += ty;
    y2 += ty;
    rectangle(x1, y1, x2, y2);
    getch();
    closegraph();
}