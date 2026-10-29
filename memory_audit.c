#include <stdio.h>

int main() {
    // 1. Визначення та виведення розміру типів даних
    printf("=== Розміри типів даних (у байтах) ===\n");
    printf("char:        %zu B\n", sizeof(char));
    printf("int:         %zu B\n", sizeof(int));
    printf("short:       %zu B\n", sizeof(short));
    printf("long:        %zu B\n", sizeof(long));
    printf("long long:   %zu B\n", sizeof(long long));
    printf("float:       %zu B\n", sizeof(float));
    printf("double:      %zu B\n", sizeof(double));
    printf("void*:       %zu B\n", sizeof(void*));
    printf("-------------------------------------\n\n");

    // 2. Оголошення змінної типу unsigned char
    unsigned char byte_test = 255;

    // 3. Початкове виведення значення
    printf("=== Демонстрація Integer Overflow ===\n");
    printf("Початкове значення byte_test:\n");
    printf("Десятковий формат (%%u):         %u\n", byte_test);
    printf("Шістнадцятковий формат (0x%%02X): 0x%02X\n\n", byte_test);

    // 4. Додавання одиниці
    byte_test = byte_test + 1;

    // 5. Повторне виведення після додавання
    printf("Після виконання byte_test = byte_test + 1:\n");
    printf("Десятковий формат (%%u):         %u\n", byte_test);
    printf("Шістнадцятковий формат (0x%%02X): 0x%02X\n", byte_test);

    return 0;
}