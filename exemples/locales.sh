#!/bin/bash


print_variable() {
	some_var="Some variable"
    	echo "Inside function 1: $some_var"
}

echo "Before calls: $some_var"

print_local_variable() {
    	local local_var="Another variable"
    	echo "Inside function 2: $local_var"
}

print_variable
print_local_variable

echo "Outside 1: $some_var"
echo "Outside 2: $local_var"

