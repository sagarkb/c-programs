#include<stdio.h>

// void hello(){
//     printf("hello from a function:)");
// }


// void main(){
//     printf("Hello after so much time:)\n");
//     hello();
// }

void main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n;i++){
        printf("enter element: ");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n;i++){
        printf("%d ", array[i]);
    }

       
}