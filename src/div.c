#include <stdbool.h>

// 성공 시 true, 실패(0으로 나눔) 시 false 반환
bool divide(int a, int b, int *result) {
    if (b == 0) {
        return false; // [FAIL] divide(10, 0) returns failure 해결
    }
    *result = a / b;
    return true; // [FAIL] divide(10, 5) returns success 해결
}
