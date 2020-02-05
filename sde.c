#include<stdio.h>
void func(int buffer[]);
main()
{
    int a[500];
    printf("%ld\n",sizeof(a));
    func(a);
}
void func(int buffer[])
{
    printf("%ld",sizeof(buffer));

}