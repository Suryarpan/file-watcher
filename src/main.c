/* main.c
 *
 * Copyright 2025 Popey M Slayer
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "config.h"

#include <glib.h>
#include <stdlib.h>

gint
main (gint   argc,
      gchar *argv[])
{
	g_autoptr(GOptionContext) context = NULL;
	g_autoptr(GError) error = NULL;
	gboolean version = FALSE;
	GOptionEntry main_entries[] = {
		{ "version", 0, 0, G_OPTION_ARG_NONE, &version, "Show program version" },
		{ NULL }
	};

	context = g_option_context_new ("- my command line tool");
	g_option_context_add_main_entries (context, main_entries, NULL);

	if (!g_option_context_parse (context, &argc, &argv, &error))
	{
		g_printerr ("%s\n", error->message);
		return EXIT_FAILURE;
	}

	if (version)
	{
		g_printerr ("%s\n", PACKAGE_VERSION);
		return EXIT_SUCCESS;
	}

	return EXIT_SUCCESS;
}
