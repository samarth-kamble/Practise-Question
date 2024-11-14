#!/bin/bash

# Function to calculate factorial
factorial() {
 if [ $1 -eq 0 -o $1 -eq 1 ]; then
 echo 1
 else
 echo $(( $1 * $(factorial $(( $1 - 1 ))) ))
 fi
}

# Function to check if a number is even or odd
evenodd() {
 if [ $(( $1 % 2 )) -eq 0 ]; then
 echo "Even"
 else
 echo "Odd"
 fi
}

# Function to check if a number is prime
isprime() {
 for (( i=2; i<=$1/2; i++ )); do
 if [ $(( $1 % $i )) -eq 0 ]; then
 echo "Not Prime"
 return
 fi
 done
 echo "Prime"
}

# Function to print Fibonacci series
fibonacci() {
 a=0
 b=1
 echo -n "$a $b "
 for (( i=2; i<$1; i++ )); do
 c=$((a + b))
 echo -n "$c "
 a=$b
 b=$c
 done
 echo
}

# Function to print multiplication table
table() {
 for (( i=1; i<=10; i++ )); do
 echo "$1 x $i = $(( $1 * $i ))"
 done
}
#Function to check if a number is palindrome
is_palindrome() {
    num=$1
    reverse=0
    while [ $num -gt 0 ]; do
        remainder=$((num%10))
        reverse=$((reverse * 10 + remainder))
        num=$((num / 10))
    done
    if [ $1 -eq $reverse ]; then
        echo "Palindrome"
    else
        echo "Not Palindrome"
    fi
}

# Main script
read -p "Enter a number: " num
echo "Factorial: $(factorial $num)"
echo "Even/Odd: $(evenodd $num)"
echo "Prime or Not Prime: $(isprime $num)"
echo "Fibonacci Series up to $num terms: $(fibonacci $num)"
echo "Multiplication Table of $num:"
table $num
echo "Palindrome Check: $(is_palindrome $num)"
