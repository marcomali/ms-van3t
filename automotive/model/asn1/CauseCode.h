/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_Container.asn1"
 * 	`asn1c -fincludes-quoted -gen-PER`
 */

#ifndef	_CauseCode_H_
#define	_CauseCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CauseCodeType.h"
#include "SubCauseCodeType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CauseCode */
typedef struct CauseCode {
	CauseCodeType_t	 causeCode;
	SubCauseCodeType_t	 subCauseCode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CauseCode;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseCode_H_ */
#include "asn_internal.h"
