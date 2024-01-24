#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    char string1[100] , string2[100];
    int result;
    input_two_strings(&string1,&string2);
    result=stringcompare(&string1,&string2);
    output(&string1,&string2,result);
    return 0;
}

void input_two_strings(char *string1, char *string2)
{
    char string1[100] , string2[100];
    printf("enetr thr first string");
    scanf("%s",string1);
    printf("enter the second string");
    scanf("%s",&string2);
}

int stringcompare(char *string1, char *string2)
{
    int i;
    for(i=0;string1[i]==string2[i] && string1!='\0';i++);
    return string1[i]-string2[i];
}

void output(char *string1, char *string2, int result)
{
    if(result>0)
    {
        printf("%s is greater than %s" , string1 , string2);
    }
    if(result<0)
    {
        printf("%s is greater than %s",string2 , string1);
    }
    else
    {
        printf("both strings are equal");
    }

}