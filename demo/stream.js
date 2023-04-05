// TODO: load our WASM module somehow

function runWasm() {
  let a = document.querySelector("#a").value;
  let b = document.querySelector("#b").value;
  let sum = -1; // TODO: call on our C function somehow

  document.querySelector("#result").innerHTML += `${a} + ${b} = ${sum}<br/>`;
}

