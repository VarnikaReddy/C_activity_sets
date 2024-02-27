#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    char string1 , string2;
    int result;
    input_two_strings(&string1 , &string2);
    result=stringcompare(&string1 , &string2);
    output(&string1 , &string2 , result);
    return 0;
}

void input_two_strings(char *string1, char *string2)
{
    printf("enter the first string");
    scanf("%s",&string1);
    printf("enetr the string2");
    scanf("%s",&string2);
}

int stringcompare(char *string1, char *string2)
{
    int i;
    for(i=0;string1[i]==string2[i] && string1!='\0';i++);//loop traversal 
    return string1[i]-string2[i];//compares the ASCII values for the alphabets 
}

void output(char *string1, char *string2, int result)
{
    if(result>0)
    {
        printf("%s is greater than %s",string1,string2);
    }else if(result<0){
        print("%s is greater than %s",string2,string1);
    }else{
        printf("Both the strings are equal");
    }
}
