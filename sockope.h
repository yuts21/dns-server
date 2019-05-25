#ifndef SOCKOPE_H
#define SOCKOPE_H

#include <iostream>
#include <cstring>

#include "message.h"
#include "network.h"

const std::string NAME_SERVER_IP = "114.114.114.114";

#define SOCKET int
#define UDP_PROTO        0
#define PORT             53
#define MAX_MESSAGE      4096

class SocketOperator {
public:
	SocketOperator();
	~SocketOperator();
	int recvMessage(uint8_t *buffer, sockaddr_in &senderAddr);
	void sendMessage(const Message &message);
	void sendBuffer(uint8_t *buffer, int bufferSize, sockaddr_in addr);
	void sendServerPac(const Message &message);
private:
	SOCKET hostSocket;
	
};

#endif // SOCKOPE_H