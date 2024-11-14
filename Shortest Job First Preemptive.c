#include <stdio.h>

struct Process {
    int p_id;
    int bt;
    int at; // Arrival time
    int wt;
    int tat;
    int completed;
};

int findShortestJob(struct Process processes[], int n, int currentTime) {
    int shortestJobIndex = -1;
    int shortestBurst = 9999;

    for (int i = 0; i < n; ++i) {
        if (!processes[i].completed && processes[i].bt < shortestBurst && processes[i].at <= currentTime && processes[i].bt > 0) {
            shortestBurst = processes[i].bt;
            shortestJobIndex = i;
        }
    }

    return shortestJobIndex;
}

void calculateTimes(struct Process processes[], int n) {
    int currentTime = 0;
    int totalBurst = 0;

    // Calculate total burst time
    for (int i = 0; i < n; ++i) {
        totalBurst += processes[i].bt;
    }

    printf("Gantt Chart:\n");
    printf("|");

    while (currentTime < totalBurst) {
        int shortestJobIndex = findShortestJob(processes, n, currentTime);
        if (shortestJobIndex == -1) {
            currentTime++;
            continue;
        }

        printf(" P%d(%d) |", processes[shortestJobIndex].p_id, processes[shortestJobIndex].bt);

        processes[shortestJobIndex].bt--;

        for (int i = 0; i < n; ++i) {
            if (i != shortestJobIndex && !processes[i].completed && processes[i].at <= currentTime) {
                processes[i].wt++;
            }
        }

        currentTime++;

        if (processes[shortestJobIndex].bt == 0) {
            processes[shortestJobIndex].completed = 1;
            processes[shortestJobIndex].tat = currentTime;
        }
    }
    printf("\n");
}

void calculateAverages(struct Process processes[], int n, float *avg_waiting_time, float *avg_turnaround_time) {
    int total_waiting_time = 0;
    int total_turnaround_time = 0;

    for (int i = 0; i < n; ++i) {
        total_waiting_time += processes[i].wt;
        total_turnaround_time += processes[i].tat;
    }

    *avg_waiting_time = (float)total_waiting_time / n;
    *avg_turnaround_time = (float)total_turnaround_time / n;
}

void displayProcesses(struct Process processes[], int n) {
    printf("Process ID\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; ++i) {
        printf("%d\t\t%d\t\t%d\n", processes[i].p_id, processes[i].wt, processes[i].tat);
    }
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    for (int i = 0; i < n; ++i) {
        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &processes[i].bt);
        printf("Enter arrival time for process %d: ", i + 1);
        scanf("%d", &processes[i].at);
        processes[i].p_id = i + 1;
        processes[i].wt = 0;
        processes[i].tat = 0;
        processes[i].completed = 0;
    }

    calculateTimes(processes, n);

    float avg_waiting_time, avg_turnaround_time;
    calculateAverages(processes, n, &avg_waiting_time, &avg_turnaround_time);

    displayProcesses(processes, n);

    printf("Average Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    return 0;
}
