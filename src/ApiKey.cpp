#include "ApiKey.h"
#include <winsock2.h>
#include <ws2tcpip.h>

ApiKey::ApiKey()
{
  auto wsadata = WSADATA();
  int startupResult = WSAStartup(MAKEWORD(2, 2), &wsadata);
}

ApiKey::~ApiKey()
{
  auto cleanupResult = WSACleanup();
}
