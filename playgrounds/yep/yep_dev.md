# `yep.c` Development

Updated: `(UTC+7) 2022-01-02`

## The Use of C Standard Libraries

---

### `signal.h`
|Item|Location|Descriptions|Notes|
|:---|:---|:-|:---|
|`signal()`|`/yep.c/main()`|Signaling |Correspoding to `yep_ok ok;`|
|||||


### `stdlib.h`

|Item|Location|Descriptions|Notes|
|:---|:---|:-|:---|
|`EXIT_SUCCESS`,<br>`EXIT_FAILURE`|`/yep.c/main()`|Returning `int exit_status`.|Correspoding to `yep_ok ok;`|
|||||

### `unistd.h`

|Item|Location|Descriptions|Notes|
|:---|:---|:---|:---|
|`fork()`|`/yep.c/main()`|Initializing a child process.|-|
|`pipe()`|`/yep.c/main()`|Create a pipe connecting `/proc/<child pid>/fd/*` to the parent process.|-|
|||||