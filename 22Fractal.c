#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
void drawKochSnowflake(int x1, int y1, int x2, int y2, int depth)
{
    int deltaX, deltaY, x3, y3, x4, y4, x5, y5;
    if (depth == 0)
    {
        line(x1, y1, x2, y2);
    }
    else
    {
        deltaX = x2 - x1;
        deltaY = y2 - y1;
        x3 = x1 + deltaX / 3;
        y3 = y1 + deltaY / 3;
        x4 = (int)(0.5 * (x1 + x2) + sqrt(3) * (y1 - y2) / 6);
        y4 = (int)(0.5 * (y1 + y2) + sqrt(3) * (x2 - x1) / 6);
        x5 = x1 + 2 * deltaX / 3;
        y5 = y1 + 2 * deltaY / 3;
        drawKochSnowflake(x1, y1, x3, y3, depth - 1);
        drawKochSnowflake(x3, y3, x4, y4, depth - 1);
        drawKochSnowflake(x4, y4, x5, y5, depth - 1);
        drawKochSnowflake(x5, y5, x2, y2, depth - 1);
    }
}

void main()
{
    int gd = DETECT, gm;
    int x1, x2, y1, y2, depth;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    x1 = 100;
    y1 = 200;
    x2 = 400;
    y2 = 200;
    depth = 4; // Adjust the depth for more iterations
    drawKochSnowflake(x1, y1, x2, y2, depth);
    getch();
    closegraph();
}