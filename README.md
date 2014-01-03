FTP Client-Server Implementation
===========


### Directory layout:
	ftp/
		client/
			ftclient.c
			ftclient.h
			makefile
		common/
			common.c
			common.h
		server/
			ftserve.c
			ftserve.h
			makefile
			.auth

###Usage
To compile and link ftserve:
```
	$ cd server/
	$ make
```

To compile and link ftclient:
```
	$ cd client/
	$ make
```

To run ftserve:
```
	$ server/ftserve PORTNO
```

To run ftclient:
```
	$ client/ftclient HOSTNAME PORTNO

	Commands:
		list
		get <filename>
		quit
```

Logging In:
	Name: user   
	Password: pass

	OR 

	Name: anonymous
	Password: [empty]


Extra Credit
 1. Multi-process, concurrent server (see line 28 in ftserve.c)
 2. Username/password access to server
	  A hidden file on the server contains username and password combinations. 
	  Before a client is allowed to access the server, their username and password must be validated.
	  Pre-set account details are listed above. 
 3. ls -l style directory listing (for command "list")
