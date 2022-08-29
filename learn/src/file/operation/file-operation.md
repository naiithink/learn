# File Operations

## File I/O Methods by Complexity

| Complexity                                            | Methods                                   |
| :---------------------------------------------------- | :---------------------------------------- |
| Commonly used, small files                            | `readAllBytes`, `readAllLines`            |
| Text files                                            | `newBufferedReader`, `newBufferedWriter`  |
| streams, unbuffered, use with existing APIs           | `newInputStream`, `newOutputStream`       |
| channels, and ByteBuffers                             | `newByteChannel`                          |
| advanced features, file-locking, memory-mapped I/O    | `FileChannel`                             |


## The `OpenOptions` Parameter


