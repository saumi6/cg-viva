#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
void main()
{
    int gd = DETECT, gm;

    int x1 = 100, y1 = 100, x2 = 450, y2 = 300;
    int xmin = 200, ymin = 200, xmax = 400, ymax = 400;
    float t1 = 0.0, t2 = 1.0;
    int dx = x2 - x1, dy = y2 - y1;
    int p1, p2, q1, q2;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    rectangle(xmin,ymin,xmax,ymax);
    line(x1,y1,x2,y2);
    getch();
    cleardevice();
    rectangle(xmin,ymin,xmax,ymax);
    setcolor(RED);
    p1 = -dx;
    p2 = dx;
    q1 = x1 - xmin;
    q2 = xmax - x1;
    if (p1 == 0 && p2 == 0)
    {
	// The Line is parallel to the window boundary.
	if (q1 >= 0 && q2 >= 0)
	{
	    // Line is completely inside the window
	    line(x1, y1, x2, y2);
	}
    }
    else
    {
	float r1 = (float)q1 / p1;
	float r2 = (float)q2 / p2;
	if (p1 < 0)
	{
	    t1 = (t1>r1)?t1:r1;
	    t2 = (t2<r2)?t2:r2;
	}
	else if (p1 > 0)
	{
	    t1 = (t1>r2)?t1:r2;
	    t2 = (t2<r1)?t2:r1;
	}
	if (t1 <= t2)
	{
	    int x1_clip = x1 + t1 * dx;
	    int y1_clip = y1 + t1 * dy;
	    int x2_clip = x1 + t2 * dx;
	    int y2_clip = y1 + t2 * dy;
	    line(x1_clip, y1_clip, x2_clip, y2_clip);
	}
    }
    getch();
    closegraph();
}