/*
Copyright (C) 1996-1997 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
// nvs_common.c
// 2000-04-30 NVS COMMON by Maddes

#include "quakedef.h"

// 2000-04-30 NVS COMMON by Maddes
cvar_t	*nvs_current_ssvc;

// 2001-09-18 New cvar system by Maddes (Init)  start
/*
=====================
NVS_Init_Cvars

Register NVS cvars
=====================
*/
void NVS_Init_Cvars (void)
{
	nvs_current_ssvc = Cvar_Get ("nvs_current_ssvc", "0", CVAR_ROM);
	Cvar_SetRangecheck (nvs_current_ssvc, Cvar_RangecheckFloat, 0, MAX_NVS_VERSION);
	Cvar_SetDescription (nvs_current_ssvc, "Contains the current server's NVS version for SVC messages, which are send from this server to the clients. SVC messages are generated by the engine and the PROGS.DAT. Maximum can be set with NVS_MAX_SERVER command.");
	Cvar_Set(nvs_current_ssvc, nvs_current_ssvc->string);	// do rangecheck
}
// 2001-09-18 New cvar system by Maddes (Init)  end

/*
=====================
NVS_Init

Register NVS commands and initialize variables
=====================
*/
// 2000-04-30 NVS COMMON by Maddes
void NVS_Init (void)
{
// 2001-09-18 New cvar system by Maddes (Init)  start
/*
	nvs_current_ssvc = Cvar_Get ("nvs_current_ssvc", "0", CVAR_ROM);
	Cvar_SetRangecheck (nvs_current_ssvc, Cvar_RangecheckFloat, 0, MAX_NVS_VERSION);
	Cvar_Set(nvs_current_ssvc, nvs_current_ssvc->string);	// do rangecheck
*/
// 2001-09-18 New cvar system by Maddes (Init)  end
}
