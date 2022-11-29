#include <stdio.h>
#include <stdint.h>

#define BITMAN_MN(num,m,n)    (num  &   (((1<<m) - 1) ^ ((1<< (n-1)) - 1)))

int main(void)
{
    uint16_t temp = 0x1234;
    printf("%x\n",BITMAN_MN(temp,5,4));

}
