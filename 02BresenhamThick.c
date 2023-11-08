#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
void bresenham(int x1, int y1, int x2, int y2)
{
    int i, dx, dy, p, s1, s2, flag = 0;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    if (x2 - x1 < 0)
        s1 = -1;
    else
        s1 = 1;
    if (y2 - y1 < 0)
        s2 = -1;
    else
        s2 = 1;
    if (dy > dx)
    {
        dx = dx + dy;
        dy = dx - dy;
        dx = dx - dy;
        flag = 1;
    }
    p = 2 * dy - dx;
    putpixel(x1 + 300, 250 - y1, 1);
    for (i = 0; i < dx; i++)
    {
        if (p < 0)
        {

            if (flag)
            {
                y1 += s2;
                putpixel(x1 + 300, 250 - y1, 1);
                p += 2 * dy;
            }
            else
            {
                x1 += s1;
                putpixel(x1 + 300, 250 - y1, 1);
                p += 2 * dy;
            }
        }
        else
        {
            x1 += s1;
            y1 += s2;
            putpixel(x1 + 300, 250 - y1, 1);
            p += 2 * dy - 2 * dx;
        }
        // printf("%d,%d\n",x1,y1);
    }
}
void main()
{
    int gd = DETECT, gm;
    int i, x1, x2, y1, y2, thick;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter the coordinates of 1st point: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of 2nd point: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the thickness: ");
    scanf("%d",&thick);
    for (i=0;i<thick;i++)
    {
        bresenham(x1+i, y1, x2+i, y2);
    }
    line(300, 0, 300, 600);
    line(0, 250, 1000, 250);
    getch();
    closegraph();
}