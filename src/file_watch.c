/* main.c
 *
 * Copyright 2025 Suryarpan Chowdhury
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

#include "file_watch.h"

#include <stdlib.h>

gint add_fd_to_watch(GStrv all_fds) {
    gsize num_fds = g_strv_length(all_fds);
    for (gsize i = 0; i < num_fds; i++) {
        g_print("%ld %s\n", i, all_fds[i]);
    }
    return 0;
}