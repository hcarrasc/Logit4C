/*
  Name: Logit4C.c
  Author: Héctor Carrasco
  Date: 02-02-16 12:14
  Description: Log what you need.
*/


void logit(char* text) {
    
    FILE *log = fopen("the_system_name.log","a+");
    if (log==NULL) {
        fclose (log);
    }
    
    time_t ltime; /* calendar time */
    ltime = time(NULL); /* get current cal time */
    char* timeAux = asctime(localtime(&ltime));
    timeAux[24] = ' ';
    
    fprintf(log,"\n%s - %s",timeAux, text);
    fclose(log);
    
}
