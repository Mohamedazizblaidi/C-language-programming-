#include <stdio.h>

int main() {
    int notes[5] = {12, 15, 8, 17, 10};
    for(int i = 0; i < 5; i++) {
        printf("Note %d = %d\n", i, notes[i]);
    }
    return 0;
}
