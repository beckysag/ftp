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
```
	Name: anonymous
	Password: [empty]
```
