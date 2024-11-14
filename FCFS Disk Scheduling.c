#include <stdio.h>
#include <stdlib.h>

void fcfs_disk_scheduling(int requests[], int n, int head_start) {
    int total_seek_time = 0;
    int current_head = head_start;

    printf("Input Table:\n");
    printf("Request Order | Request Position\n");
    for (int i = 0; i < n; i++) {
        printf("      %d       |       %d\n", i + 1, requests[i]);
    }

    printf("\nOutput Table:\n");
    printf("Step | From | To | Seek Time\n");

    for (int i = 0; i < n; i++) {
        int seek_time = abs(requests[i] - current_head);
        total_seek_time += seek_time;

        printf(" %2d   |  %3d  | %3d |    %d\n", i + 1, current_head, requests[i], seek_time);

        // Move head to the current request
        current_head = requests[i];
    }

    printf("\nTotal Seek Time: %d\n", total_seek_time);
}

int main() {
    int n, head_start;

    printf("Enter the number of disk requests: ");
    scanf("%d", &n);

    int requests[n];
    printf("Enter the disk requests:\n");
    for (int i = 0; i < n; i++) {
        printf("Request %d: ", i + 1);
        scanf("%d", &requests[i]);
    }

    printf("Enter the initial head position: ");
    scanf("%d", &head_start);

    fcfs_disk_scheduling(requests, n, head_start);

    return 0;
}

/*
Enter the number of disk requests: 4
Enter the disk requests:
Request 1: 98
Request 2: 183
Request 3: 37
Request 4: 122
Enter the initial head position: 53
*/
