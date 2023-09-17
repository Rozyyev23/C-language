#include <stdio.h>

void printGradeDescription(int grade) {
    switch (grade) {
        case 1:
            printf("Отметка: 1 - плохо\n");
            break;
        case 2:
            printf("Отметка: 2 - неудовлетворительно\n");
            break;
        case 3:
            printf("Отметка: 3 - удовлетворительно\n");
            break;
        case 4:
            printf("Отметка: 4 - хорошо\n");
            break;
        case 5:
            printf("Отметка: 5 - отлично\n");
            break;
        default:
            printf("Некорректная отметка\n");
    }
}

int main() {
    int grade;

    printf("Введите значение отметки: ");
    scanf("%d", &grade);

    printGradeDescription(grade);

    return 0;
}
