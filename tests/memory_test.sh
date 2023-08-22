#!/bin/env bash

# Betty test
# compile
echo "compile ..."
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 ./*.c ./builtins/*.c -o ./bin/hsh

gcc_ret=$?
if [[ gcc_ret -eq 0 ]]; then
    echo "running Valgrind..."
    valgrind ./bin/hsh
fi
