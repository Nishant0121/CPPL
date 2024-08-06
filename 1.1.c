#include <stdio.h>

int Patil = 45;

void Local();
void Global();

int main()
{
    Global();
    Local();
    if (Patil > 0)
    {
        char Patil = 'N';
        printf("Value of local variable is %c\n", Patil);
    }
    return 0;
}

void Local()
{
    float Patil = 54.87;
    printf("Value of local variable is %f\n", Patil);
}

void Global()
{
    printf("Value of global variable is %d\n", Patil);
}