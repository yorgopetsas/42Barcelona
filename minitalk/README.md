## Requierments
We are allow to use the following functions:

We are allowed to use the following signals:
	- SIGUSR1
	- SIGUSR2

- The communication between the client and the server has to be done only using
UNIX signals.

### Server:
	- Has to print its PID after start
	- Prints a string once it has been recieved

### Client:
	- Takes two parameters: server PID, string to send

