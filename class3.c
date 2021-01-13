#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a[50];
    int size, pos, num;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("Memory will get overflow");
    }
    
    else
    {
    printf("Enter the elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element you want to insert: ");
    scanf("%d", &num);
    printf("Enter position where you want to insert: ");
    scanf("%d", &pos);
    for (int i = size-1; i >= pos-1; i--)
    {
        a[i+1] = a[i];
    }
    a[pos-1] = num;
    size++;
    printf("Elements in the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    }
    
    
    return 0;
}