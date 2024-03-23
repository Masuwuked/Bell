#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
void help()
{
    printf("__________________________________________________________________________________________\n");
    printf(" ________         __                                 __              ______         __ __ \n");
    printf("|  |  |  |.-----.|  |.----.-----.--------.-----.    |  |_.-----.    |   __ \\.-----.|  |  |\n");
    printf("|  |  |  ||  -__||  ||  __|  _  |        |  -__|    |   _|  _  |    |   __ <|  -__||  |  |\n");
    printf("|________||_____||__||____|_____|__|__|__|_____|    |____|_____|    |______/|_____||__|__|\n");
    printf(" \n");
    printf(" \n");
    printf("\n");
    printf("");
}
void start()
{
    int ch;
    initscr();
    addstr("Enter a number\n");

    getint("");
    while ((ch = getch()) != '\n')
    {
        printw("%c\n", ch);
        refresh();
    }
    endwin();
}
int main(int argc, char **argv)
{
    float version = 0.001;
    if (argc < 2)
    {
        printf("Bell is ready to use run bell -h for guide. \nBell version: %0.3f\n", version);
    }
    else if (argc == 2)
    {
        if (strcmp(argv[1], "-c") == 0)
        {
            start();
        }
        else if (strcmp(argv[1], "-h") == 0)
        {

            help();
        }
        else
        /// errors go here
        {
            printf("Error :( Bell doesnt have that command run bell -h\n");
        }
    }
    else if (argc > 2)
    {
        printf("Command Not found please run bell with -h for guide.\n");
    }
}