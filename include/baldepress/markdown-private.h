/*
 * baldepress: A Git-based blogging engine built with balde.
 * Copyright (C) 2014 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 *
 * This program can be distributed under the terms of the LGPL-2 License.
 * See the file COPYING.
 */

#ifndef _BALDEPRESS_MARKDOWN_PRIVATE_H
#define _BALDEPRESS_MARKDOWN_PRIVATE_H

#include <glib.h>
#include <balde.h>

gchar* bp_markdown_parse(balde_app_t *app, const gchar *mkd_source);

#endif /* _BALDEPRESS_MARKDOWN_PRIVATE_H */
