#include <stdio.h>
int main() {
    int num;
    
    for (num = 1; num <= 10; num++) {
        if (num == 5) {
            continue;
        }
        
        printf("%d ", num);
    }
    
    return 0;
}
