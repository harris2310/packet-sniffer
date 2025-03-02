#include <iostream>
#include <winsock2.h>
#include <string>
#include <ws2tcpip.h>
class ApiKey
{
public:
  ApiKey()
  {
    auto wsadata = WSADATA();
    int startupResult = WSAStartup(MAKEWORD(2, 2), &wsadata);
  }

  ~ApiKey()
  {
    auto cleanupResult = WSACleanup();
  }
};

int main()
{
  ApiKey apiKey;
  SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  return 0;
}
