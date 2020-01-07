/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "CAMdef.asn1"
 * 	`asn1c -fincludes-quoted -gen-PER`
 */

#ifndef	_SpecialTransportContainer_H_
#define	_SpecialTransportContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SpecialTransportType.h"
#include "LightBarSirenInUse.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SpecialTransportContainer */
typedef struct SpecialTransportContainer {
	SpecialTransportType_t	 specialTransportType;
	LightBarSirenInUse_t	 lightBarSirenInUse;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpecialTransportContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpecialTransportContainer;

#ifdef __cplusplus
}
#endif

#endif	/* _SpecialTransportContainer_H_ */
#include "asn_internal.h"
