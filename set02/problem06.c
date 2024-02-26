#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char a , str , rev_str , reverse_a;
    input_string(&a);
    str_reverse(&str , &rev_str);
    output(&a , &reverse_a);
    return 0;
}

void input_string(char *a)
{
    printf("enter the string");
    scanf("%s",&a);
}

void str_reverse(char *str , char *rev_str)
{
    
}