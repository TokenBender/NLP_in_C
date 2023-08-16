//write a simple percepton in C

#include <stdio.h>
#include <stdbool.h>

bool activation(double sum, double threshold)
{
    return sum > threshold;
}

double summation(double *weights, double *inputs, int num_inputs)
{
    double sum = 0;
    for (int i = 0; i < num_inputs; i++)
    {
        sum += weights[i] * inputs[i];
    }

    return sum;
}

int main()
{
    int num_inputs = 3;
    double threshold = 0.2;
    double weights[3] = {-1, 0.5, 1};
    double inputs[3] = {1, 2, -1};
    double sum = 0;

    sum = summation(weights, inputs, num_inputs);
    printf("Activated: %d", activation(sum, threshold));
}
