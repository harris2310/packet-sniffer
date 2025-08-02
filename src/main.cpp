#include <iostream>
#include <winsock2.h>
#include <string>
#include <ws2tcpip.h>
#include <vector>
#include "ApiKey.h"

int main()
{
  ApiKey apiKey;
  WSADATA wsadata;
  int result = WSAStartup(MAKEWORD(2, 2), &wsadata);
  if (result != 0)
  {
    std::cerr << "WSAStartup failed with error: " << result << std::endl;
    return 1;
  }
  SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  std::cout << s << std::endl;
  std::vector<int> a;
  getchar();
  return 0;
}
