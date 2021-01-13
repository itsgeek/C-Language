#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a[4];
    printf("Enter array elements:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements are:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}