#include <add_five.h>
#include <stdio.h>

int main()
{
    int a = 7;
    int b = add_five(a);

    if (b == 12) {
        printf("PASS!\n");
        return 0;
    } else {
        printf("FAIL!\n");
        return -1;
    }    
}