#include <iostream>
#include <ctime>

const int SIZE{ 10 };

//function which fill array random number
static int fillArray(int arr[SIZE]) {

	srand(std::time(NULL));

	for (int i = 0; i < 10; i++) {
	arr[i] = std::rand();
//	std::cout << arr[i] << std::endl;
}
	return arr[SIZE];
}

//function which sort array value
static void sortArray(int arr[SIZE]) {
    bool swapped;
    for (int i = 0; i < SIZE - 1; i++) {
        swapped = false;
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]); //swap value
                swapped = true;
            }
        }
        if (!swapped) {
            break; //if swap is false array was sort
        }
    }
}

//print array
static void printArray(const int arr[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << '\n';
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[]) {

	int arr[SIZE]{};

	srand(std::time(NULL));

	fillArray(arr);
    sortArray(arr);
	printArray(arr);

	return 0;
}