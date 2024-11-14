#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to simulate checking the opcode
int check_opcode(char *opcode) {
    // Valid opcodes (for simplicity, we assume a small set)
    char *valid_opcodes[] = {"LOAD", "ADD", "SUB", "MUL", "DIV", "HALT"};
    int num_valid_opcodes = 6;

    for (int i = 0; i < num_valid_opcodes; i++) {
        if (strcmp(opcode, valid_opcodes[i]) == 0) {
            return 1; // Valid opcode
        }
    }
    return 0; // Invalid opcode
}

// Function to simulate the interrupt on error
void raise_interrupt(const char *message) {
    printf("Interrupt raised: %s\n", message);
    exit(1); // Exit the program on error
}

// Function to execute a job and check for opcode errors
void execute_job(char *job[], int job_size) {
    for (int i = 0; i < job_size; i++) {
        printf("Executing opcode: %s\n", job[i]);

        // Check if the opcode is valid
        if (!check_opcode(job[i])) {
            // Raise interrupt if the opcode is invalid
            raise_interrupt("Invalid opcode encountered");
        }
    }

    printf("Job executed successfully.\n");
}

int main() {
    // Example job sequence (array of opcodes)
    char *job[] = {"LOAD", "ADD", "MUL", "INVALID_OPCODE", "DIV", "HALT"};
    int job_size = sizeof(job) / sizeof(job[0]);

    // Execute the job
    execute_job(job, job_size);

    return 0;
}
