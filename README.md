# Cpp-TCP-Client

A simple TCP client implementation in **C++** using the **POSIX Socket API**.

## Overview

This project demonstrates the fundamentals of **TCP client programming** using POSIX sockets on Linux.

The application creates a TCP socket, connects to a server running on the local machine, and sends a text message over a reliable TCP connection.

This project is designed for educational purposes and serves as a foundation for learning socket programming in C++.

---

## Project Structure

```text
cpp_sender_TCP/
│
└── main.cc
```

---

## Technologies

### C++

* POSIX Sockets
* `socket()`
* `connect()`
* `send()`
* `sockaddr_in`
* `inet_addr()`
* `htons()`
* `close()`

---

## Communication

```text
+----------------------+          TCP           +----------------------+
| C++ TCP Client       | --------------------> | TCP Server           |
| Linux / POSIX        |                       | Any TCP Server       |
+----------------------+                       +----------------------+
```

Default configuration:

| Setting    | Value     |
| ---------- | --------- |
| Protocol   | TCP       |
| IP Address | 127.0.0.1 |
| Port       | 2525      |

---

## How It Works

1. Create a TCP socket.
2. Configure the destination IPv4 address and port.
3. Connect to the TCP server.
4. Send a text message using `send()`.
5. Close the socket.

---

## Example Output

```text
Connected successfully!
Message sent!
```

---

## Learning Goals

This project demonstrates:

* Basic TCP socket programming
* TCP client implementation
* IPv4 networking
* Connection-oriented communication
* POSIX Socket API
* Sending data over TCP

---

## Notes

* This project implements only the **client** side of a TCP connection.
* A TCP server must already be running before executing the client.
* The default configuration uses the loopback interface (`127.0.0.1`) for local testing.
* This example focuses on the fundamentals of TCP client development.

---

## Future Improvements

* Receive data from the server
* Bidirectional communication
* Multi-message support
* IPv6 support
* Better error handling
* Binary data transfer

---

## Related Projects

* [**Socket-Programming**](https://github.com/PyScriptPlus/Socket-Programming)
* [**TCP Server (C)**](https://github.com/PyScriptPlus/C-TCP-Server)
* [**UDP Example (C++ & C#)**](https://github.com/PyScriptPlus/Cpp-CSharp-UDP-Example)

---

## What is POSIX?

**POSIX (Portable Operating System Interface)** is a family of IEEE standards that defines a common programming interface for Unix-like operating systems.

This project uses the **POSIX Socket API**, including functions such as:

* `socket()`
* `connect()`
* `send()`
* `close()`

Because these APIs are standardized, the same networking code can typically be compiled and run on many Unix-like operating systems with little or no modification, including:

* Linux
* macOS
* FreeBSD
* OpenBSD
* NetBSD

---

## Output:
<img width="2560" height="1440" alt="Image" src="https://github.com/user-attachments/assets/7f4e0387-7263-4b53-97c7-6523f7049440" />

---
## Thanks

**Mohammad Yousefi**
