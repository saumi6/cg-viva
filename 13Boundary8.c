#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void fill(int x, int y, int fc, int bc)
{
    if ((getpixel(x, y) != fc) && (getpixel(x, y) != bc))
    {
        putpixel(x, y, fc);
        fill(x + 1, y, fc, bc);
        fill(x - 1, y, fc, bc);
        fill(x, y + 1, fc, bc);
        fill(x, y - 1, fc, bc);
        fill(x + 1, y + 1, fc, bc);
        fill(x - 1, y - 1, fc, bc);
        fill(x + 1, y - 1, fc, bc);
        fill(x - 1, y + 1, fc, bc);
    }
}
void main()
{
    int x, y;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    rectangle(100, 100, 150, 150);
    fill(125, 125, RED, WHITE);
    getch();
    closegraph();
}