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
            printf("Error 404 \n:( Bell doesnt have that command run bell -h\n");
        }
    }
    else if (argc == 3)
    {
        if (strcmp(argv[1], "-c") == 0)
        {
            if (atoi(argv[2]) > 0)
            {
                int sec = atoi(argv[2]);
                int i = 0;

                int m = 0, h = 0;
                int s = sec % 60;
                m = (m % 3600) / 60;
                h = h % 3600;

                while (sec > 0)
                {
                    h = sec / 3600;
                    m = (sec % 3600) / 60;
                    s = sec % 60;
                    // Display the countdown
                    printf("\r%02d:%02d:%02d", h, m, s);
                    fflush(stdout);
                    sleep(1);
                    sec--;
                }
                printf("\r%02d:%02d:%02d\n", h, m, s);
                printf("Timers Up!\n");

                return 0;
            }
        }
        else
        {
            printf("invalid input\n");
        }
    }
}
