#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = DETECT, gm;
    int x = 100, y = 200;
    int step = 20;
    int leg_height = 30;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    while (!kbhit())
    {
        cleardevice();
        circle(x,y-75,15);
        line(x-15,y-40,x+15,y-40);
        // Draw the body
        line(x, y, x, y - 60);
        // Draw the Left Leg
        line(x, y, x - 10, y + leg_height);
        // Draw the right leg
        line(x, y, x + 10, y + leg_height);
        delay(300); // Adjust the delay for walking speed
        // Move the man's position
        x += step;
        if (x > getmaxx())
        {
            x = -20;
        }
    }
    closegraph();
}