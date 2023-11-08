#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
void main()
{
    int i;
    float u, px[4], py[4];
    float cx, cy;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    for (i = 0; i <= 3; i++)
    {
        printf("Enter coordinates of px and py");
        scanf("%f %f", &px[i], &py[i]);
    }
    for (u = 0.0; u <= 1.0; u = u + 0.001)
    {
        cx = (px[0] * pow(1 - u, 3)) + (3 * px[1] * u * pow(1 - u, 2)) + (3 * px[2] * pow(u, 2) * (1 - u)) + (px[3] * pow(u, 3));
        cy = (py[0] * pow(1 - u, 3)) + (3 * py[1] * u * pow(1 - u, 2)) + (3 * py[2] * pow(u, 2) * (1 - u)) + (py[3] * pow(u, 3));
        putpixel(cx, cy, 15);
    }
    getch();
    closegraph();
}