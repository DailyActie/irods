/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/

#ifndef DATA_PUT_HPP
#define DATA_PUT_HPP

/* This is a high level type API call */

#include "rods.h"
#include "rcMisc.hpp"
#include "procApiRequest.h"
#include "apiNumber.h"
#include "fileOpen.hpp"
#include "fileOpen.hpp"
#include "dataObjPut.hpp"

#if defined(RODS_SERVER)
#define RS_DATA_PUT rsDataPut
/* prototype for the server handler */
int
rsDataPut( rsComm_t *rsComm, dataOprInp_t *dataPutInp,
           portalOprOut_t **portalOprOut );
int
remoteDataPut( rsComm_t *rsComm, dataOprInp_t *dataPutInp,
               portalOprOut_t **portalOprOut, rodsServerHost_t *rodsServerHost );
int
_rsDataPut( rsComm_t *rsComm, dataOprInp_t *dataPutInp,
            portalOprOut_t **portalOprOut );
#else
#define RS_DATA_PUT NULL
#endif

/* prototype for the client call */
#ifdef __cplusplus
extern "C" {
#endif
int
rcDataPut( rcComm_t *conn, dataOprInp_t *dataPutInp,
           portalOprOut_t **portalOprOut );
#ifdef __cplusplus
}
#endif

#endif	/* DATA_PUT_H */
