/* whois.h - declarations for WHOIS queries
   Copyright (C) 2001-2002, 2016 Free Software Foundation, Inc.

   This file is part of GNU JWhois.

   GNU JWhois is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   GNU JWhois is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GNU JWhois.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef WHOIS_H
#define WHOIS_H

struct s_whois_query {
  char *host;
  int port;
  char *query;
  char *domain;
};

typedef struct s_whois_query *whois_query_t;

/* Initialize a whois_query_t object.  */
extern whois_query_t wq_init (void);

/* Deallocate whois_query_t object WQ.  */
extern void wq_free (whois_query_t wq);

/* Return query string from WQ.  */
extern char *wq_get_query (whois_query_t wq);

/* Set query string in WQ to QUERY.  */
extern void wq_set_query (whois_query_t wq, char *query);

int whois_query (whois_query_t, char **);

#endif /* WHOIS_H */
