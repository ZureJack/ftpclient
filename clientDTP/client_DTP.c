

#include <stdio.h>
#define CLIENTDTP
#include "clientDTP.h"


struct clientDTP clientDTP = {
    .data_type = ASCII,
    .file_structure = FILE_STRU,
    .transaction_mode = STREAM_MODE,
    .work_mode = PASSIVE,
    .next = NULL,
};