#include <stdio.h>
#include <conio.h>

int main(){
    int i, j, c, arrsize;
    float arr[100];

    for(i = 0;i < 100;i++){
        printf("Enter number[%d] : ", i + 1);
        scanf("%f", &arr[i]);
	    if(arr[i] == 0){
		    arrsize = i;
		    break;
	    }
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
        float q1 = arr[(arrsize / 2) / 2];
        float q2 = (arr[(arrsize / 2) - 1] + arr[(arrsize / 2)]) / 2;
        float q3 = arr[(arrsize + ((arrsize / 2) - 1)) / 2];
        printf("minimum = %.0f\nmaximum = %.0f\nquartile_1 = %.2f\nquartile_2 = %.2f\nquartile_3 = %.2f", arr[0], arr[arrsize - 1], q1, q2, q3);
    }
    else if(arrsize % 2 != 0){//odd number
        float q1 = arr[(arrsize / 2) / 2];
        float q2 = arr[arrsize / 2];
        float q3 = arr[(arrsize + (arrsize / 2)) / 2];
        printf("minimum = %.0f\nmaximum = %.0f\nquartile_1 = %.2f\nquartile_2 = %.2f\nquartile_3 = %.2f", arr[0], arr[arrsize - 1], q1, q2, q3);
    }

    printf("\n\n...Press any key to end program...");
    getch();
    return 0;
}