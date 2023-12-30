

#define CLIENTPI
#include "clientPI.h"
#include "clientDTP.h"

int send_command(int to_server, struct ncommand *data)
{

}
int rev_reply(int from_server, struct ncommand *data)
{
    
}



struct clientPI clientPI = {
    .send_command = &send_command,
    .rev_reply = &rev_reply,
    .dtpp = &clientDTP
};