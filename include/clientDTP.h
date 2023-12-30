#ifndef __CLIENTDTP_H__
#define __CLIENTDTP_H__

#include "net.h"



/**
 * FTP client DTP structure
*/
enum data_type{
    ASCII,
    EBCDIC,
    IMAGE,

};
enum file_structure{
    FILE_STRU,
    PAGE,
    RECORD

};
enum transfer_mode{
    STREAM_MODE,
    BLOCK_MODE,
    COMPRESSED_MODE
};
enum work_mode{
    PASSIVE,
};


struct clientDTP{

    
    


    struct connected ndata_fd;
    struct connected ldata_fd;

    enum work_mode work_mode;
    enum data_type data_type;
    enum file_structure file_structure;
    enum transfer_mode transaction_mode;

    struct clientDTP *next;
};




#ifndef CLIENTDTP
extern struct clientDTP clientDTP;
#endif

#endif