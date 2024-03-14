#include <stdio.h>
#define STACK_EMPTY '0'
#define STACK_SIZE 20

void
push(char stack[],    /* input/output - the stack */
     char item,       /* input - data being pushed onto the stack */
     int  *top,       /* input/output - pointer to top of stack */
     int  max_size)   /* input - maximum size of stack */
{
     if (*top < max_size-1) {
         ++(*top);
         stack[*top] = item;
     }
}

char
pop (char stack[],    /* input/output - the stack */
    int *top)        /* input/output - pointer to top of stack */
{
    char item;       /* value popped off the stack */

    if (*top >= 0) {
        item = stack[*top];
        --(*top);
    } else {
         item = STACK_EMPTY;
    }

    return (item);
}

int
main (void)
{
   char s [STACK_SIZE];
   int s_top = -1; // stack is empty

    push(s, 'A', &s_top, STACK_SIZE);
    printf("Stack after push: %s\n", s);

    push(s, 'B', &s_top, STACK_SIZE);
    printf("Stack after push: %s\n", s);

    push(s, 'C', &s_top, STACK_SIZE);
    printf("Stack after push: %s\n", s);

    char popped_item = pop(s, &s_top);
    printf("Popped item: %c\n", popped_item);
    printf("Stack after pop: %s\n", s);

    return 0;

}
