#include "ApiKey.h"
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>

ApiKey::ApiKey()
{
  auto wsadata = WSADATA();
  [[maybe_unused]] int startupResult = WSAStartup(MAKEWORD(2, 2), &wsadata);
  std::cout << "WSAStartup result: " << startupResult << std::endl;
}

ApiKey::~ApiKey()
{
  auto cleanupResult = WSACleanup();
}
