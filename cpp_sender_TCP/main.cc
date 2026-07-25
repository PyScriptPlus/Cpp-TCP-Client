#include <iostream>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
#include <cerrno>

#define PORT 2525

int main() {
	
	int sockfd;
	const char* message = "C++ & C connected with TCP protocol.\n";
	struct sockaddr_in servaddr;

	// Create Socket
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd < 0)
	{
		std::cout << "Creation failed!\n";
		return -1;
	}
	
	// Sets all values inside the structure to 0
	memset(&servaddr,0,sizeof(servaddr));

	// Connection:	
	// AF_INET --> IPV4
	// AF_INET6 --> IPV6
	servaddr.sin_family = AF_INET; // Use ipv4
	servaddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // IP
	servaddr.sin_port = htons(PORT); // Port
	
	// Check connection
	if(connect(sockfd, (const struct sockaddr*)&servaddr,
		sizeof(servaddr)) < 0)
	{
		std::cout << "Connection failed: " << std::strerror(errno) << '\n';
		return -1;
	}
	else
	{
		std::cout << "Connected successfully!\n";
	}

	// Sender
	/*
	sendto(sockfd, message, strlen(message), 0, 
		(const struct sockaddr*)&servaddr, sizeof(servaddr);
	*/
	int sender = send(sockfd, message, strlen(message), 0);
	if(sender < 0)
	{
		std::cout << "Send message failed!\n";
		return -1;
	}
	else
	{
		std::cout << "Message sent!\n";
	}

	close(sockfd);

	return 0;
}
