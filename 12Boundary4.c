#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void fill(int x, int y, int fc, int bc)
{
    if ((getpixel(x, y) != fc) && (getpixel(x, y) != bc))
    {
        putpixel(x, y, fc);
        fill(x, y + 1, fc, bc);
        fill(x, y - 1, fc, bc);
        fill(x - 1, y, fc, bc);
        fill(x + 1, y, fc, bc);
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
    fill(x, y, RED, WHITE);
    getch();
    closegraph();
}