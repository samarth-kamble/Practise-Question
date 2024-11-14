#include <stdio.h>
#include <stdlib.h>

int main() {
    int np, nr; // Number of processes and resources
    int i, j;

    printf("Enter the number of processes: ");
    scanf("%d", &np);

    printf("Enter the number of resources: ");
    scanf("%d", &nr);

    // Dynamically allocate memory for matrices and arrays
    int **alloc = (int **)malloc(np * sizeof(int *));
    int **request = (int **)malloc(np * sizeof(int *));
    int *avail = (int *)malloc(nr * sizeof(int));
    int *r = (int *)malloc(nr * sizeof(int));
    int *finished = (int *)malloc(np * sizeof(int));

    // Initialize each process's finished status to false (0)
    for (i = 0; i < np; i++) {
        finished[i] = 0;
    }

    // Input the total resources for each resource type
    for (i = 0; i < nr; i++) {
        printf("Total amount of resource R%d: ", i + 1);
        scanf("%d", &r[i]);
    }

    // Input the request matrix
    printf("\nEnter the request matrix:\n");
    for (i = 0; i < np; i++) {
        request[i] = (int *)malloc(nr * sizeof(int));
        for (j = 0; j < nr; j++) {
            scanf("%d", &request[i][j]);
        }
    }

    // Input the allocation matrix
    printf("\nEnter the allocation matrix:\n");
    for (i = 0; i < np; i++) {
        alloc[i] = (int *)malloc(nr * sizeof(int));
        for (j = 0; j < nr; j++) {
            scanf("%d", &alloc[i][j]);
        }
    }

    // Calculate initial available resources
    for (j = 0; j < nr; j++) {
        avail[j] = r[j];
        for (i = 0; i < np; i++) {
            avail[j] -= alloc[i][j];
        }
    }

    // Deadlock detection algorithm
    int deadlock = 0;
    while (1) {
        int processFound = 0;

        for (i = 0; i < np; i++) {
            if (finished[i] == 0) { // Process i is not yet completed
                int canExecute = 1;
                for (j = 0; j < nr; j++) {
                    if (request[i][j] > avail[j]) {
                        canExecute = 0; // Cannot execute process i
                        break;
                    }
                }

                if (canExecute) {
                    // Mark process i as finished and release its resources
                    finished[i] = 1;
                    processFound = 1;
                    for (j = 0; j < nr; j++) {
                        avail[j] += alloc[i][j];
                    }
                    break;
                }
            }
        }

        if (!processFound) { // No process could execute in this round
            deadlock = 1;
            for (i = 0; i < np; i++) {
                if (finished[i] == 0) {
                    deadlock = 1;
                    printf("Deadlock detected involving process P%d\n", i);
                }
            }
            break;
        }

        int allFinished = 1;
        for (i = 0; i < np; i++) {
            if (finished[i] == 0) {
                allFinished = 0;
                break;
            }
        }

        if (allFinished) {
            deadlock = 0;
            break;
        }
    }

    if (!deadlock) {
        printf("\nNo deadlock detected. All processes can complete.\n");
    }

    // Free allocated memory
    for (i = 0; i < np; i++) {
        free(alloc[i]);
        free(request[i]);
    }
    free(alloc);
    free(request);
    free(avail);
    free(r);
    free(finished);

    return 0;
}

/*

Enter the number of processes: 3
Enter the number of resources: 2
Total amount of resource R1: 10
Total amount of resource R2: 5

Enter the request matrix:
7 4
1 2
3 3

Enter the allocation matrix:
3 2
1 0
2 1


*/