#include <stdlib.h>

void rand_string(char *s, size_t size){
    static const char setChar[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";    
    size_t setCharSize = sizeof(setChar) - 1;
    if(size){
        for(size_t i = 0; i < size; i++){
            int key = rand() % setCharSize;
            s[i] = setChar[key];
        }
        s[size] = '\0';
    }
    
}