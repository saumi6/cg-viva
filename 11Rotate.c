#include <stdio.h>
#include <math.h>
#include <graphics.h>
void RotateTriangle(int x1, int y1, int x2, int y2, int x3, int y3, float angle)
{
    int a1, b1, a2, b2, a3, b3;
    int p = x2, q = y2;
    float radianAngle = (angle * 3.14159) / 180.0;
    a1 = p + (x1 - p) * cos(radianAngle) - (y1 - q) * sin(radianAngle);
    b1 = q + (x1 - p) * sin(radianAngle) + (y1 - q) * cos(radianAngle);
    a2 = p + (x2 - p) * cos(radianAngle) - (y2 - q) * sin(radianAngle);
    b2 = q + (x2 - p) * sin(radianAngle) + (y2 - q) * cos(radianAngle);
    a3 = p + (x3 - p) * cos(radianAngle) - (y3 - q) * sin(radianAngle);
    b3 = q + (x3 - p) * sin(radianAngle) + (y3 - q) * cos(radianAngle);
    setcolor(YELLOW);
    line(a1, b1, a2, b2);
    line(a2, b2, a3, b3);
    line(a3, b3, a1, b1);
}
int main()
{
    int gd = DETECT, gm;
    int x, y, x1, y1, x2, y2;
    int sx, sy;
    float angle;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("Enter 1st coordinate of the triangle: ");
    scanf("%d %d", &x, &y);
    printf("Enter 2nd coordinate of the triangle:");
    scanf("%d %d", &x1, &y1);
    printf("Enter 3rd coordinate of the triangle: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the angle for rotation (in degrees): ");
    scanf("%f", &angle);
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x, y);
    getch();
    cleardevice();
    RotateTriangle(x, y, x1, y1, x2, y2, angle);
    getch();
    closegraph();
    return 0;
}