#ifndef __CMD_PARSER_H_
#define __CMD_PARSER_H_

/* Inlcuded to get the definition of ytelse_device_t */

#include "pacman_comm_setup.h"

typedef enum commands {
	/* Useful commands */
	INVALID_CMD, 		/* No command selected */
	CONNECT,			/* Connect to specified device(s) */
	RUN,				/* Run full program specified by device */
	STOP,				/* Stop whatever transactions are going on between host and given device */
	HELP, 				/* Print available commands */
	ART,				/* Print startup image */
	QUIT,				/* Quit the program */
	/* Test commands */
	TESTSEND,		/* Send N messages to specified device */
	TESTRECV,		/* Set up receive of N message from specified device */
	TESTSENDRECV,	/* Send and set up receive of N message to/from specified device */
} cmd_t;

typedef struct Command {
	cmd_t command;
	pacman_device_t target;
	int N;
} pacman_command_t;

pacman_command_t parse_cmd(char* string);


#endif /* __CMD_PARSE_H_ */

