/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "CAMdef.asn1"
 * 	`asn1c -fincludes-quoted -gen-PER`
 */

#ifndef	_PublicTransportContainer_H_
#define	_PublicTransportContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EmbarkationStatus.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PtActivation;

/* PublicTransportContainer */
typedef struct PublicTransportContainer {
	EmbarkationStatus_t	 embarkationStatus;
	struct PtActivation	*ptActivation	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PublicTransportContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PublicTransportContainer;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PtActivation.h"

#endif	/* _PublicTransportContainer_H_ */
#include "asn_internal.h"
