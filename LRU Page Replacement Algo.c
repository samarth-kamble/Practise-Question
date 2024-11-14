#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Function to check if a page is present in the frame
bool isPagePresent(int page, int frame[], int frameSize) {
    for (int i = 0; i < frameSize; i++) {
        if (frame[i] == page)
            return true;
    }
    return false;
}

// Function to find the index of the page that will be replaced (LRU)
int findLRUIndex(int usedOrder[], int frameSize) {
    int minUsedIndex = 0;
    for (int i = 1; i < frameSize; i++) {
        if (usedOrder[i] < usedOrder[minUsedIndex])
            minUsedIndex = i;
    }
    return minUsedIndex;
}

// Function to find the index of the page that will be replaced (Optimal)
int findOptimalIndex(int referenceString[], int referenceSize, int frame[], int frameSize, int currentIndex) {
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

// Least Recently Used (LRU) Page Replacement Algorithm
int lru(int referenceString[], int referenceSize, int frameSize) {
    int frame[frameSize];
    int usedOrder[frameSize];
    int pageFaults = 0;
    int currentIndex = 0;

    for (int i = 0; i < frameSize; i++) {
        frame[i] = -1; // Initialize frame slots with -1
        usedOrder[i] = 0; // Initialize used order with 0
    }

    for (int i = 0; i < referenceSize; i++) {
        if (!isPagePresent(referenceString[i], frame, frameSize)) {
            int index = findLRUIndex(usedOrder, frameSize);
            frame[index] = referenceString[i];
            usedOrder[index] = i + 1; // Update the used order
            pageFaults++;
        } else {
            for (int j = 0; j < frameSize; j++) {
                if (frame[j] == referenceString[i]) {
                    usedOrder[j] = i + 1; // Update the used order
                    break;
                }
            }
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
            int index = findOptimalIndex(referenceString, referenceSize, frame, frameSize, i + 1);
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

    printf("Total number of page faults using LRU: %d\n", lru(referenceString, referenceSize, frameSize));
    printf("Total number of page faults using Optimal: %d\n", optimal(referenceString, referenceSize, frameSize));

    return 0;
}
