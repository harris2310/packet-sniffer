#include <iostream>
#include <winsock2.h>
#define DEFAULT_BUFLEN 512

class ApiKey

{
private:
  SOCKET s;
  char recvbuf[DEFAULT_BUFLEN];
  int recvbuflen;
  std::string sendbuf;

public:
  ApiKey();
  ~ApiKey();
  int connect();
};
