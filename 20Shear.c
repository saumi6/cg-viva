#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = DETECT, gm;
    int x = 10, y = 10, x1 = 10, y1 = 100, x2 = 100, y2 = 10, shear;
    int xnew, x1new, x2new;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("ENTER THE SHAERING FACTOR: ");
    scanf("%d", &shear);
    cleardevice();
    printf("ORIGINAL");
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x, y);
    getch();
    cleardevice();
    setcolor(YELLOW);
    printf("ALONG X-AXIS");
    xnew = x + y * shear;
    x1new = x1 + y1 * shear;
    x2new = x2 + y2 * shear;
    line(xnew, y, x1new, y1);
    line(x1new, y1, x2new, y2);
    line(x2new, y2, xnew, y);
    getch();    
    cleardevice();
    printf("ALONG Y-AXIS");
    y = y + x * shear;
    y1 = y1 + x1 * shear;
    y2 = y2 + x2 * shear;
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x, y);
    getch();
    closegraph();
}