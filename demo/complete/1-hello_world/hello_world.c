// How to compile:
// > emcc hello_world.c -o hello_world.js
//   - This creates a .wasm and .js file.
// > python3 -m http.server 5000
//   - Can alternatively use other commands to get localhost.

#include <stdio.h>

int main() {
  printf("meow :3\n");
  return 0;
}