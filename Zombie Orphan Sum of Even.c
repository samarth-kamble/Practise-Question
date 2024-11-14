#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void sum_even_in_parent(int arr[], int size) {
    int even_sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_sum += arr[i];
        }
    }
    printf("Parent Process: Sum of even numbers = %d\n", even_sum);
}

void sum_odd_in_child(int arr[], int size) {
    int odd_sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            odd_sum += arr[i];
        }
    }
    printf("Child Process: Sum of odd numbers = %d\n", odd_sum);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    pid_t pid;

    // Forking to create a child process
    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Child process - will become orphan if parent exits early
        printf("Child Process: My PID is %d and my Parent PID is %d\n", getpid(), getppid());

        // Calculate sum of odd numbers
        sum_odd_in_child(arr, size);

        // Creating a delay to demonstrate orphan process
        sleep(5); // This delay keeps the child process alive after parent exits
        printf("Child Process: My new Parent PID is %d (after becoming orphan)\n", getppid());
        exit(0);
    } else {
        // Parent process - will become a zombie process if child runs after parent exits
        printf("Parent Process: My PID is %d and my Child PID is %d\n", getpid(), pid);

        // Calculate sum of even numbers
        sum_even_in_parent(arr, size);

        // Delay to ensure child executes after parent finishes for zombie process
        sleep(2); // Letting child run longer after parent exits

        printf("Parent Process: Exiting, creating a zombie child process temporarily\n");
        exit(0);
    }

    return 0;
}
/*

Parent Process: My PID is 12345 and my Child PID is 12346
Parent Process: Sum of even numbers = 30
Parent Process: Exiting, creating a zombie child process temporarily
Child Process: My PID is 12346 and my Parent PID is 12345
Child Process: Sum of odd numbers = 25
Child Process: My new Parent PID is 1 (after becoming orphan)

*/