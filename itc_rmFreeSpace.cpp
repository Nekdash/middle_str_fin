#include "middle_str.h"

string itc_rmFreeSpace(string str){
    long long i = 0;
long long addon = 0;
    while(str[i] != '\0'){
        if (str[i] == ' '){
                addon = 0;
            for (long long j = i; str[j] != ' '; j++){
                addon++;
            }
            str = itc_slice_str(str, 0, i) + itc_slice_str(str, addon, itc_len(str));
        }
    i++;
    }

}
