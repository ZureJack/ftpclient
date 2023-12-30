#ifndef __CLIENTPI_H__
#define __CLIENTPI_H__

#include "net.h"
#include "clientDTP.h"

/**
 * Network Commands
*/
#define USER "USER"


/**
 * Client PI
*/
#define CODE_SIZE (3 + 1)
#define MAX_ARGC 10



struct ncommand {
    char *ncmd;
    char *args[MAX_ARGC];
};
struct clientPI {

    int (*send_command)(int to_server, struct ncommand *);
    int (*rev_reply)(int from_server, struct ncommand *);

    struct connected control_fd;
    struct ncommand ncommand;
    struct clientDTP *dtpp;
    
};

#ifndef CLIENTPI
extern struct clientPI clientPI;
#endif

#endif