/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.43 $ of : mfd-top.m2c,v $
 *
 * $Id$
 */
#ifndef TCPLISTENERTABLE_H
#define TCPLISTENERTABLE_H

#ifdef __cplusplus
extern          "C" {
#endif


/** @defgroup misc misc: Miscelaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>
#include <net-snmp/data_access/tcpConn.h>

    /*
     * other required module components 
     */
    /* *INDENT-OFF*  */
config_require(tcp-mib/tcpListenerTable/tcpListenerTable_interface)
config_require(tcp-mib/tcpListenerTable/tcpListenerTable_data_access)
    /* *INDENT-ON*  */

    /*
     * OID, column number and enum definions for tcpListenerTable 
     */
#include "tcpListenerTable_constants.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_tcpListenerTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table tcpListenerTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * TCP-MIB::tcpListenerTable is subid 20 of tcp.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.6.20, length: 8
     */
    /*
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review tcpListenerTable registration context.
     */
    typedef struct tListenerT_user_ctx {

        void * dummy;

    } tcpListenerTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review tcpListenerTable data context structure.
     * This structure is used to represent the data for tcpListenerTable.
     */
    typedef netsnmp_tcpconn_entry tcpListenerTable_data;


    /*
     * TODO:120:r: |-> Review tcpListenerTable mib index.
     * This structure is used to represent the index for tcpListenerTable.
     */
    typedef struct tcpListenerTable_mib_index_s {

        /*
         * tcpListenerLocalAddressType(1)/InetAddressType/ASN_INTEGER/long(u_long)//l/a/w/E/r/d/h
         */
        u_long          tcpListenerLocalAddressType;

        /*
         * tcpListenerLocalAddress(2)/InetAddress/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h
         */
        /** 128 - 2(other indexes) - oid length(10) = 115 */
        char            tcpListenerLocalAddress[20];
        size_t          tcpListenerLocalAddress_len;

        /*
         * tcpListenerLocalPort(3)/InetPortNumber/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/R/d/H
         */
        u_long          tcpListenerLocalPort;


    } tcpListenerTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review tcpListenerTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(8)
     */
#define MAX_tcpListenerTable_IDX_LEN     22


    /*
     *********************************************************************
     * TODO:130:o: |-> Review tcpListenerTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * tcpListenerTable_rowreq_ctx pointer.
     */
    typedef struct tcpListenerTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_tcpListenerTable_IDX_LEN];

        tcpListenerTable_mib_index tbl_idx;

        tcpListenerTable_data *data;

        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to tcpListenerTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *tcpListenerTable_data_list;

    } tcpListenerTable_rowreq_ctx;

    typedef struct tcpListenerTable_ref_rowreq_ctx_s {
        tcpListenerTable_rowreq_ctx *rowreq_ctx;
    } tcpListenerTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int            
        tcpListenerTable_pre_request(tcpListenerTable_registration *
                                     user_context);
    int            
        tcpListenerTable_post_request(tcpListenerTable_registration *
                                      user_context, int rc);

    int            
        tcpListenerTable_rowreq_ctx_init(tcpListenerTable_rowreq_ctx *
                                         rowreq_ctx, void *user_init_ctx);
    void           
        tcpListenerTable_rowreq_ctx_cleanup(tcpListenerTable_rowreq_ctx *
                                            rowreq_ctx);

    tcpListenerTable_data *tcpListenerTable_allocate_data(void);
    void            tcpListenerTable_release_data(tcpListenerTable_data *
                                                  data);


    tcpListenerTable_rowreq_ctx
        *tcpListenerTable_row_find_by_mib_index(tcpListenerTable_mib_index
                                                * mib_idx);

    extern oid      tcpListenerTable_oid[];
    extern int      tcpListenerTable_oid_size;


#include "tcpListenerTable_interface.h"
#include "tcpListenerTable_data_access.h"
    /*
     *********************************************************************
     * GET function declarations
     */

    /*
     *********************************************************************
     * GET Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table tcpListenerTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * TCP-MIB::tcpListenerTable is subid 20 of tcp.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.6.20, length: 8
     */
    /*
     * indexes
     */

    int             tcpListenerProcess_get(tcpListenerTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long *
                                           tcpListenerProcess_val_ptr);


    int            
        tcpListenerTable_indexes_set_tbl_idx(tcpListenerTable_mib_index *
                                             tbl_idx,
                                             u_long
                                             tcpListenerLocalAddressType_val,
                                             char
                                             *tcpListenerLocalAddress_val_ptr,
                                             size_t
                                             tcpListenerLocalAddress_val_ptr_len,
                                             u_long
                                             tcpListenerLocalPort_val);
    int            
        tcpListenerTable_indexes_set(tcpListenerTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long
                                     tcpListenerLocalAddressType_val,
                                     char *tcpListenerLocalAddress_val_ptr,
                                     size_t
                                     tcpListenerLocalAddress_val_ptr_len,
                                     u_long tcpListenerLocalPort_val);



    /*
     *********************************************************************
     * SET function declarations
     */

    /*
     *********************************************************************
     * SET Table declarations
     */


    /*
     * DUMMY markers, ignore
     *
     * TODO:099:x: *************************************************************
     * TODO:199:x: *************************************************************
     * TODO:299:x: *************************************************************
     * TODO:399:x: *************************************************************
     * TODO:499:x: *************************************************************
     */

#ifdef __cplusplus
}
#endif
#endif                          /* TCPLISTENERTABLE_H */
