#include <stdio.h>
#include <conio.h>
#include <graphics.h>
 
void main()
{
    int gm, gd = DETECT;
    int ax, x1 = 100, x2 = 100, x3 = 200, y1 = 100, y2 = 200, y3 = 100;
    initgraph(&gd, &gm, "");
    line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
 
    printf("BEFORE REFLECTION IN 2 QUADRANT: ");
    setcolor(15);
 
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
 
    getch();

    printf("AFTER REFLECTION ALONG X-AXIS");
 
    line(x1, getmaxy() - y1, x2, getmaxy() - y2);

    line(x2, getmaxy() - y2, x3, getmaxy() - y3);
    line(x3, getmaxy() - y3, x1, getmaxy() - y1);
 
    getch();
    closegraph();
}