#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    int x1 = 5, y1 = 60, x2 = 30, y2 = 90;
    int xmin = 20, ymin = 20, xmax = 90, ymax = 70;
    int code1 = 0, code2 = 0, codeout;
    if (y1 > ymax)
        code1 |= 1;
    if (y1 < ymin)
        code1 |= 2;
    if (x1 > xmax)
        code1 |= 4;
    if (x1 < xmin)
        code1 |= 8;
    if (y2 > ymax)
        code2 |= 1;
    if (y2 < ymin)
        code2 |= 2;
    if (x2 > xmax)
        code2 |= 4;
    if (x2 < xmin)
        code2 |= 8;
    if (code1 == 0 && code2 == 0)
    {
        // Line is completely visible
        line(x1, y1, x2, y2);
    }
    else if (code1 & code2)
    {
        // Line is completely outside the window
    }
    else
    {
        // Clip the Line
        int x, y;
        int xout, yout;
        if (code1)
        {
            codeout = code1;
        }
        else
        {
            codeout = code2;
        }
        if (codeout & 1)
        {
            x = x1 + (x2 - x1) * (ymax - y1) / (y2 - y1);
            y = ymax;
        }
        else if (codeout & 2)
        {
            x = x1 + (x2 - x1) * (ymin - y1) / (y2 - y1);
            y = ymin;
        }
        else if (codeout & 4)
        {
            y = y1 + (y2 - y1) * (xmax - x1) / (x2 - x1);
            x = xmax;
        }
        else
        {
            y = y1 + (y2 - y1) * (xmin - x1) / (x2 - x1);
            x = xmin;
        }

        if (codeout == code1)
        {
            x1 = x;
            y1 = y;
        }
        else
        {
            x2 = x;
            y2 = y;
        }
        line(x1, y1, x2, y2);
    }
    getch();
    closegraph();
}