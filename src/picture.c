#include "framebf.h"
#include "bongo.h"
#include "uart.h"
#include "mbox.h"
#include "capoo.h"
#include "dogde.h"

void Pic()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 300; y < 300+bongo_height; y++){
        for (x = 300; x < 300+bongo_width; x++ )
        {
            attr = bongo[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
    
}


void Pic2()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned i = 0;
    unsigned attr;
    for (y = 0 ; y < capoo_height; y++){
        for (x = 0; x < capoo_width; x++ )
        {
            attr = capoo[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
    }
}

void Pic3(unsigned int pos)
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned i = pos;
    unsigned attr;
    for (y = 0; y < dogde_height; y++){
        for (x = 0; x < dogde_width; x++ )
        {
            attr = dogde[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
    }
}



