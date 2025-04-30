/*
 * include/haproxy/ssl_trace-t.h
 * Definitions for SSL traces internal types, constants and flags.
 *
 * Copyright (C) 2025
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 *
 */

#ifndef _HAPROXY_SSL_TRACE_T_H
#define _HAPROXY_SSL_TRACE_T_H

#include <haproxy/trace-t.h>

extern struct trace_source trace_ssl;

#define SSL_EV_CONN_NEW            (1ULL <<  0)
#define SSL_EV_CONN_CLOSE          (1ULL <<  1)
#define SSL_EV_CONN_END            (1ULL <<  2)
#define SSL_EV_CONN_ERR            (1ULL <<  3)

#define TRACE_SOURCE &trace_ssl

#endif /* _HAPROXY_SSL_TRACE_T_H */
