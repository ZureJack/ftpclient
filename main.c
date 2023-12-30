#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX_ARGC 10
struct cmd {
    char *cmdline;
    char *cmd_name;
    char *args[MAX_ARGC];
};
struct cmd cmd;
int parse_cmdline(char *cmdline)
{
    
    cmd.cmd_name = cmdline;
    if ((cmd.args[0] = strtok(cmdline, " ")) == NULL) return 0;

    int i = 1;
    while ((cmd.args[i] = strtok(NULL, " ")) != NULL)
    {
        printf("%s\n", cmd.args[i]);
        i++;
    }
    
}
int main(int argc, char *argv[])
{
    int running = 1;
    //client_PI_init()

    while (running)
    {
        cmd.cmdline = readline("ftp>");
        if (cmd.cmdline == NULL)
        {
            continue;
        }
        add_history(cmd.cmdline);
        parse_cmdline(cmd.cmdline);

        for (int i = 0; i < 100; i++)
        {
            if (i = 2)
            {
                //handler()
                break;
            }
        }
        free(cmd.cmdline);
    }
}