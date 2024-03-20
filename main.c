#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help()
{
    printf("________________________________________________________________________\n");
    printf(" __          __  _                            _          ____       _ _\n");
    printf(" \ \        / / | |                          | |        |  _ \     | | |\n");
    printf("  \ \  /\  / /__| | ___ ___  _ __ ___   ___  | |_ ___   | |_) | ___| | |\n");
    printf("   \ \/  \/ / _ \ |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \  |  _ < / _ \ | |\n");
    printf("    \  /\  /  __/ | (_| (_) | | | | | |  __/ | || (_) | | |_) |  __/ | |\n");
    printf("     \/  \/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/  |____/ \___|_|_|\n");
    printf("\n");
    printf("");
}
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        help();
    }
    else if (argc == 2)
    {
        if (strcmp(argv[1], "-o") == 0)
        {

            printf("Bell has been opened using %s\n", argv[1]);
        }
        else if (strcmp(argv[1], "-h") == 0)
        {

            printf("Bell has been opened using %s\n", argv[1]);
        }
        {
            printf("Error :( Bell doesnt have that command.)");
        }
    }
}