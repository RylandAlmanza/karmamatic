#ifndef ROOM_H
#define ROOM_H

typedef struct RoomStruct Room;

struct RoomStruct {
    char name[32];
    char description[1024];
    int neighbor_count;
    Room *neighbors[10];
};

#endif
