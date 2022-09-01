#include "uart.h"
#include "mbox.h"
#include "framebf.h"
#include "delays.h"


void main()
{
	int i = 0;
	char cmd[50] = " ";
	int size = 0;
// set up serial console
	uart_init();
	// Welcome screen
	uart_puts("\033[34m\n");
	uart_puts("\n'########:'########:'########:'########::'#######::'##:::::::::'#######::::'#####:::\n");
	uart_puts(" ##.....:: ##.....:: ##.....::... ##..::'##.... ##: ##:::'##::'##.... ##::'##.. ##::\n");
	uart_puts(" ##::::::: ##::::::: ##:::::::::: ##::::..::::: ##: ##::: ##:: ##:::: ##:'##:::: ##:\n");
	uart_puts(" ######::: ######::: ######:::::: ##:::::'#######:: ##::: ##::: ########: ##:::: ##:\n");
	uart_puts(" ##...:::: ##...:::: ##...::::::: ##::::'##:::::::: #########::...... ##: ##:::: ##:\n");
	uart_puts(" ##::::::: ##::::::: ##:::::::::: ##:::: ##::::::::...... ##::'##:::: ##:. ##:: ##::\n");
	uart_puts(" ########: ########: ########:::: ##:::: #########::::::: ##::. #######:::. #####:::\n");
	uart_puts("........::........::........:::::..:::::.........::::::::..::::.......:::::.....::::\n");
	uart_puts("\033[36m\n");
	uart_puts("'########:::::'###::::'########::'########:::::'#######:::'######::\n");
	uart_puts(" ##.... ##:::'## ##::: ##.... ##: ##.....:::::'##.... ##:'##... ##:\n");
	uart_puts(" ##:::: ##::'##:. ##:: ##:::: ##: ##:::::::::: ##:::: ##: ##:::..::\n");
	uart_puts(" ########::'##:::. ##: ########:: ######:::::: ##:::: ##:. ######::\n");
	uart_puts(" ##.... ##: #########: ##.. ##::: ##...::::::: ##:::: ##::..... ##:\n");
	uart_puts(" ##:::: ##: ##.... ##: ##::. ##:: ##:::::::::: ##:::: ##:'##::: ##:\n");
	uart_puts(" ########:: ##:::: ##: ##:::. ##: ########::::. #######::. ######:: \n");
	uart_puts("........:::..:::::..::..:::::..::........::::::.......::::......:::\n\n");
	uart_puts("	Developed by Ta Hien Thuan - s3772163 \n");


	uart_puts("\033[m\n\n\n");
	unsigned int pos = 0;

	uart_puts("\n");
	uart_puts("BareOS:> ");

	

	// echo everything back
	while(1) {
		//read each char
		char c = uart_getc();
		//send back twice
		uart_sendc(c);

		if (c == 's') //scroll down
		{
			uart_puts("\n");
			uart_init();
			pos += 1680*100;
			Pic3(pos);
		} 
		else if (c == 'w') //scroll up
		{
			uart_puts("\n");
			uart_init();
			pos -= 1680*100;
			Pic3(pos);
		}
		else if (c == 'z') //move right
		{
			uart_puts("\n");
			uart_init();
			pos -= 100;
			Pic3(pos);
		}
		else if (c == 'x') //move left
		{
			uart_puts("\n");
			uart_init();
			pos += 100;
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
				if (compare(cmd,"help setcolor") == 0)
				{
					uart_puts("\n");
					uart_puts("Setcolor\n");
					uart_puts("Set text, and/or background color to one of following color:\n");
					uart_puts("BLACK, RED, GREEN, YELLOW, BLUE, PURPLE, CYAN, WHITE\n");
					uart_puts("Example: setcolor -b yellow\n\n");
				}
				else if (compare(cmd,"help cls") == 0)
				{
					uart_puts("\n");
					uart_puts("Clear screen\n");
					uart_puts("Terminal will scroll down to the current postion of cursor\n");
					uart_puts("Example: cls\n\n");
				}
				else if (compare(cmd,"help brdrev") == 0)
				{
					uart_puts("\n");
					uart_puts("Board Revision\n");
					uart_puts("show all information on current raspi board revision\n");
					uart_puts("Example: brdrev\n\n");
				}
				else if (compare(cmd,"help scrsize") == 0)
				{
					uart_puts("\n");
					uart_puts("Screen size\n");
					uart_puts("Set Screen Size\n");
					uart_puts("Use -p to set physical screen size \n");
					uart_puts("Use -v to set virtual screen size\n");
					uart_puts("Example: scrsize -p 1024 768\n\n");
				}
				else if (compare(cmd,"help maxtemp") == 0)
				{
					uart_puts("\n");
					uart_puts("Max Temperature\n");
					uart_puts("Return the maximum safe temperature of the SoC in thousandths of a degree C\n");
					uart_puts("Overclock may be disabled above this temperature.\n");
					uart_puts("Example: maxtemp\n\n");
				}
				else if (compare(cmd,"help clock") == 0)
				{
					uart_puts("\n");
					uart_puts("System Clock\n");
					uart_puts("Return the frequency of UART, ARM and EMMC clock\n");
					uart_puts("All clocks are the base clocks for those peripheral.\n");
					uart_puts("Example: clock\n\n");
				}
				else if (compare(cmd,"help clkmaxmin") == 0)
				{
					uart_puts("\n");
					uart_puts("Max and min frequency of system clock\n");
					uart_puts("Return max and min frequency of UART, ARM or EMMC clock\n");
					uart_puts("Example: clkmaxmin 1\n\n");

				}
				else if (compare(cmd,"help drawrec") == 0)
				{
					uart_puts("\n");
					uart_puts("Draw Rectangle\n");
					uart_puts("Draw multiple rectangle on screen\n");
					uart_puts("Example: drawrec\n\n");
				}
				else if (compare(cmd,"help image") == 0)
				{
					uart_puts("\n");
					uart_puts("Pixel Picture\n");
					uart_puts("Create an image of cyro and pyro slime on the screen\n");
					uart_puts("Example: image\n\n");
				}
				else
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

			}
			else if (compare(cmd,"drawrec") == 0) // draw rectangle 
			{
				framebf_init();
				drawRectARGB32(100,100,400,400,0x00AA0000,1); //RED
				drawRectARGB32(150,150,400,400,0x0000BB00,1); //GREEN
				drawRectARGB32(200,200,400,400,0x000000CC,1); //BLUE
				drawRectARGB32(250,250,400,400,0x00FFFF00,1); //YELLOW
				drawRectARGB32(300,300,400,400,0x00FF8000,1); //Orange
				drawRectARGB32(350,350,400,400,0x009424D5,1); //Purple
				drawRectARGB32(380,380,400,400,0x00FF9999,1); //Light Pink
				uart_puts("\n");
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