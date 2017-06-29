#ifndef AMT_INCLUDE_UTILS_H_
#define AMT_INCLUDE_UTILS_H_

#include <stdint.h>
#include <sys/types.h>
#include <sys/param.h>
#include <sys/socket.h>

uint16_t iov_csum(struct iovec* iov, unsigned int iov_len);
uint16_t csum(uint8_t* buf, unsigned int len);

int build_membership_query(int family, struct sockaddr* source,
        uint8_t* cp, unsigned int len);

#define INET_MAX_ADDR_STRLEN 16
#define INET6_MAX_ADDR_STRLEN 40
#define MAX_ADDR_STRLEN INET6_MAX_ADDR_STRLEN
#define MAX_SOCK_STRLEN (MAX_ADDR_STRLEN+8)

// sa shold be sockaddr_in or sockaddr_in6, with family AF_INET or AF_INET6
const char* sock_ntop(int family, void* sa, char* str, int len);

#endif  // AMT_INCLUDE_UTILS_H_

