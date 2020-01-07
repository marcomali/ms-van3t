/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "DENMdef.asn1"
 * 	`asn1c -fincludes-quoted -gen-PER`
 */

#include "LocationContainer.h"

static asn_TYPE_member_t asn_MBR_LocationContainer_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LocationContainer, eventSpeed),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Speed,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eventSpeed"
		},
	{ ATF_POINTER, 1, offsetof(struct LocationContainer, eventPositionHeading),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Heading,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eventPositionHeading"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LocationContainer, traces),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Traces,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"traces"
		},
	{ ATF_POINTER, 1, offsetof(struct LocationContainer, roadType),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"roadType"
		},
};
static const int asn_MAP_LocationContainer_oms_1[] = { 0, 1, 3 };
static const ber_tlv_tag_t asn_DEF_LocationContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LocationContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eventPositionHeading */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* traces */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* roadType */
};
static asn_SEQUENCE_specifics_t asn_SPC_LocationContainer_specs_1 = {
	sizeof(struct LocationContainer),
	offsetof(struct LocationContainer, _asn_ctx),
	asn_MAP_LocationContainer_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LocationContainer_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LocationContainer = {
	"LocationContainer",
	"LocationContainer",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LocationContainer_tags_1,
	sizeof(asn_DEF_LocationContainer_tags_1)
		/sizeof(asn_DEF_LocationContainer_tags_1[0]), /* 1 */
	asn_DEF_LocationContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_LocationContainer_tags_1)
		/sizeof(asn_DEF_LocationContainer_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LocationContainer_1,
	4,	/* Elements count */
	&asn_SPC_LocationContainer_specs_1	/* Additional specs */
};

