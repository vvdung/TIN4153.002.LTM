#include "main.h"
#include "Socket.h"

#pragma comment(lib,"Ws2_32.lib")

CSocket::CSocket(){
  u_short uPort = htons(0x1234);
  printf("uPort:%d\n",uPort);
}

CSocket::~CSocket(){


}