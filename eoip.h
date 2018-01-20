#ifndef EOIP_EOIP_H_
#define EOIP_EOIP_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/prctl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <linux/if.h>
#include <errno.h>
#include <netinet/ip.h>

#include "eoip-proto.h"
#include "sock.h"
#include "tap.h"

#define BUFFER_SIZE 65535
#define EIPHEAD(tid) 0x3000 | tid
#define BITSWAP(c) ((c & 0xf0) >> 4) | ((c & 0x0f) << 4)

#endif // EOIP_EOIP_H_
