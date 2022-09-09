#!/bin/bash
gcc $FILEC -Wall -pedantic -Werror -Wextra -std=gnu89 -o .${FILEC}x && ./.${FILEC}x
