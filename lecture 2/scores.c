#include <stdio.h>

float average(int length, int array[]);

int main(void){ 
    int number_of_scores;
    printf("Numero de notas: ");
    scanf("%i", &number_of_scores);

    int scores[number_of_scores];

    for (int i = 0; i < number_of_scores; i++){
        printf("Escreva o valor %i: ", i);
        scanf("%i", &scores[i]);
    }

    printf("Average: %f\n", average(number_of_scores, scores));

}

float average(int length, int array[]){

    float scores_sum = 0; //Tá em float para o resultado da divisão ser em float.
    
    for (int i = 0; i < length; i++){   
        scores_sum+= array[i];
    }

    return (scores_sum / length);
}
