#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function to generate a random character from a given character set*/
char getRandomChar(const char* charSet) {
    int index = rand() % strlen(charSet);
    return charSet[index];
}

/* Function to generate a random password*/
void generateRandomPassword(char* password, int length, const char* charSet) {
    for (int i = 0; i < length; i++) {
        password[i] = getRandomChar(charSet);
    }
    password[length] = '\0';
}

int main() {
    srand(time(NULL)); /* Seed the random number generator with the current time*/

    const char charSet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>?"; /* Add more characters if needed*/
    const int passwordLength = 12;

    char password[passwordLength + 1]; /* +1 for the null terminator*/

    generateRandomPassword(password, passwordLength, charSet);

    printf("Random Password: %s\n", password);

    return 0;
}
