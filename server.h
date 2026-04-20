#include <sys/socket.h>
#include <netinet/in.h>
#include <string>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

static void read_write(int socket) {
    char read_buffer[64] {}; // read buffer
    ssize_t n = read(socket, read_buffer, sizeof(read_buffer));

    if (n < 0) {
        std::cout << "read error\n";
        return;
    }

    std::cout << "client says " << read_buffer << '\n';

    char write_buffer[64] {"yo\n"};
    write(socket, write_buffer, sizeof(write_buffer));
}