#include "middle_str.h"

bool itc_compare(string s1, string s2){
    long long i=0;
    while (s1[i] != '\0'){
        if(s1[i] != s2[i]){
            return false;
            break;
        }
        i++;
    }
    if(s2[i] == '\0'){
        return true;
    }
    return false;
}
