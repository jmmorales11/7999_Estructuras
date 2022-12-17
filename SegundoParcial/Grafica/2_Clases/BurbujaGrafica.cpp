// C++ Implementation for drawing line
#include <graphics.h>
  
// driver code
int main()
{
    // gm is Graphics mode which is a computer display
    // mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file
    int gd = DETECT, gm;
  
    // initgraph initializes the graphics system
    // by loading a graphics driver from disk
    initgraph(&gd, &gm, "");
  
    line(x1, y1, x2, y2);
  
    getch();
  
    // closegraph function closes the graphics
    // mode and deallocates all memory allocated
    // by graphics system .
    closegraph();
}
