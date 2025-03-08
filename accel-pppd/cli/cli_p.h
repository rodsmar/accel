#ifndef CLI_P_H
#define CLI_P_H

#include <pcre2.h>
#include <list.h>

#include "cli.h"

struct cli_client_t
{
	void (*disconnect)(struct cli_client_t *);
	int (*send)(struct cli_client_t *, const void *, int);
	int (*sendv)(struct cli_client_t *, const char *, va_list);

	const char *cmdline;
	int cor_len;
};

struct cli_simple_cmd_t
{
	struct list_head entry;
	int hdr_len;
	char **hdr;
	
	int (*exec)(const char *cmd, char * const *fields, int flen, void *client);
	void (*help)(char * const *fields, int flen, void *client);
};

struct cli_regexp_cmd_t
{
	struct list_head entry;
	pcre2_code *re;
	pcre2_code *h_re;
	
	int (*exec)(const char *cmd, void *client);
	void (*help)(const char *cmd, void *client);
};

#endif

