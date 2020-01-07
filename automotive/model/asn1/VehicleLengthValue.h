/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_Container.asn1"
 * 	`asn1c -fincludes-quoted -gen-PER`
 */

#ifndef	_VehicleLengthValue_H_
#define	_VehicleLengthValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleLengthValue {
	VehicleLengthValue_tenCentimeters	= 1,
	VehicleLengthValue_outOfRange	= 1022,
	VehicleLengthValue_unavailable	= 1023
} e_VehicleLengthValue;

/* VehicleLengthValue */
typedef long	 VehicleLengthValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleLengthValue;
asn_struct_free_f VehicleLengthValue_free;
asn_struct_print_f VehicleLengthValue_print;
asn_constr_check_f VehicleLengthValue_constraint;
ber_type_decoder_f VehicleLengthValue_decode_ber;
der_type_encoder_f VehicleLengthValue_encode_der;
xer_type_decoder_f VehicleLengthValue_decode_xer;
xer_type_encoder_f VehicleLengthValue_encode_xer;
per_type_decoder_f VehicleLengthValue_decode_uper;
per_type_encoder_f VehicleLengthValue_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleLengthValue_H_ */
#include "asn_internal.h"
