#ifndef PARA_CALLBACK_H
#define PARA_CALLBACK_H

typedef void (*callback_t)(void *);
extern void repeat_three_times(callback_t, void *);

#endif

void repeat_three_times(callback_t f, void *para)
{
     f(para);
     f(para);
     f(para);
}
/* main.c */
#include <stdio.h>

void say_hello(void *str)
{
     printf("Hello %s\n", (const char *)str);
}

void count_numbers(void *num)
{
     int i;
     for(i=1; i<=(int)num; i++)
     printf("%d ", i);
     putchar('\n');
}

int main(void)
{
     repeat_three_times(say_hello, "Guys");
     repeat_three_times(count_numbers, (void *)4);
     return 0;
}
