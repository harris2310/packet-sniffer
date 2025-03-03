#include "ApiKey.h"

ApiKey::ApiKey()
{
  auto wsadata = WSADATA();
  int startupResult = WSAStartup(MAKEWORD(2, 2), &wsadata);
}

ApiKey::~ApiKey()
{
  auto cleanupResult = WSACleanup();
}
