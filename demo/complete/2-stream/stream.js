// Holds the results of calling our C function
let exports;

// To load a WASM module, it needs to be [1] compiled and [2] instantiated before execution.
// Traditionally, this is done by loading the entire module into memory and then doing [1] and [2].
// This can be pretty slow and inefficient!

// instantiateStreaming does [1] and [2] in small chunks ('streaming') as needed, often leading
// to faster loading times and better memory efficiency.
WebAssembly.instantiateStreaming(
  fetch("stream.wasm"), {} // notice the fetch here -- this is async!
).then(results => exports = results.instance.exports);

// runs the function 'add' when the button is clicked
function runWasm() {
  let a = document.querySelector("#a").value;
  let b = document.querySelector("#b").value;
  let sum = exports.add(a, b);

  document.querySelector("#result").innerHTML += `${a} + ${b} = ${sum}<br/>`;
}

