# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
#define THREAD_COUNT 4
#define ARRAY_SIZE 400
int arr[ARRAY_SIZE];
struct ThreadParameters
{
    int* array;
    int start;
    int end;
    int smallest;
    int largest;
};
void* find_min_max(void* args)
{
    struct ThreadParameters* params = (struct ThreadParameters*)args;
    int *array = params->array;
    int start = params->start;
    int end = params->end;
    int smallest = array[start];
    int largest = array[start];


    for (int i = start; i < end; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }

        if (array[i] > largest)
        {
            largest = array[i];
        }
    }

    params->smallest = smallest;
    params->largest = largest;

    return NULL;
}
void fillArray()
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {


        arr[i] = rand() % 1000 + 1;
    }
}
int main()
{
    int smallest;
    int largest;

    pthread_t threads[THREAD_COUNT] = {0};
    struct ThreadParameters thread_parameters[THREAD_COUNT]  = {0};

    fillArray();

    smallest = arr[0];
    largest = arr[0];

    for (int i = 0; i < THREAD_COUNT; i++)
    {
        thread_parameters[i].array = arr;
        thread_parameters[i].start = i * (ARRAY_SIZE / THREAD_COUNT);
        thread_parameters[i].end = (i+1) * (ARRAY_SIZE / THREAD_COUNT);
        thread_parameters[i].largest = 0;
        pthread_create(&threads[i], NULL, find_min_max, &thread_parameters[i]);
    }

    for (int i = 0; i < THREAD_COUNT; i++)
    {
        pthread_join(threads[i], NULL);
    }

    for (int i = 0; i < THREAD_COUNT; i++)
    {
        if (thread_parameters[i].smallest < smallest)
        {
            smallest = thread_parameters[i].smallest;
        }

        if (thread_parameters[i].largest > largest)
        {
            largest = thread_parameters[i].largest;
        }
    }

    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

}
