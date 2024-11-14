#include <stdio.h>
#include <stdbool.h>

// Function to check if a page is present in the frame
bool isPagePresent(int page, int frame[], int frameSize) {
    for (int i = 0; i < frameSize; i++) {
        if (frame[i] == page)
            return true;
    }
    return false;
}

// Function to find the index of the page that will be replaced
int findReplacementIndex(int page, int frame[], int frameSize, int referenceString[], int referenceSize, int currentIndex) {
    int index = -1, farthest = currentIndex;
    for (int i = 0; i < frameSize; i++) {
        int j;
        for (j = currentIndex; j < referenceSize; j++) {
            if (frame[i] == referenceString[j]) {
                if (j > farthest) {
                    farthest = j;
                    index = i;
                }
                break;
            }
        }
        if (j == referenceSize)
            return i; // if a page is not found in future, it will be replaced first
    }
    return (index == -1) ? 0 : index;
}

// First In First Out (FIFO) Page Replacement Algorithm
int fifo(int referenceString[], int referenceSize, int frameSize) {
    int frame[frameSize];
    int pageFaults = 0;
    int currentIndex = 0;

    for (int i = 0; i < frameSize; i++)
        frame[i] = -1; // Initialize frame slots with -1

    for (int i = 0; i < referenceSize; i++) {
        if (!isPagePresent(referenceString[i], frame, frameSize)) {
            frame[currentIndex] = referenceString[i];
            currentIndex = (currentIndex + 1) % frameSize;
            pageFaults++;
        }
    }
    return pageFaults;
}

// Optimal Page Replacement Algorithm
int optimal(int referenceString[], int referenceSize, int frameSize) {
    int frame[frameSize];
    int pageFaults = 0;

    for (int i = 0; i < frameSize; i++)
        frame[i] = -1; // Initialize frame slots with -1

    for (int i = 0; i < referenceSize; i++) {
        if (!isPagePresent(referenceString[i], frame, frameSize)) {
            int index = findReplacementIndex(referenceString[i], frame, frameSize, referenceString, referenceSize, i + 1);
            frame[index] = referenceString[i];
            pageFaults++;
        }
    }
    return pageFaults;
}

int main() {
    int referenceString[] = {7, 1, 0, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2, 0, 1, 7, 0, 1};
    int referenceSize = sizeof(referenceString) / sizeof(referenceString[0]);
    int frameSize = 3;

    printf("Total number of page faults using FIFO: %d\n", fifo(referenceString, referenceSize, frameSize));
    printf("Total number of page faults using Optimal: %d\n", optimal(referenceString, referenceSize, frameSize));

    return 0;
}

