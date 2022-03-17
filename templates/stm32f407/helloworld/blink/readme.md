# blink
随便写了个for循环的delay函数，并且把这个函数**封装**成文件了（）
> 具体见下面的toy_delay.h和toy_delay.c

```c 
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
	for (i=0;i<=delay_Cycles;i++)
	{
		// do nothing but wait;
	}
}
#endif
```
```c
/**toy_delay.h
 *
 */
#ifndef __TOY_DELAY_H
#define __TOY_DELAY_H
void toy_delay(uint32_t delay_Cycles);
#endif

```

