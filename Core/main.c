#include "stm32system.h"
#include "peripherals.h"
#include "uart_vprintf.h"

static uint8_t buffer[128];

int main()
{
	UART1.Init(USART_BRR_9600);
	while (1)
	{
		if (UART1.Scan(buffer))
		{
			UART1.Print("\nChuoi nhan duoc la: %s\n", buffer);
		}
	}
}
