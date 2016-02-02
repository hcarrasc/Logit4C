#include <stdio.h>
#import "logit.h"

int main(){
    
    char* data;
     
    data = "Hello World :)";
    logit(data, __FUNCTION__); 
    
    data = "Is an amazing day to coding :D";
    logit(data, __FUNCTION__);     
    
}
