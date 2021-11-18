#include "middle_str.h"

string itc_DecToBin(string str){
    long long i =0, temp_num = 0, addon = 0;

    string temp = "";
    while (str[i] != '\0'){
        if ( itc_isDigit(str[i])){
                temp = "";
                addon = i;
            for ( long long j = i; itc_isDigit(str[j]); j++){
                temp += str[j];
                addon++;
            }

        temp_num = str_to_num(temp);
        temp = itc_decToBase(temp_num, 2);
        str = itc_slice_str(str, 0, i -1) + temp + itc_slice_str(str, addon, itc_len(str));
        i = addon;
        }else{
            i++;
        }
    }
    return str;
}
