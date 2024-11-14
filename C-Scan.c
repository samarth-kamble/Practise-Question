#include <stdio.h>
#include <stdlib.h>

void cscan_disk_scheduling(int requests[], int n, int head_start, int disk_size) {
    int total_seek_time = 0;
    int current_head = head_start;
    int seek_sequence[n + 2]; // Including end of disk
    int sequence_index = 0;

    // Sort the request array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (requests[j] > requests[j + 1]) {
                int temp = requests[j];
                requests[j] = requests[j + 1];
                requests[j + 1] = temp;
            }
        }
    }

    // Separate requests to the left and right of the current head position
    int left[n], right[n];
    int left_count = 0, right_count = 0;

    for (int i = 0; i < n; i++) {
        if (requests[i] < current_head) {
            left[left_count++] = requests[i];
        } else {
            right[right_count++] = requests[i];
        }
    }

    // C-SCAN: Move right to the end of the disk, then jump to the start
    for (int i = 0; i < right_count; i++) {
        seek_sequence[sequence_index++] = right[i];
    }
    seek_sequence[sequence_index++] = disk_size - 1; // Go to the end of disk
    seek_sequence[sequence_index++] = 0; // Jump to the start of the disk
    for (int i = 0; i < left_count; i++) {
        seek_sequence[sequence_index++] = left[i];
    }

    // Display Input Table
    printf("Input Table:\n");
    printf("Request Order | Request Position\n");
    for (int i = 0; i < n; i++) {
        printf("      %d       |       %d\n", i + 1, requests[i]);
    }

    // Calculate total seek time and print Output Table
    printf("\nOutput Table:\n");
    printf("Step | From | To | Seek Time\n");

    int prev_head = current_head;
    for (int i = 0; i < sequence_index; i++) {
        int seek_step = abs(seek_sequence[i] - prev_head);
        total_seek_time += seek_step;
        printf(" %2d   |  %3d  | %3d |    %d\n", i + 1, prev_head, seek_sequence[i], seek_step);
        prev_head = seek_sequence[i];
    }

    printf("\nTotal Seek Time: %d\n", total_seek_time);
}

int main() {
    int n, head_start, disk_size;

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

    printf("Enter the disk size: ");
    scanf("%d", &disk_size);

    cscan_disk_scheduling(requests, n, head_start, disk_size);

    return 0;
}
/*

Enter the number of disk requests: 8
Enter the disk requests:
Request 1: 98
Request 2: 183
Request 3: 37
Request 4: 122
Request 5: 14
Request 6: 124
Request 7: 65
Request 8: 67
Enter the initial head position: 53
Enter the disk size: 200

Input Table:
Request Order | Request Position
      1       |       98
      2       |      183
      3       |       37
      4       |      122
      5       |       14
      6       |      124
      7       |       65
      8       |       67

Output Table:
Step | From |  To  | Seek Time
  1   |   53  |  65  |     12
  2   |   65  |  67  |      2
  3   |   67  |  98  |     31
  4   |   98  | 122  |     24
  5   |  122  | 124  |      2
  6   |  124  | 183  |     59
  7   |  183  | 199  |     16
  8   |  199  |   0  |    199
  9   |    0  |  14  |     14
 10   |   14  |  37  |     23

Total Seek Time: 382


*/