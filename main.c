//Write a C/C++ program that records samples from your computer microphone at 58 kHz sampling rate for 4.5 seconds.
//Plot the recorded sound
#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *file;
    char c;
    file = fopen("/etc/alsa/audioFile0.raw", "r");
    while(fscanf(file, "%c", &c) != -1) {
               printf("%c", c);
    }
    return 0;
    fclose(file);
}
               
  
