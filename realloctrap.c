#include<stdio.h>
#include<stdlib.h>
int *grow(int *arr, int oldSize, int newSize) {
    int *temp = realloc(arr, newSize * sizeof(int));
    if(temp ==NULL)
        return  NULL;
    arr = temp;
    for (int i = oldSize; i < newSize; i++) {
        arr[i] = 0;
    }
    return arr;
}

int main() {
    int *data = malloc(3 * sizeof(int));
    data[0] = 1;
    data[1] = 2;
    data[2] = 3;

    data = grow(data, 3, 6);

    if(data == NULL)
        return 1;

    for(int i=0;i<6;i++){

        printf("%d\n", *(data +i));
    }

    free(data);
}
