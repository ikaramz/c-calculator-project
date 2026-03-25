#include "calc.h"

int divide(int a, int b, int *result) {
    if (b == 0) {
        // 0으로 나누기 시도 시, 실패를 뜻하는 -1이나 1을 반환합니다.
        return -1; 
    }
    
    *result = a / b;    // 포인터 변수를 통해 계산 결과를 저장
    
    // 계산이 성공적으로 끝났음을 뜻하는 0을 반환합니다.
    return 0; 
}
