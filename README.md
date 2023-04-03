# WebAssembly

## Want to Play a Game During The Presentation?
- Explore a 3D space station and fight robots: https://beta.unity3d.com/jonas/AngryBots/
- Arena Shooter (very doom-isk): https://kripken.github.io/misc-js-benchmarks/banana/index.html

## What is WebAssembly?
WebAssembly (abbreviated Wasm) is a binary instruction format for a stack-based virtual machine. Wasm is designed as a portable compilation target for programming languages, enabling deployment on the web for client and server applications. A good starting place is https://webassembly.org/ to gather more information.

## How it works
WebAssembly is not quite an assembly language, its tool made for the browser. It acts as more of a virtual machine similar to Java Virtual Machine and the Python Virtual Machine but has multi-language support.

### .wat & .wasm
<img src="image/watvswasm.png">

## Perspective From Web Application
WebAssembly goal is not to replace JavaScript, but to relieve computationally heavy tasks to faster and less error prone languages. Due to this, load times and possible 3D rendering tasks aren't regulated by the slow speed of JavaScript.

<img src="image/perspective.png">

