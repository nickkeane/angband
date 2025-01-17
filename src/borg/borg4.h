
/* File: borg4.h */

/* Purpose: Header file for "borg4.c" -BEN- */

#ifndef INCLUDED_BORG4_H
#define INCLUDED_BORG4_H

#include "angband.h"
#include "obj-tval.h"
#include "cave.h"

#ifdef ALLOW_BORG

/*
 * This file provides support for "borg4.c".
 */

#include "borg1.h"
#include "borg2.h"
#include "borg3.h"



 /*
  * Extract various bonuses
  */
extern void borg_notice(bool notice_swap);

/*
 * Extract the bonuses for items in the home.
 *
 * in_item is passed in if you want to pretent that in_item is
 *          the only item in the home.
 * no_items is passed in as true if you want to pretend that the
 *          home is empty.
 */
extern void borg_notice_home(borg_item* in_item, bool no_items);

extern int borg_mon_blow_effect(const char* name);


/*
 * Calculate the basic "power"
 */
extern int32_t borg_power(void);

/*
 * Calculate the basic "power" of the home
 */
extern int32_t borg_power_home(void);



/*
 * Calculate danger to a grid from a monster
 */
extern int borg_danger_aux(int y, int x, int c, int i, bool average, bool full_damage);

/*
 * Hack -- Calculate the "danger" of the given grid.
 */
extern int borg_danger(int y, int x, int c, bool average, bool full_damage);


/*
 * Determine if the Borg is out of "crucial" supplies.
 */
extern const char* borg_restock(int depth);

/*
 * Determine if the Borg is "prepared" for the given level
 */
extern const char* borg_prepared(int depth);


/*
 * Initialize this file
 */
extern void borg_init_4(void);
extern void borg_clean_4(void);


#endif

#endif

