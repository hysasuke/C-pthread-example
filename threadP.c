//
//  threadP.c
//  
//
//  Created by BennyLi on 16/6/27.
//
//

#include <stdio.h>
#include <pthread.h>

void *PRINT(char *param) {
    printf("%s\n", param);
}

int main(int argc, char *argv[]) {
    pthread_t thread1;
    pthread_t thread2;
    
    pthread_create(&thread1, NULL, PRINT, argv[1]);
    pthread_create(&thread2, NULL, PRINT, argv[2]);
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    printf("First thread print job finished!\n");
    printf("Second thread print job finished!\n");
    return 0;
}
