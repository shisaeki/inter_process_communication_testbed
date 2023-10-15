# linux_redirection_testbed
## fork function
### prototype
```
pid_t fork(void);
```
### Return Value
| 値 | 説明 |
|:---|:---|
|正の値 | |
|0 |forkに成功して、子プロセスとして動く |
|-1 |エラーの発生 |
### description
fork()は新しいプロセスを作成する。 新しいプロセス（子プロセス）は、呼び出したプロセス（親プロセス）の完全なコピーです。