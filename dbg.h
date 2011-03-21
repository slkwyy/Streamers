/*
 *  Copyright (c) 2010 Luca Abeni
 *  Copyright (c) 2010 Csaba Kiraly
 *
 *  This is free software; see gpl-3.0.txt
 */
#ifndef DBG_H
#define DBG_H

#include <stdio.h>

int ftprintf(FILE *stream, const char *format, ...);

#ifdef DEBUG
#define dprintf(...) fprintf(stderr,__VA_ARGS__)
#define dtprintf(...) ftprintf(stderr,__VA_ARGS__)
#else
#define dprintf(...)
#define dtprintf(...)
#endif

#endif	/* DBG_H */
