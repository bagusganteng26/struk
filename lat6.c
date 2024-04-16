// C Program to the average to two numbers
#include <stdio.h>

// function to calculate average of the function
float getAverage(float* arr, int size)
{

	int sum = 0;
	// calculating cumulative sum of all the array elements
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	// returning average
	return sum / size;
}

// driver code
int main()
{
    float arr [6];
	for(int i = 0; i < 5; i++){
        scanf("%f", &arr[i]);
    }
        int n = sizeof(arr) / sizeof(float);
	// printing array elements
	printf("Array Elements: ");
	for (int i = 0; i < n; i++) {
		printf("%.2f ", arr[i]);
	}

	// calling getAverage function and printing average
	printf("\nAverage: %.2f", getAverage(arr, n));
	return 0;
}
