#include "Stack.h"

void TestStack1()
{
    Stack st;
    StackInit(&st);
    StackPush(&st, 1);
    StackPush(&st, 2);
    printf("%d ", StackTop(&st));
    StackPop(&st);
    StackPush(&st, 3);
    StackPush(&st, 4);
    while (!StackEmpty(&st))
    {
        printf("%d ", StackTop(&st));
        StackPop(&st);
    }
    StackDestory(&st);
}

int main()
{
    TestStack1();
    return 0;
}