#include <add_five.h>
#include <add_six.h>
#include <stdio.h>

int main()
{
    int a = 7;

    if (add_five(a) == 12 &&
        add_six(a) == 13 &&
        add_hundred(a) == 107)
    {
        printf("PASS!\n");
        return 0;
    } else {
        printf("FAIL!\n");
        return -1;
    }    
}