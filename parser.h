#ifndef PARSER_H
#define PARSER_H

// There are three strict command formats.
// 1. <verb>
//   - This is the most simple. It consists of only a verb. Example: "look"
// 2. <verb> <noun>
//   - This applies a verb to noun. Example: "take axe". prepositions like "the"
//     or "a" should not be used.
// 3. <verb> <noun a> <noun b>
//   - This one is when you want to do something with one noun to another.
//     Example: "hit dwarf axe" would mean you want to hit the dwarf with your
//     axe. "put lamp table" would mean you want to put the lamp on the table
//
// While this may seem as very robotic and unforgiving, I see it as more
// forgiving than parsers that try to use more natural language. A parser in a
// text adventure is essentially your game's controls, and controls should not
// be ambiguous. Controls should be simple, and it should be made clear 
// exacty how to use them

typedef struct CommandStruct Command;

struct CommandStruct {
    int word_count;
    char verb[32];
    char noun[32];
    char noun_b[32];
};

Command get_command();

#endif
