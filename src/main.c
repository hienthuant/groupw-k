#include "uart.h"
#include "mbox.h"
#include "framebf.h"
#include "delays.h"

void main()
{
	int i = 0;
	char cmd[50];
	int size = 0;
// set up serial console
	uart_init();
	// Welcome screen
	welcome();

	uart_puts("\033[m\n\n\n");
	unsigned int pos = 0;

	uart_puts("\n");
	uart_puts("BareOS:> ");

	

	// echo everything back
	while(1) {
		char temp[50];
		//read each char
		char c = uart_getc();
		//send back twice
		uart_sendc(c);

		if (c == 's') //scroll down
		{
			uart_puts("\n");
			uart_init();
			if (pos > (1680 * 500))
				pos = pos;
			else
				pos += 1680*100;
			Pic3(pos);
		} 
		else if (c == 'w') //scroll up
		{
			uart_puts("\n");
			uart_init();
			if (pos <= 0 )
				pos = 0;
			else
				pos -= 1680*100;
			Pic3(pos);
		}

		if (c == '\b' ) //Using Backspace to delete command
		{
			uart_puts("\033[K");
			cmd[i] ='\0';
			i--;
		}
		else
		{
			cmd[i] = c;
		    i++;
		}

		if(c == '\n')
		{
			if (compare(cmd,"help ") == 0)
			{	
				uart_puts("For more information on specific command, please type help-<command name>\n");
				uart_puts("setcolor	Set text color, and/or background color\n");
				uart_puts("cls		Clear screen\n");
				uart_puts("brdrev		Show board revision\n");
				uart_puts("scrsize		Set screen size\n");
				uart_puts("drawrec		Draw multiple rectangle\n");
				uart_puts("image		Create image on screen\n");
				uart_puts("maxtemp		Return SoC chip max temperature\n");
				uart_puts("clkmaxmin	Get max and min of selected clock\n");
				uart_puts("clock		Get clock rate\n\n");
			}

			else if (compare(cmd,"cls") == 0) //clear screen
			{
				uart_puts("\033[2J");
				uart_puts("\033[H\n");
			}
			else if (compare(cmd,"pic1") == 0)
			{
				uart_init();
				Pic();
			}
			else if (compare(cmd,"pic2") == 0)
			{
				uart_init();
				Pic2();
			}
			else if (compare(cmd,"pic3") == 0)
			{
				uart_init();
				Pic3(0);
			}
			else if (compare(cmd,"video") == 0)
			{
				uart_init();
				video();
			}

			else
				uart_puts("wrong command\n\n");
			
			i = 0;
			uart_puts("BareOS:> ");
		}
	}
}
