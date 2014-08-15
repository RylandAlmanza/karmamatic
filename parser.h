#ifndef PARSER_H
#define PARSER_H

typedef struct CommandStruct Command;

struct CommandStruct {
    int word_count;
    char verb[32];
    char noun[32];
    char preposition[32];
    char noun_b[32];
};

Command get_command();

#endif
