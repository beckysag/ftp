/* ftclient.h
 *
 * Rebecca Sagalyn
 * 11/15/13
 *
 * Client side of TCP file transfer implementation, runs with custom server, 
 * ftserve.c. Receives commands from input, and retreives list of files in current 
 * and files. 
   * 
 * Valid commands: 
 *    get <filename>
 *    list
 *    quit
 *    
 * Usage: 
 *    ./ftclient SERVER_HOSTNAME PORT#
 */

#ifndef FTCLIENT_H
#define FTCLIENT_H

#include "../common/common.h"


/**
 * Receive a response from server
 * Returns -1 on error, return code on success
 */
int read_reply();


/**
 * Print response message
 */
void print_reply(int rc);


/**
 * Parse command in cstruct
 */ 
int ftclient_read_command(char* buf, int size, struct command *cstruct);


/**
 * Do get <filename> command 
 */
int ftclient_get(int data_sock, int sock_control, char* arg);


/**
 * Open data connection
 */
int ftclient_open_conn(int sock_con);


/** 
 * Do list commmand
 */
int ftclient_list(int sock_data, int sock_con);


/**
 * Input: cmd struct with an a code and an arg
 * Concats code + arg into a string and sends to server
 */
int ftclient_send_cmd(struct command *cmd);


/**
 * Get login details from user and
 * send to server for authentication
 */
void ftclient_login();


#endif
