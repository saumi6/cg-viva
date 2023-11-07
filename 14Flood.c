#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void floodFill(int x, int y, int fillc, int oldc)
{
    if (getpixel(x, y) == oldc)
    {
        putpixel(x, y, fillc);
        floodFill(x + 1, y, fillc, oldc);
        floodFill(x - 1, y, fillc, oldc);
        floodFill(x, y + 1, fillc, oldc);
        floodFill(x, y - 1, fillc, oldc);
    }
}
void main()
{
    int x, y, r;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    x = 200;
    y = 200;
    r = 25;
    circle(x, y, r);
    floodFill(x, y, WHITE, BLACK);
    getch();
    closegraph();
}