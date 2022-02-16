//
//  main.c
//  Thirteen Commandments_13
//
//  Created by HyperLee on 2022/2/16.
//  ref:
//  https://www.ptt.cc/bbs/C_and_CPP/M.1465304337.A.9F2.html
//  Item 13.函式內 new 出來的空間記得要讓主程式的指標接住

#include <stdio.h>
#include <stdlib.h>

int* createNewArray(int size){
    return (int*) malloc(size * sizeof(int));
}


int main(int argc, const char * argv[]) {

    //int i = 0;
    int* ptr;
    ptr = createNewArray(10);
    
    for(int i = 0; i < 10; i++)
    {
        *(ptr + i) = i;
        printf("ptr + %d = %d\n", i, *(ptr + i));
    }
    
    return 0;
}
