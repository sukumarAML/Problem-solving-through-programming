#include<stdio.h>
void log_message(char *msg)
{
    static int total=0;
    total++;

    FILE *logfile = fopen("log.txt", "a");
    if (logfile!= NULL)
    {
        fprintf(logfile, "log %d: %s\n", total, msg);
        fclose(logfile);
    }

}
int main()
{
    char ch;
    printf("enter the log message \n");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'r':
    log_message("read data");
    break;
    case 'w':
    log_message("write data");
    break;
    case 'e':
    log_message("data error");
    break;
    }
    return 0;
}