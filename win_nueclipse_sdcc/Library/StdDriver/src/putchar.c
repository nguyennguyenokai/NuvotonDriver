
#include "numicro_8051.h"


/*
 * putchar (mini version): outputs charcter only
 */
#if 0
char putchar (char c)
{
		while (!TI_1);  /* wait until transmitter ready */
		TI_1 = 0;
		SBUF_1 = c;      /* output character */
		return (c);
}
#endif

#if 1
//char putchar (char c)  {
int putchar (int c)  {
  UART_Send_Data(UART0,c);
  return (c);
}
#else
int putchar (int c)  {
  UART_Send_Data(UART1,c);
  return (c);
}
#endif
