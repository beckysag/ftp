FTP Client-Server Implementation
===========
Simple implementation of a file transfer program. It includes custom client and server programs that provide functionality to authenticate a user, list remote files, and retrieve remote files.

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

Available commands:
```
list            - retrieve list of files in the current remote directory
get <filename>  - get the specified file
quit            - end the ftp session
```

Logging In:
```
	Name: anonymous
	Password: [empty]
```
