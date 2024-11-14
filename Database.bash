#!/bin/bash

# File to store the student database
DB_FILE="student_database.txt"

# Function to insert a new student record
insert_student() {
    echo "Enter Student ID:"
    read student_id
    echo "Enter Name:"
    read name
    echo "Enter Age:"
    read age
    echo "Enter Grade:"
    read grade

    # Append the new student record to the file
    echo "$student_id|$name|$age|$grade" >> $DB_FILE
    echo "Student record inserted successfully."
}

# Function to delete a student record by Student ID
delete_student() {
    echo "Enter Student ID to delete:"
    read student_id

    # Delete the line containing the Student ID
    grep -v "^$student_id|" $DB_FILE > temp_file && mv temp_file $DB_FILE
    echo "Student record with ID $student_id deleted successfully."
}

# Function to update a student record by Student ID
update_student() {
    echo "Enter Student ID to update:"
    read student_id

    # Check if the student exists
    if grep -q "^$student_id|" $DB_FILE; then
        echo "Enter New Name:"
        read name
        echo "Enter New Age:"
        read age
        echo "Enter New Grade:"
        read grade

        # Delete the old record
        grep -v "^$student_id|" $DB_FILE > temp_file && mv temp_file $DB_FILE

        # Insert the updated record
        echo "$student_id|$name|$age|$grade" >> $DB_FILE
        echo "Student record with ID $student_id updated successfully."
    else
        echo "Student ID $student_id not found."
    fi
}

# Function to search for a student by Student ID
search_student() {
    echo "Enter Student ID to search:"
    read student_id

    # Search for the record
    record=$(grep "^$student_id|" $DB_FILE)

    if [ -n "$record" ]; then
        echo "Record found:"
        echo "Student_ID | Name | Age | Grade"
        echo "$record" | awk -F '|' '{print $1"         | "$2"   | "$3"  | "$4}'
    else
        echo "Student ID $student_id not found."
    fi
}

# Main menu
while true; do
    echo "Student Database Management"
    echo "1. Insert"
    echo "2. Delete"
    echo "3. Update"
    echo "4. Search"
    echo "5. Exit"
    echo "Enter your choice:"
    read choice

    case $choice in
        1) insert_student ;;
        2) delete_student ;;
        3) update_student ;;
        4) search_student ;;
        5) echo "Exiting..."; exit 0 ;;
        *) echo "Invalid choice. Please try again." ;;
    esac
done
