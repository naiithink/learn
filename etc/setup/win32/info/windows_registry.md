# The Windows Registry

Ref:

- [docs.microsoft.com](https://docs.microsoft.com/en-us/windows/win32/sysinfo/about-the-registry "About the Registry")

## What is it?

- A system-defined hierarchical database in which applications and system components store and retrieve configuration data.
- Applications use the registry API to retrieve, modify, or delete registry data.

## Structure

```
Root
|
+- Node (key)
   |
   +- (optional) Child Node (subkey)
   |
   +- (optional) Data entry (value)
   |
   * and so on...
```

## Values

| Value | Type |
| :---- | :--- |
| `REG_BINARY` | Binary data in any form. |
| `REG_DWORD` | A 32-bit number. |
| `REG_DWORD_LITTLE_ENDIAN` | A 32-bit number in little-endian format. Windows is designed to run on little-endian computer architectures. Therefore, this value is defined as REG_DWORD in the Windows header files. |
| 