#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
int round(float);
void dda(int x1, int y1, int x2, int y2);
void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    initgraph(&gd, &gm, "c:\\tc\\bgi");
    printf("Enter the coordinates of first point: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of second point: ");
    scanf("%d %d", &x2, &y2);
    line(300, 0, 300, 600);
    line(0, 250, 1000, 250);
    dda(x1, y1, x2, y2);
    getch();
    closegraph();
}
void dda(int x1, int y1, int x2, int y2)
{
    int i, dx, dy, steps;
    float x, y;
    x = x1;
    y = y1;
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    putpixel(x + 300, 250 - y, 1);
    for (i = 0; i < steps; i++)
    {
        putpixel(round(x + 300), round(250 - y), 1);
        x += (float)dx / steps;
        y += (float)dy / steps;
    }
}
int round(float x)
{
    if (x >= 0)
        return x + 0.5;
    return x - 0.5;
}