#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = DETECT, gm;
    int x = 50, y = 100;
    int radius = 20;
    int dx = 5; // Movement in the x-direction
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    while (!kbhit())
    {
        cleardevice();
        circle(x, y, radius);
        delay(100);
        // Move the ball
        x += dx;
        if (x >= getmaxx() - radius || x <= radius)
        {
            // Reverse direction when hitting the screen boundaries
            dx = -dx;
        }
    }
        closegraph();
    }