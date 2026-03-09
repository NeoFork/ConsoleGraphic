#include<stdio.h>
#include<stddef.h>
#include<uchar.h>
#include<stdint.h>

typedef struct __attribute__((packed)){
    int16_t renderingLevel;
    int16_t* pixels;
    unsigned _BitInt(72) verticesOfTheTriangle;
} triangle;





int ScreenBreathIn(int width, int height, triangle bufferOfTriangles[]){
    char8_t screenBuffer[/* constant * */(width /* + constant */)*height]; //we append and multipli constants to width, 'couse we will append '\n' and ANSI256 symbols in the each screen's string in console
    
    for(int i = 0; i < (width /* + constant */)*height; i++){
        //parce pixels of each triangle and they colors in screenBuffer
    }
    void ScreenBufferOutput(){
        
        return 0;
    }
    exec(ScreenBufferOutput);//we init child process,and wait until it end
    return 0;
}




int main(){
    //\u259E\u259A\n\u259A\u259E;
    
    printf("\u001b[38;5;128m\u001b[48;5;143m\u259E\u259A\n\u259A\u259E\u001b[48;0;0m\u001b[38;0;0m\n");//ANSI256 for colore (it is just example)
    printf("\u001b[38;5;129mmeow MEOW\u001b[0m\n");
    
    return 0;
}
