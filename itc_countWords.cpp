#include "middle_str.h"

int itc_countWords(string str){
    long long counter = 0;
    bool check = true;
    long long i = =0;
    
    while(str[i] != '\0'){
         if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != 32){
            check = false;
        }
        if(str[i] == 32 && check )
            kol += 1;
        if(str[i] == 32 && !check){
            check = true;}
        i++;
    
    }
    
    if(check == false){
        return i;
    }

    return counter;
}
