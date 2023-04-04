// How to compile:
// > emcc stream.c -o stream.js
//   - This creates a .wasm and .js file.
//   - Modify the .js file as needed.
// > python3 -m http.server 5000
//   - Can alternatively use other commands to get localhost.

#include <emscripten.h>

// The Emscripten toolchain removes C functions that are not used by the
// JS code as an optimization to reduce the size of the final compiled output. 

// Since the compiler determines which functions are called from
// JS dynamically at runtime, this optimization may still remove
// C functions that are used by the JS.

// Hence, we use EMSCRIPTEN_KEEPALIVE to signal to not accidentally
// remove it during this optimization.

EMSCRIPTEN_KEEPALIVE 
int add(int a, int b) {
  return a + b;
}