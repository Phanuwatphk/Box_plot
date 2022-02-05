#include <stdio.h>
#include <conio.h>

int main(){
    int arrsize, i, j, c;

    printf("Enter size of data : ");
    scanf("%d", &arrsize);
    int arr[arrsize];

    for(i = 0;i < arrsize;i++){
        printf("Enter number[%d] : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0;i < arrsize;i++){
        for(j = i + 1;j < arrsize;j++){
            if(arr[i] > arr[j]){
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }

    if(arrsize % 2 == 0){//even number
        float q1 = (float) arr[(arrsize / 2) / 2];
        float q2 = (float) (arr[(arrsize / 2) - 1] + arr[(arrsize / 2)]) / 2;
        float q3 = (float) arr[(arrsize + ((arrsize / 2) - 1)) / 2];
        printf("minimum = %d\nmaximum = %d\nquartile_1 = %.2f\nquartile_2 = %.2f\nquartile_3 = %.2f", arr[0], arr[arrsize - 1], q1, q2, q3);
    }
    else if(arrsize % 2 != 0){//odd number
        float q1 = (float) arr[(arrsize / 2) / 2];
        float q2 = (float) arr[arrsize / 2];
        float q3 = (float) arr[(arrsize + (arrsize / 2)) / 2];
        printf("minimum = %d\nmaximum = %d\nquartile_1 = %.2f\nquartile_2 = %.2f\nquartile_3 = %.2f", arr[0], arr[arrsize - 1], q1, q2, q3);
    }

    printf("\n\n...Press any key to end program...");
    getch();
    return 0;
}