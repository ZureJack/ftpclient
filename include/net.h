#ifndef __NET_H__
#define __NET_H__

enum connected_status{
    CONNECTION,
    DISCONNECTION
};

struct connected {
    int fd;
    enum connected_status status;
};

#ifndef NET

#endif

#endif