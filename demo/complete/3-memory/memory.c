// How to compile:
// > emcc memory.c -o memory.js
//   - This creates a .wasm and .js file.
//   - Modify the .js file as needed.
// > python3 -m http.server 5000
//   - Can alternatively use other commands to get localhost.

#include <emscripten.h>
#include <stdio.h>

EMSCRIPTEN_KEEPALIVE
int sumArray(int *arr, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += arr[i];
  return sum;
}

int main() {
  return 0;
}