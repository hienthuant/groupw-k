#include "framebf.h"
#include "end_video.h"
#include "end_video2.h"
#include "end_video3.h"
#include "start_video.h"
#include "uart.h"
#include "mbox.h"
#include "delays.h"
#include "start_video2.h"
#include "start_video3.h"
#include "start_video4.h"
#include "start_video5.h"
#include "start_video6.h"
#include "start_video7.h"

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

void video_start1()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start1[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
    
}

void video_start2()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start2[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
    
}

void video_start3()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start3[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
    
}

void video_start4()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start4[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}

void video_start5()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start5[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}

void video_start6()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start6[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}

void video_start7()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start7[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}

void video_start8()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start8[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}

void video_start9()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start9[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}

void video_start10()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start10[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}


void video_start11()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start11[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}

void video_start12()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start12[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}

void video_start13()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start13[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}

void video_start14()
{
    uart_init();
    framebf_init();
    unsigned int y,x;
    unsigned int i = 0;
    unsigned int attr;
    for (y = 50; y < 50+video_height; y++){
        for (x = 50; x < 50+video_width; x++ )
        {
            attr = start14[i];
            drawPixelARGB32(x,y,attr);
            i++;
        }
        
    }
 
}


void video()
{
    //start
    uart_init();
    video_start1();
    wait_cycles(100000000);
    video_start2();
    wait_cycles(100000000);
    video_start1();
    wait_cycles(100000000);
    video_start2();
    wait_cycles(100000000);
    video_start3();
    wait_cycles(100000000);
    video_start4();
    wait_cycles(100000000);
    video_start5();
    wait_cycles(100000000);
    video_start6();
    wait_cycles(100000000);
    video_start11();
    wait_cycles(100000000);
    video_start5();
    wait_cycles(100000000);
    video_start6();
    wait_cycles(100000000);
    video_start11();
    wait_cycles(100000000);
    video_start5();
    wait_cycles(100000000);
    video_start6();
    wait_cycles(100000000);
    video_start11();
    wait_cycles(100000000);
    video_start13();
    wait_cycles(100000000);
    video_start14();
    wait_cycles(100000000);
    video_start13();
    wait_cycles(100000000);
    video_start14();
    wait_cycles(100000000);
    video_start13();
    wait_cycles(100000000);
    video_start14();
    wait_cycles(100000000);
    video_start12();
    wait_cycles(100000000);
    video_start7();
    wait_cycles(100000000);
    video_start8();
    wait_cycles(100000000);
    video_start9();
    wait_cycles(100000000);
    video_start10();
    wait_cycles(100000000);
    //end
    video_frame1();
    wait_cycles(100000000);
    video_frame2();
    wait_cycles(100000000);
    video_frame3();
    wait_cycles(100000000);
    video_frame4();
    wait_cycles(100000000);
    video_frame5();
    wait_cycles(100000000);
    video_frame6();
    wait_cycles(100000000);
    video_frame1();
    wait_cycles(100000000);
    video_frame2();
    wait_cycles(100000000);
    video_frame3();
    wait_cycles(100000000);
    video_frame4();
    wait_cycles(100000000);
    video_frame5();
    wait_cycles(100000000);
    video_frame6();
    wait_cycles(100000000);
}
