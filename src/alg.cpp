// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int srednee;
    int leftarea = 0;
    int rightarea = size - 1;
    int index = -2;
    while ((leftarea <= rightarea)) {
        srednee = (leftarea + rightarea) / 2;
        if (arr[srednee] == value) {
            index = srednee;
        }
        if (arr[srednee] < value) {
            leftarea = srednee + 1;
        }
        else {
            rightarea = srednee - 1;
        }
    }
    if (index != -2) {
        int point = index;
        int count = 0;
        while (arr[index] == value) {
            count++;
            index-= 1;
        }
        index = point + 1;
        while (arr[index] == value) {
            count++;
            index+= 1;
        }
        return count;
    }
    return 0;
}
