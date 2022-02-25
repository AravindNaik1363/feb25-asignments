#include<stdio.h>
int main()
{
    int i=1;
    printf("%d\n",i);
    int* ptr;
    ptr=&i;
    printf("%u\n",&i);
    printf("%d\n",ptr);
    printf("%u\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d",*(&i));
    return 0;
}
