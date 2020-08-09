/* Copyright 2020 t-miyajima
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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


#pragma once

#define XXX KC_NO

#include "quantum.h"

// This a shortcut to help you visually see your layout.

#define LAYOUT_44key( \
    k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12, k13, \
    k14 , k15, k16, k17, k18, k19, k20, k21, k22, k23, k24,  k25   , \
     k26 ,  k27, k28, k29, k30, k31, k32, k33, k34, k35,  k36,  k37, \
         k38,  k39,      k40,         k41,   k42,   k43,   k44       \
) { \
    { k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12, k13 }, \
    { k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, k24, k25, XXX }, \
    { k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, k36, k37, XXX }, \
    { k38, k39, XXX, k40, XXX, k41, XXX, XXX, k42, k43, k44, XXX, XXX }  \
}

#define LAYOUT_42key( \
    k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12, k13, \
    k14 , k15, k16, k17, k18, k19, k20, k21, k22, k23, k24,  k25   , \
     k26 ,  k27, k28, k29, k30, k31, k32, k33, k34, k35,  k36,  k37, \
         k38,  k39,                   k41,          k43,   k44       \
) { \
    { k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12, k13 }, \
    { k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, k24, k25, XXX }, \
    { k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, k36, k37, XXX }, \
    { k38, k39, XXX, XXX, XXX, k41, XXX, XXX, XXX, k43, k44, XXX, XXX }  \
}

