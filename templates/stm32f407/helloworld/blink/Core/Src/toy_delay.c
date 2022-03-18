/**
 * toy_delay.c
 * it is a toy
 */
#include "main.h"
#ifdef __TOY_DELAY_H
// compiler complains without this #ifdef, don't know why.
#include "toy_delay.h"
void toy_delay(uint32_t delay_Cycles)
{
	uint32_t i = 0;
	for (i=0;i<delay_Cycles;i++)
	{
		// do nothing but wait;
	}
}
#endif
