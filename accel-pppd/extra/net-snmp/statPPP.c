/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.int_watch.conf 13957 2005-12-20 15:33:08Z tanders $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "statPPP.h"

#include "ppp.h"

/*
 * Our initialization routine, called automatically by the agent
 * (Note that the function name must match init_FILENAME())
 */
void
init_statPPP(void)
{
  netsnmp_handler_registration *reg;
  netsnmp_watcher_info         *winfo;

    static oid statPPPStarting_oid[] = { 1,3,6,1,4,1,8072,100,1,2,1 };
    static oid statPPPActive_oid[] = { 1,3,6,1,4,1,8072,100,1,2,2 };
    static oid statPPPFinishing_oid[] = { 1,3,6,1,4,1,8072,100,1,2,3 };

  /*
   * a debugging statement.  Run the agent with -DstatPPP to see
   * the output of this debugging statement.
   */
  DEBUGMSGTL(("statPPP", "Initializing the statPPP module\n"));


    /*
     * Register scalar watchers for each of the MIB objects.
     * The ASN type and RO/RW status are taken from the MIB definition,
     * but can be adjusted if needed.
     *
     * In most circumstances, the scalar watcher will handle all
     * of the necessary processing.  But the NULL parameter in the
     * netsnmp_create_handler_registration() call can be used to
     * supply a user-provided handler if necessary.
     *
     * This approach can also be used to handle Counter64, string-
     * and OID-based watched scalars (although variable-sized writeable
     * objects will need some more specialised initialisation).
     */
    DEBUGMSGTL(("statPPP",
                "Initializing statPPPStarting scalar integer.  Default value = %d\n",
                0));
    reg = netsnmp_create_handler_registration(
             "statPPPStarting", NULL,
              statPPPStarting_oid, OID_LENGTH(statPPPStarting_oid),
              HANDLER_CAN_RONLY);
    winfo = netsnmp_create_watcher_info(
                &ap_session_stat.starting, sizeof(ap_session_stat.starting),
                 ASN_INTEGER, WATCHER_FIXED_SIZE);
    if (netsnmp_register_watched_scalar( reg, winfo ) < 0 ) {
        snmp_log( LOG_ERR, "Failed to register watched statPPPStarting" );
    }

    DEBUGMSGTL(("statPPP",
                "Initializing statPPPActive scalar integer.  Default value = %d\n",
                0));
    reg = netsnmp_create_handler_registration(
             "statPPPActive", NULL,
              statPPPActive_oid, OID_LENGTH(statPPPActive_oid),
              HANDLER_CAN_RONLY);
    winfo = netsnmp_create_watcher_info(
                &ap_session_stat.active, sizeof(ap_session_stat.active),
                 ASN_INTEGER, WATCHER_FIXED_SIZE);
    if (netsnmp_register_watched_scalar( reg, winfo ) < 0 ) {
        snmp_log( LOG_ERR, "Failed to register watched statPPPActive" );
    }

    DEBUGMSGTL(("statPPP",
                "Initializing statPPPFinishing scalar integer.  Default value = %d\n",
                0));
    reg = netsnmp_create_handler_registration(
             "statPPPFinishing", NULL,
              statPPPFinishing_oid, OID_LENGTH(statPPPFinishing_oid),
              HANDLER_CAN_RONLY);
    winfo = netsnmp_create_watcher_info(
                &ap_session_stat.finishing, sizeof(ap_session_stat.finishing),
                 ASN_INTEGER, WATCHER_FIXED_SIZE);
    if (netsnmp_register_watched_scalar( reg, winfo ) < 0 ) {
        snmp_log( LOG_ERR, "Failed to register watched statPPPFinishing" );
    }


  DEBUGMSGTL(("statPPP",
              "Done initalizing statPPP module\n"));
}
