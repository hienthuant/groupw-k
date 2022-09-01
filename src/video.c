#include "framebf.h"
#include "video.h"
#include "uart.h"
#include "mbox.h"
#include "delays.h"

void video_frame1()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = frame1[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
    
}

void video_frame2()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = frame2[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
    
}

void video_frame3()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = frame3[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
    
}

void video_frame4()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = frame4[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
    
}

void video_frame5()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = frame5[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
    
}

void video_frame6()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = frame6[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
    
}


void video()
{
    uart_init();
    video_frame1();
    wait_cycles(150000000);
    video_frame2();
    wait_cycles(150000000);
    video_frame3();
    wait_cycles(150000000);
    video_frame4();
    wait_cycles(150000000);
    video_frame5();
    wait_cycles(150000000);
    video_frame6();
    wait_cycles(150000000);
    video_frame1();
    wait_cycles(150000000);
    video_frame2();
    wait_cycles(150000000);
    video_frame3();
    wait_cycles(150000000);
    video_frame4();
    wait_cycles(150000000);
    video_frame5();
    wait_cycles(150000000);
    video_frame6();
    wait_cycles(150000000);
    video_frame1();
    wait_cycles(150000000);
    video_frame2();
    wait_cycles(150000000);
    video_frame3();
    wait_cycles(150000000);
    video_frame4();
    wait_cycles(150000000);
    video_frame5();
    wait_cycles(150000000);
    video_frame6();
}