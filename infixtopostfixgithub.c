#include<stdio.h>
#include <ctype.h>


char st[100];
int top = -1;

push(char elem)
{
    st[++top] = elem;
}

char pop()
{
    return (st[top--]);
}

int prec(char elem)
{
    switch (elem)
    {
        case '#':
            return 0;
        case '(':
            return 1;
        case '+':
        case '-':
            return 2;
        case '*':
        case '/':
            return 3;
    }
}
 main()
 {
    char infx[100], pofx[100], ch, elem;
    int i = 0, k = 0;
    printf("Enter Infix expression : \n");
    scanf("%s", infx);
    push('#');
    while ((ch = infx[i++]) != '\0')
        {
            if (ch == '(')
                push(ch);
            else if (isalnum(ch))
                pofx[k++] = ch;
            else if (ch == ')')
            {
                while (st[top] != '(')
                pofx[k++] = pop();
                elem = pop();
            }
            else
            {
                while (prec(st[top]) >= prec(ch))
                pofx[k++] = pop();
                push(ch);
            }
        }
    while (st[top] != '#')
        pofx[k++] = pop();
    pofx[k] = '\0';
    printf("PostFix expression : %s",pofx);
}
