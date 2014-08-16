#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"

Command get_command() {
    Command command;
    char *command_string = malloc((sizeof 'a') * 256);
    scanf("%255[^\n]", command_string);
    int i = 0;
    int offset = 0;
    int word = 0;
    command.word_count = 1;
    for (i = 0; i < 256; i++) {
        if (command_string[i] == '\0') {
            break;
        }
        if (command_string[i] == ' ') {
            if (word == 0) {
                command.verb[offset] = '\0';
            } else if (word == 1) {
                command.noun[offset] = '\0';
            } else if (word == 2) {
                command.noun_b[offset] = '\0';
            }
            offset = 0;
            word++;
            command.word_count++;
            i++;
        }
        if (word == 0) {
            command.verb[offset] = command_string[i];
        } else if (word == 1) {
            command.noun[offset] = command_string[i];
        } else if (word == 2) {
            command.noun_b[offset] = command_string[i];
        }
        offset++;
    }
    
    free(command_string);
    return command;
}
