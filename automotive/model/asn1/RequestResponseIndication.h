/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_Container.asn1"
 * 	`asn1c -fincludes-quoted -gen-PER`
 */

#ifndef	_RequestResponseIndication_H_
#define	_RequestResponseIndication_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RequestResponseIndication {
	RequestResponseIndication_request	= 0,
	RequestResponseIndication_response	= 1
} e_RequestResponseIndication;

/* RequestResponseIndication */
typedef long	 RequestResponseIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestResponseIndication;
asn_struct_free_f RequestResponseIndication_free;
asn_struct_print_f RequestResponseIndication_print;
asn_constr_check_f RequestResponseIndication_constraint;
ber_type_decoder_f RequestResponseIndication_decode_ber;
der_type_encoder_f RequestResponseIndication_encode_der;
xer_type_decoder_f RequestResponseIndication_decode_xer;
xer_type_encoder_f RequestResponseIndication_encode_xer;
per_type_decoder_f RequestResponseIndication_decode_uper;
per_type_encoder_f RequestResponseIndication_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RequestResponseIndication_H_ */
#include "asn_internal.h"
