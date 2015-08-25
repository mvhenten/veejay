/* 
 * Linux VeeJay
 *
 * Copyright(C)2002 Niels Elburg <elburg@hio.hen.nl>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License , or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307 , USA.
 */

#ifndef RIPPLETV_H
#define RIPPLETV_H
#include <libvje/vje.h>
#include <libvjmem/vjmem.h>
#include <sys/types.h>
#include <stdint.h>

vj_effect* water_init(int width, int height);
int water_malloc(void **d,int w, int h);
void water_free(void *d);
void	water_apply(void *user_data, VJFrame *frame, VJFrame *frame2, int width, int height,int fresh, int loopnum, int decay, int mode, int threshold );
#endif
