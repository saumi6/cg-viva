#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
    int gm, gd = DETECT;
    int ax, x1 = 200, x2 = 300, x3 = 200, y1 = 100, y2 = 200, y3 = 400;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);

    printf("BEFORE REFLECTION IN 2 QUADRANT: ");
    setcolor(15);

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();

    printf("AFTER REFLECTION ALONG Y=X LINE");
    line(y1, x1, y2, x2);
    line(y2, x2, y3, x3);
    line(y3, x3, y1, x1);

    getch();
    closegraph();
}