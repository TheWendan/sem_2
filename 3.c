#include <stdio.h>

// abc cab aaa def bbb eeee asdafeeeeee 

int main()
{
    char a;
    char b;
    int counter = 0;
    a = getchar();
    while(((b = getchar())!= '\n') && (a != '\n'))
    {
        if(a == b)
            counter++;
        else
        {
            if(counter >= 2)
            {
                for(int i =0;i<=counter;i++)
                    putchar(a);
                putchar('\n');
            }
            counter = 0;
        }
        a = b;
    }
    if(counter >= 2)
    {
        for(int i =0;i<=counter;i++)
            putchar(a);
        putchar('\n');
    }
    return 0;
}