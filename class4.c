#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a, b, t, op;
    while ("True")
    {
        puts("****************** C A L C U L A T O R ******************");
        puts("\n");
        puts("To add, press 1");
        puts("To subtract, press 2");
        puts("To multiply, press 3");
        puts("To divide, press 4");
        fputs("If you want to continue, press any key. To exit press 0: ", stdout);
        scanf("%d", &t);
        if (t == 0){
            break;
        }
        else{
        scanf("%d\n", &a);
        scanf("%d", &b);
        printf("Choose the above option: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Addition is: %d\n", a+b);
            break;

        case 2:
            printf("Subtraction is: %d\n", a-b);
            break;

        case 3:
            printf("Multiplication is: %d\n", a*b);
            break;

        case 4:
            printf("Division is: %d\n", a/b);
            break;
        
        default:
            printf("You have entered invalid option.\n");
            break;
        }
        }
        continue;
    }

    puts("Thanks, see you soon.");

    return 0;
}