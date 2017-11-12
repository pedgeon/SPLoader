/*
** File: include/SPLoader/abort.h
**
** Author: Brennan Ringey
**
*/

#ifndef _SPLOADER_ABORT_H
#define _SPLOADER_ABORT_H

#ifndef __ASM__

#ifdef DEBUG_FILENAMES
#define spl_abort(reason) _spl_abort(__FILE__, __LINE__, reason)
#else
#define spl_abort(reason) _spl_abort(reason)
#endif

void _spl_abort(
    #ifdef DEBUG_FILENAMES
        const char *file,
        unsigned line,
    #endif
        const char *reason
);

#endif  // __ASM__

#endif