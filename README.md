# TCP, socket programming

you'll need to include quite a few libraries in order to start programming with actual sockets and servers. the goal here is to create a `client-server` model, so, naturally, we'll create a `client` and a `server` - `client.cpp` and `server.cpp`

the base idea is that the `server` creates a `socket` and binds it to a port (say port 67). a `client` will then try to connect to port 67 as the server listens to that connection. **the `client` reaches out to the `server`, and the `server` listens to that outreach.**