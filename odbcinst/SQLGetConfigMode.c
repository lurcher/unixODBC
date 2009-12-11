/**************************************************
 * SQLGetConfigMode
 *
 **************************************************
 * This code was created by Peter Harvey @ CodeByDesign.
 * Released under LGPL 28.JAN.99
 *
 * Contributions from...
 * -----------------------------------------------
 * Peter Harvey		- pharvey@codebydesign.com
 * Nick Gorham      - nick@easysoft.com
 **************************************************/
#include <config.h>
#include <stdlib.h>
#include <odbcinstext.h>

BOOL SQLGetConfigMode( UWORD *pnConfigMode )
{
    inst_logClear();

    *pnConfigMode = __get_config_mode();

    return TRUE;
}


