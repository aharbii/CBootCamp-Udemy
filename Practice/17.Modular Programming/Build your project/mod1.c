#include <stdio.h>
#include "mod1.h"

void print_mod1()
{
    Led led = LED_ON;
    printf("This is mod1, led status: ");
    print_led_status(led);
    printf("\n");
}