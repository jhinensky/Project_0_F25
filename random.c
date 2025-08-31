#include <stdlib.h>

// fills 's' with random lowercase letters, length 'size'
void rand_string(char *s, size_t size) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyz";
    int charset_size = 26;

    for ( size_t i = 0; i < size; i++ ){
        int key = rand() % charset_size; // remainders will always be 0-26
        s[i] = charset[key];
    }
    s[size] = '\0'; // add null terminator at the end
}