/*
 * Copyright (C) 2016 Matthias Klumpp <matthias@tenstral.net>
 *
 * Licensed under the GNU General Public License Version 3
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the license, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __LS_STIMPULSE_H
#define __LS_STIMPULSE_H

#include <glib.h>
#include <stdint.h>

#define LS_STIM_PIN GLD_GPIO_PIN_27
#define LS_INTENSITY_CHANNEL 0

void            stimpulse_init (void);

void            stimpulse_set_intensity (uint16_t value);

void            stimpulse_set_trigger_high (void);
void            stimpulse_set_trigger_low (void);

#endif /* __LS_STIMPULSE_H */
