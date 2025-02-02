/**********************************************************************
 * SQLExtendedFetch
 *
 **********************************************************************
 *
 * This code was created by Peter Harvey (mostly during Christmas 98/99).
 * This code is LGPL. Please ensure that this message remains in future
 * distributions and uses of this code (thats about all I get out of it).
 * - Peter Harvey pharvey@codebydesign.com
 *
 **********************************************************************/

#include <config.h>
#include "driver.h"

SQLRETURN SQLExtendedFetch(   SQLHSTMT        hDrvStmt,
                                    SQLUSMALLINT    nOrientation,
                                    SQLLEN          nOffset,
                                    SQLULEN         *pnRowCount,
                                    SQLUSMALLINT    *pRowStatusArray )
{
    HDRVSTMT hStmt	= (HDRVSTMT)hDrvStmt;

	/* SANITY CHECKS */
    if( NULL == hStmt )
        return SQL_INVALID_HANDLE;

    /* sprintf((char*) hStmt->szSqlMsg, "hStmt = $%08lX", (long)hStmt ); */
#pragma GCC diagnostic push
    // ignore warning related to attempting to apply 0 padding to
    // pointer format
#pragma GCC diagnostic ignored "-Wformat"
    sprintf((char*) hStmt->szSqlMsg, "hStmt = $%08p", hStmt );
#pragma GCC diagnostic pop
    logPushMsg( hStmt->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING,(char*) hStmt->szSqlMsg );


    /************************
     * REPLACE THIS COMMENT WITH SOMETHING USEFULL
     ************************/
    logPushMsg( hStmt->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING, "SQL_ERROR This function not supported" );


    return SQL_ERROR;
}



