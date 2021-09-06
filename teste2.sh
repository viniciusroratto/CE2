#!/bin/bash

SUCCESS=0

for file in teste_right/*
do
    
    cat "$file" | make run
    result=$?
    if [ $result -ne $SUCCESS ]
    then
        echo "TEST FILE $file"
    fi
  
done
