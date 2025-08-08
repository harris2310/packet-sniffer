#include <iostream>
#include <winsock2.h>
#define DEFAULT_BUFLEN 512

class ApiKey

{
private:
  SOCKET s;
  char recvbuf[DEFAULT_BUFLEN];
  int recvbuflen = DEFAULT_BUFLEN;
  std::string sendbuf = "this is a test";

public:
  ApiKey();
  ~ApiKey();
  int connect();
};
