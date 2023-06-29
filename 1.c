#include <stdio.h>

// aaa bbb ccc
// 
//aaa bbb

// По условию бесконечный цикл
int main()
{
    char c;
    int flag;
    while(1)
    {
        flag = 0;
        while((c = getchar()) != '\n')
        {
            if(c != ' ' && c != '\t')
            {
                putchar(c);
                flag = 1;
            }
                
        }
        if(flag)
            putchar('\n');
    }
    return 0;
}