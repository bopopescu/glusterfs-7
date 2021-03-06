#ifndef _DISCOVER_H
#define _DISCOVER_H

extern int discover(const char *desc, int argc, char **argv, bool connect);
extern int connect2(const char *desc, int argc, char **argv);
extern int disconnect(const char *desc, int argc, char **argv);
extern int disconnect_by_nqn(char *);

#endif
