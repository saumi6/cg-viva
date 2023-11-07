#include <graphics.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    // Set color of car as red
    setcolor(RED);

    // These lines for bonnet and
    // body of car
    line(0, 300, 210, 300);
    line(50, 300, 75, 270);
    line(75, 270, 150, 270);
    line(150, 270, 165, 300);
    line(0, 300, 0, 330);
    line(210, 300, 210, 330);

    // For left wheel of car
    circle(65, 330, 15);
    circle(65, 330, 2);

    // For right wheel of car
    circle(145, 330, 15);
    circle(145, 330, 2);

    // Line left of left wheel
    line(0, 330, 50, 330);

    // Line middle of both wheel
    line(80, 330, 130, 330);

    // Line right of right wheel
    line(210, 330, 160, 330);
    getch();
    closegraph();
    return 0;
}