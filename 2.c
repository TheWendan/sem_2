#include <stdio.h>


// aaa bbb ccc

int main()
{
    char c;
    int flag = 0;
    while((c = getchar())!= '\n')
    {
        if(c != ' ' && c != '\t')
        {
            putchar(c);
            flag = !flag;
        }
        else
        {
            if(flag)
            {
                putchar('\n');
                flag = !flag;
            }
        }   
            
    }
    return 0;
}