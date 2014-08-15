#include <stdio.h>
#include "parser.h"

int main() {
    Command command = get_command();
    printf("%d\n", command.word_count);
}
