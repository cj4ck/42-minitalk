# Minitalk
#📝/42/Core_Curriculum/Minitalk
#📝/Computer_Science/Programming/C 

# General concepts of the project
- The purpose of this project is to code a small data exchange program using UNIX signals.
-  The client will send information (a string) to the server using UNIX signals.
- The server must correctly receive and interpret this information, then display it.

### Allowed functions
-  `write()` | `ft_printf()` | `pause()` | `sleep()` | `usleep()` | `exit()` | `malloc()` | `free()` | `libft functions`
##### New functions
-    `signal()`: It's a function in C programming language that is used to set up a signal handler for a specific signal. A signal handler is a function that is called when a signal is sent to the program.
-   `sigaction()`: It's a function in C programming language that is used to set up a signal handler for a specific signal. It's safer than the `signal()` function because it provides more control over how the signal is handled.
-   `sigemptyset()`: It's a function in C programming language that is used to initialize a signal set to empty. A signal set is a collection of signals that can be blocked or unblocked by the program.
-   `sigaddset()`: It's a function in C programming language that is used to add a signal to a signal set. Once a signal is added to a signal set, it can be blocked or unblocked by the program.
-   `kill()`: It's a function in C programming language that is used to send a signal to a process or a group of processes. The signal can be used to terminate a process or to interrupt its execution.
-   `getpid()`: It's a function in C programming language that is used to get the process ID of the current process. The process ID is a unique identifier assigned to each process by the operating system.

# Compilation:

To compile the client program, use the following command:

```bash
make client
```
To compile the server program, use the following command:

```
make server
```

## Running the Programs
To run the server program, execute the following command:

```bash
./server
```
The server program will start listening for incoming signals.

To run the client program, execute the following command:

```bash
./client [server PID] [message]
```

Replace [server PID] with the process ID of the server program and [message] with the message you want to send to the server.

For example, if the server PID is 1234 and you want to send the message "Hello, World!" to the server, execute the following command:
```bash
./client 1234 "Hello, World!"
```

# Resources:

## Signals in C
>A signal is a software interrupt that is sent to a process by the operating system in an event such as when a user presses ctrl-c in terminal.  Signals are asynchronous notifications delivered to your script when specific events occur.


Signals allow the manipulation of a process from outside its domain, as well as allowing the process to manipulate itself or copies of itself (children).  There are two general types of signals: those that cause termination of a process and those that do not.  Signals which cause termination of a program might result from an irrecoverable error or might be the result of a user at a terminal typing the `interrupt` character. `(CTRL + C)`Signals are use when a process is stopped because it wishes to access its control terminal while in the background (see tty(4)).  Signals are optionally generated when a process resumes after being stopped, when the status of child processes changes, or when input is ready at the control terminal.  Most signals result in the termination of the process receiving them, if no action is taken; some signals instead cause the process receiving them to be stopped, or are simply discarded if the process has not requested otherwise.  Except for the SIGKILL and SIGSTOP signals, the signal() function allows for a signal to be caught, to be ignored, or to generate an interrupt.  These signals are defined in the file `<signal.h>`

| No  | Name        | Default Action    | Description                                     |
| --- | ----------- | ----------------- | ----------------------------------------------- |
|     |             |                   |                                                 |
| 1   | SIGHUP      | terminate process | terminal line hangup                            |
| 2   | SIGINT      | terminate process | interrupt program                               |
| 3   | SIGQUIT     | create core image | quit program                                    |
| 4   | SIGILL      | create core image | illegal instruction                             |
| ...   | ...     | ... | ...                                    |
| 30  | ==SIGUSR1== | terminate process | ==User defined signal 1==                           |
| 31  | ==SIGUSR2== | terminate process | ==User defined signal 2==                           |

This table represents all the UNIX signals. As you can see there is a lot of things that can be done with signals. However we are allowed to use in our project only `SIGUSR1` and `SIGUSR2`.

## Comunnication between `client` and the `server`
> Two arguments are passed to the client executable - PID of the server and message to be sent.
> Each value of chars making up the message are send as binary via `sigusr1` and `sigusr2`.
> Take look at code implementation. Coments there will guide you with how the character is converted into binary value and sent to the server.
