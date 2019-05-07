/* gairq-utils.h
 *
 * Copyright 2019 Leesoo Ahn <yisooan@fedoraproject.org>
 *
 * This file is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: LGPL-3.0-or-later
 */

#ifndef GAIRQ_UTILS_H
#define GAIRQ_UTILS_H

#if !defined(GAIRQ_INSIDE) && !defined(GAIRQ_COMPILATION)
# error "Only <gairq/gairq.h> can be included directly."
#endif

#include <glib.h>

G_BEGIN_DECLS

#define STR_VALIDATOR(_ptr) (_ptr != NULL && *_ptr != '\0')

G_END_DECLS

#endif
