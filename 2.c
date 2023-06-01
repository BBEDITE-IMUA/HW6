#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Возвращает строку, являющуюся объединением строк из массива, разделенных пробелом
char* join(char* words[], int n) {
    // Выделяем память под результат, максимальная длина 255 символов
    char* result = malloc(255 * sizeof(char)); 
    result[0] = '\0'; 

    for (int i = 0; i < n; i++) {
        // Проверяем, что суммарная длина результата и следующей строки не превышает 255 символов
        if (strlen(result) + strlen(words[i]) + 1 <= 255) {
            // Добавляем следующую строку в результат
            strcat(result, words[i]); 
            // Добавляем пробел после каждой строки 
            strcat(result, " ");
        } else {
            // Если достигли максимальной длины, выходим из цикла
            break;
        }
    }

    // Если последний символ результата является пробелом, удаляем его
    if (result[strlen(result) - 1] == ' ') {
        result[strlen(result) - 1] = '\0';
    }

    return result;
}


int main() {
    char* words[] = {"a", "b", "c", "d"};
    int n = sizeof(words) / sizeof(words[0]);

    char* result = join(words, n);
    printf("%s\n", result);
    // Освобождение памяти, выделенной для результата
    free(result);

    return 0;
}