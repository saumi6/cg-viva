// C program for the above approach
 
#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void boundaryfill(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryfill(x + 1, y, fill_color, boundary_color);
        boundaryfill(x, y + 1, fill_color, boundary_color);
        boundaryfill(x - 1, y, fill_color, boundary_color);
        boundaryfill(x, y - 1, fill_color, boundary_color);
    }
}
// Driver Code
void main()
{
    int gd=DETECT,gm;
    // Initialize of gdriver with
    // DETECT macros
    initgraph(&gd, &gm, "C:\\turboc3\\bgi");
    //setcolor(YELLOW);
    // Creating the base rectangle
    line(250, 100, 250, 600);
    line(250, 100, 250, 600);

    // Fill the White Color
    setfillstyle(SOLID_FILL, WHITE);

    // Create and fill the top strip
    rectangle(225, 600, 275, 610);
    rectangle(200, 610, 300, 620);

    floodfill(227, 608, YELLOW);
    floodfill(202, 618, YELLOW);

    // Fill the Light Red Color
    setfillstyle(SOLID_FILL, LIGHTRED);

    // Create and fill the ashoka
    // chakra with Blue
    rectangle(250, 100, 650, 280);
    line(250, 160, 650, 160);
    boundaryfill(252, 158,LIGHTRED,15);

    // Fill the Blue Color
    setfillstyle(SOLID_FILL, BLUE);

    // Create and fill the left
    // part of the middle strip

    // Create a Circle
    circle(450, 190, 30);
    boundaryfill(452, 188,BLUE, 15);

    // Fill the White Color
    setfillstyle(SOLID_FILL, WHITE);
    /*
    // Create and fill the right
    // part of the middle strip
    line(250, 160, 480, 160);
    line(250, 220, 480, 220);
    boundaryfill(252, 162, 15);

    // Fill the White Color
    setfillstyle(SOLID_FILL, WHITE);

    // Create and fill the bottom
    // strip
    line(480, 160, 650, 160);
    line(480, 220, 650, 220);
    boundaryfill(482, 162, 15);

    // Fill the Green Color
    setfillstyle(SOLID_FILL, GREEN);

    line(250, 220, 650, 220);
    boundaryfill(252, 278, 15);*/
    getch();
    // Close the initialized gdriver
    closegraph();
}