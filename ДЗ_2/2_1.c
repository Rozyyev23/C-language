#include <stdio.h>
#include <stdlib.h>

// Функция для сложения матриц
int** addMatrices(int** matrix1, int** matrix2, int rows, int cols) {
  int** sum = (int**)malloc(rows * sizeof(int*));

  for (int i = 0; i < rows; i++) {
    sum[i] = (int*)malloc(cols * sizeof(int));
    for (int j = 0; j < cols; j++) {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  return sum;
}

// Функция для вычитания матриц
int** subtractMatrices(int** matrix1, int** matrix2, int rows, int cols) {
  int** diff = (int**)malloc(rows * sizeof(int*));

  for (int i = 0; i < rows; i++) {
    diff[i] = (int*)malloc(cols * sizeof(int));
    for (int j = 0; j < cols; j++) {
      diff[i][j] = matrix1[i][j] - matrix2[i][j];
    }
  }

  return diff;
}

// Функция для умножения матрицы на число
int** multiplyMatrixByScalar(int** matrix, int rows, int cols, int scalar) {
  int** result = (int**)malloc(rows * sizeof(int*));

  for (int i = 0; i < rows; i++) {
    result[i] = (int*)malloc(cols * sizeof(int));
    for (int j = 0; j < cols; j++) {
      result[i][j] = matrix[i][j] * scalar;
    }
  }

  return result;
}

// Функция для вычисления произведения двух матриц
int** multiplyMatrices(int** matrix1, int** matrix2, int rows1, int cols1, int cols2) {
  int** product = (int**)malloc(rows1 * sizeof(int*));

  for (int i = 0; i < rows1; i++) {
    product[i] = (int*)malloc(cols2 * sizeof(int));
    for (int j = 0; j < cols2; j++) {
      product[i][j] = 0;
      for (int k = 0; k < cols1; k++) {
        product[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  return product;
}

// Функция для транспонирования матрицы
int** transposeMatrix(int** matrix, int rows, int cols) {
  int** transpose = (int**)malloc(cols * sizeof(int*));

  for (int i = 0; i < cols; i++) {
    transpose[i] = (int*)malloc(rows * sizeof(int));
    for (int j = 0; j < rows; j++) {
      transpose[i][j] = matrix[j][i];
    }
  }

  return transpose;
}

// Функция для определения равенства матриц
int areMatricesEqual(int** matrix1, int** matrix2, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix1[i][j] != matrix2[i][j]) {
        return 0; // Матрицы не равны
      }
    }
  }

  return 1; // Матрицы равны
}

// Основная функция
int main() {
  int matrix1[2][2] = {{1, 2},
                       {3, 4}};
  int matrix2[2][2] = {{5, 6},
                       {7, 8}};

  int rows = sizeof(matrix1) / sizeof(matrix1[0]); // Определение количества строк матрицы
  int cols = sizeof(matrix1[0]) / sizeof(matrix1[0][0]); // Определение количества столбцов матрицы

  // Сложение матриц
  int** sum = addMatrices(matrix1, matrix2, rows, cols);

  printf("Матрица сложения:");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("");
  }

  // Вычитание матриц
  int** diff = subtractMatrices(matrix1, matrix2, rows, cols);

  printf("Матрица разности:");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", diff[i][j]);
    }
    printf("");
  }

  // Умножение матрицы на число
  int scalar = 2;
  int** product = multiplyMatrixByScalar(matrix1, rows, cols, scalar);

  printf("Матрица, умноженная на число %d:", scalar);
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", product[i][j]);
    }
    printf("");
  }

  // Произведениедвух матриц
  int matrix3[2][3] = {{1, 2, 3},
                       {4, 5, 6}};
  int rows3 = sizeof(matrix3) / sizeof(matrix3[0]);
  int cols3 = sizeof(matrix3[0]) / sizeof(matrix3[0][0]);

  int** product2 = multiplyMatrices(matrix1, matrix3, rows, cols, cols3);

  printf("Матрица произведения:");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols3; j++) {
      printf("%d ", product2[i][j]);
    }
    printf("");
  }

  // Транспонирование матрицы
  int** transpose = transposeMatrix(matrix1, rows, cols);

  printf("Транспонированная матрица:");
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      printf("%d ", transpose[i][j]);
    }
    printf("");
  }

  // Определение равенства матриц
  int equal = areMatricesEqual(matrix1, matrix2, rows, cols);
  if (equal) {
    printf("Матрицы равны.");
  } else {
    printf("Матрицы не равны.");
  }

  // Освобождение памяти
  for (int i = 0; i < rows; i++) {
    free(sum[i]);
    free(diff[i]);
    free(product[i]);
  }
  free(sum);
  free(diff);
  free(product);
  for (int i = 0; i < cols; i++) {
    free(transpose[i]);
  }
  free(transpose);

  return 0;
}