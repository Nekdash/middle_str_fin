#include "middle_str.h"

char itc_sameChar(string str){
    
    char ch = "";
    long long i=, c = 1;
    while(str[i] != '\0'{
        for(long long j  = i + 1; str[i] != '\0'; j++){
            if(str[i] == str[j] && str[i] != ' ')
                c++;
        }
        if ( c == 2){
            ch = str[i];
            return ch;
        }
        c =1;i++;
    
    }
    return '1';
   
}
