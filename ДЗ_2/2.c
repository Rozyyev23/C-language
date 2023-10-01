#include <stdio.h>
#include <stdlib.h>

int** createIdentityMatrix(int size) {
  int** matrix = (int**)malloc(size * sizeof(int*)); // Выделяем память для строк

  for (int i = 0; i < size; i++) {
    matrix[i] = (int*)malloc(size * sizeof(int)); // Выделяем память для столбцов
    for (int j = 0; j < size; j++) {
      matrix[i][j] = (i == j) ? 1 : 0; // Заполняем элементы матрицы: 1 на главной диагонали, 0 в остальных случаях
    }
  }

  return matrix;
}

void printMatrix(int** matrix, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d ", matrix[i][j]); // Выводим элементы матрицы
    }
    printf("");
  }
}

int main() {
  int size = 5; // Задайте здесь ваш размер матрицы

  int** identityMatrix = createIdentityMatrix(size);

  printf("Единичная матрица размером %d:", size);
  printMatrix(identityMatrix, size);

  // Освобождаем память
  for (int i = 0; i < size; i++) {
    free(identityMatrix[i]);
  }
  free(identityMatrix);

  return 0;
}