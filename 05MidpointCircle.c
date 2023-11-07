#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void circ(int xc, int yc, int r);
void main()
{
    int gd = DETECT, gm;
    int x, y, r;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter the co ordinates of the circle:\n");
    scanf("%d%d", &x, &y);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    // clrscr();
    line(300, 0, 300, 600);
    line(0, 250, 1000, 250);
    circ(x, y, r);
    getch();
    closegraph();
}
void circ(int xc, int yc, int r)
{
    int x, y, p, i;
    x = 0;
    y = r;
    p = 1 - r;
    for (i = 0; x <= y; i++)
    {
        putpixel(x + xc + 300, 250 - (y + yc), WHITE);
        putpixel(-x + xc + 300, 250 - (y + yc), WHITE);
        putpixel(-x + xc + 300, 250 - (-y + yc), WHITE);
        putpixel(x + xc + 300, 250 - (-y + yc), WHITE);
        putpixel(y + xc + 300, 250 - (x + yc), WHITE);
        putpixel(-y + xc + 300, 250 - (x + yc), WHITE);
        putpixel(-y + xc + 300, 250 - (-x + yc), WHITE);
        putpixel(y + xc + 300, 250 - (-x + yc), WHITE);
        // printf("%d,%d ",x,y);
        if (p < 0)
        {
            p += 2 * x + 3;
        }
        else
        {
            p += 2 * x - 2 * y + 5;
            y--;
        }
        x++;
    }
}