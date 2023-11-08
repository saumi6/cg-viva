#include <graphics.h>
#include <stdio.h>
#include <conio.h>
// Define region codes for the Cohen-Sutherland algorithm
#define INSIDE 0 // 0000
#define LEFT 1   // 0001
#define RIGHT 2  // 0010
#define BOTTOM 4 // 0100
#define TOP 8    // 1000
int computeCode(int x, int y, int xmin, int ymin, int xmax, int ymax)
{
    int code = INSIDE;
    if (x < xmin)
    {
        code |= LEFT;
    }
    else if (x > xmax)
    {
        code |= RIGHT;
    }
    if (y < ymin)
    {
        code |= BOTTOM;
    }
    else if (y > ymax)
    {
        code |= TOP;
    }
    return code;
}

void pointClipping(int x, int y, int xmin, int ymin, int xmax, int ymax)
{
    int code = computeCode(x, y, xmin, ymin, xmax, ymax);
    if (code == INSIDE)
    {
        putpixel(x, y, WHITE);
    }
}

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    int xmin, ymin, xmax, ymax, x, y;
    xmin = 100;
    ymin = 100;
    xmax = 300;
    ymax = 200;
    x = 200;
    y = 150;
    rectangle(xmin, ymin, xmax, ymax);
    pointClipping(x, y, xmin, ymin, xmax, ymax);
    getch();
    closegraph();
}