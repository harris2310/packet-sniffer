#include "ApiKey.h"
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include <vector>
#include <string>

ApiKey::ApiKey()
{
  auto wsadata = WSADATA();
  int startupResult = WSAStartup(MAKEWORD(2, 2), &wsadata);
  std::cout << "WSAStartup result: " << startupResult << std::endl;

  int result = WSAStartup(MAKEWORD(2, 2), &wsadata);
  if (result != 0)
  {
    std::cerr << "WSAStartup failed with error: " << result << std::endl;
  }
  SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  std::cout << s << std::endl;
  int iResult;
  std::string sendbuf = "this is a test";
  char recvbuf[DEFAULT_BUFLEN];
  int recvbuflen = DEFAULT_BUFLEN;
}

ApiKey::~ApiKey()
{
  auto cleanupResult = WSACleanup();
}

int ApiKey::connect()
{
  int iResult;
  struct sockaddr_in server;
  std::cout << "Connecting..." << std::endl;

  do
  {
    iResult = recv(ApiKey::s, recvbuf, recvbuflen, 0);
    if (iResult > 0)
      printf("Bytes received: %d\n", iResult);
    else if (iResult == 0)
      printf("Connection closed\n");
    else
      printf("recv failed: %d\n", WSAGetLastError());

  } while (iResult > 0);
  std::vector<int> a;
  getchar();
  return 0; // Placeholder for successful connection
}