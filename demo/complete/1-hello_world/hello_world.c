// How to compile:
// > emcc hello_world.c -o hello_world.js
//   - This creates a .wasm and .js file.
// > python3 -m http.server 5000
//   - Can alternatively use other commands to get localhost.

// Why localhost? Most web browsers implement a same-origin policy that restricts web pages 
// from accessing resources from other domains or from local file systems. 
// When you load a page from the file:// protocol, it is treated as a 
// different origin from the page that loaded the WebAssembly module, 
// and this can cause security issues. For this reason, we use localhost

#include <stdio.h>

int main() {
  printf("meow :3\n");
  return 0;
}