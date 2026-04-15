#include <stdio.h>

int main()
{
    char input;
    scanf("%c\n", &input);

    if (input >= 97 && input <= 122 || input >= 65 && input <= 90)
    {
        printf("ALPHA\n");
        if (input >= 65 && input <= 90)
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }
    else
    {
        printf("IS DIGIT\n");
    }

    return 0;
}
