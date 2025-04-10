/*
Senza utilizzare la libreria <string.h>, scrivere un programma strutturato in
sottoprogrammi che inserita una stringa nello stdin la inverte
modificandola.
 */


#include <iostream>

using namespace std;

void lettura(char *s1);
void scambia(char *s1 , char *str_invertita);

int main() {
    char str1[20] = "";
    char str_invertita[20] = "";

    lettura(str1);
    scambia(str1 , str_invertita);

    cout << "str1 invertita:  " << str_invertita << endl;

    return 0;
}

void lettura(char *s1 ) {
    cout << "Inserire la str1: ";
    cin.getline(s1, 20);
}

void scambia(char *s1 , char *str_invertita) {
    int len = 0;
    for (int i = 0; s1[i] != '\0'; i++) len++;

    for (int i = 0; i < len; i++) {
        str_invertita[i] = s1[len - 1 - i];
    }
}