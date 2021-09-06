#!/bin/bash

SUCCESS=0

for file in teste_right/*
do
    echo "TEST FILE $file"
    cat "$file" | make run --silent
    result=$?
    if [ $result -eq $SUCCESS ]
    then
        echo "SUCCESS!"
    else
        echo "TEST FAILED!"
    fi
  
done

echo "STARTING WRONG TESTS"

for file in teste_wrong/*
do
    echo "TEST FILE $file"
    cat "$file" | make run --silent
    result=$?
    if [ $result -eq $SUCCESS ]
    then
        echo "SUCCESS!"
    else
        echo "TEST FAILED!"
    fi
  
done

