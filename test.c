#include "stdio.h"
#include "stdint.h"

int rtos_main()
{
    printf("Hello world\r\n");
    int x, y;
    x = 2.5;
    y = 3;
    printf("%f\n", x + y);
    printf("Hello Dima\r\n");

    return 0;
}
