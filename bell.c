#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void help()
{
    printf("__________________________________________________________________________________________\n");
    printf(" ________         __                                 __              ______         __ __ \n");
    printf("|  |  |  |.-----.|  |.----.-----.--------.-----.    |  |_.-----.    |   __ \\.-----.|  |  |\n");
    printf("|  |  |  ||  -__||  ||  __|  _  |        |  -__|    |   _|  _  |    |   __ <|  -__||  |  |\n");
    printf("|________||_____||__||____|_____|__|__|__|_____|    |____|_____|    |______/|_____||__|__|\n");
    printf(" \n");
    printf(" https://github.com/Masuwuked\n");
    printf("Bell is Simple Program written in C for creating a countdown in the terminal\n");
    printf("How to use Bell:\n");
    printf("run bell with -c in the following manner\n");
    printf("    -c <time in seconds>\n");
}
void start()
{
    /* int ch;
    initscr();
    addstr("Enter a number\n");

    while ((ch = getch()) != '\n')
    {
        printw("%c\n", ch);
        refresh();
    }
    endwin();*/
}
int main(int argc, char **argv)
{
    float version = 1.01;
    if (argc < 2)
    {
        printf("Bell is ready to use run bell -h for guide. \nBell version: %0.4f\n", version);
    }
    else if (argc == 2)
    {
        if (strcmp(argv[1], "-c") == 0)
        {
            printf("please mention the time.\n");
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
    else if (argc == 3)
    {
        if (strcmp(argv[1], "-c") == 0)
        {
            if (atoi(argv[2]) > 0)
            {
                int i = 1;
                int m = 0, h = 0;
                int sec = atoi(argv[2]);
                while (sec >= 60)
                {
                    sec = sec - 60;
                    m++;
                }
                while (m >= 60)
                {
                    m = m - 60;
                    h++;
                }

                for (; sec >= i; sec--)
                {

                    printf("The time left is %d hrs, %dmins %dsecs\n", h, m, sec);
                    sleep(1);
                }
                printf("Timers UP!");
            }
            else
            {
                printf("invalid input\n");
            }
        }
    }
}