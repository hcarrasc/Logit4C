/*
  Name: Logit4C.c
  Author: Héctor Carrasco
  Date: 02-02-16 12:14
  Description: Log what you need.
*/
#include <time.h>

void logit(char* text, char* function) {
    
    FILE *log = fopen("application_name.log","a+");
    if (log==NULL) {
        fclose (log);
    }
    
    time_t ltime;       /* calendar time */
    ltime = time(NULL); /* get current cal time */
    char* timeAux = asctime(localtime(&ltime));
    timeAux[24] = ' ';
    
    fprintf(log,"\n%s | %s - %s",timeAux, function, text);
    fclose(log);
}
