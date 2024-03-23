#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main()
{
    char *input;
    while (1)
    {
        input = readline("> ");
        if (!input)
        {
            break;
        }
        if (strcmp(input, "exit") == 0)
        {
            free(input);
            break;
        }
        printf("You entered: %s\n", input);
        add_history(input);
        free(input);
    }
    return 0;
}