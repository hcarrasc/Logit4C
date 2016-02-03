/*
  Name: Logit4C.c
  Author: Héctor Carrasco
  Date: 02-02-2016 12:14
  Description: Log what you need.
*/

#include <time.h>

int firstRun = 0;

void logit(char* text, char* function, int line) {
    
    FILE *log = fopen("application_name.log","a+");
    if (log==NULL) {
        fclose (log);
    }
    
    time_t ltime;       /* calendar time */
    ltime = time(NULL); /* get current cal time */
    char* timeAux = asctime(localtime(&ltime));
    timeAux[24] = ' ';
    
    if (firstRun == 0){
        firstRun = 1;
        fprintf(log,"\n\n\n%s ---------- STARTING NEW INSTANCE OF PROGRAM ----------\n", timeAux);
    } 
    
    fprintf(log,"\n%s | %s | %d - %s",timeAux, function, line, text);
    fclose(log);
    
}
