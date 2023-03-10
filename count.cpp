#include <iostream>

int count(int array[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
extern int count(int[], int);

int main() {
    int array[6] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}