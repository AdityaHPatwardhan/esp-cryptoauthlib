
#include "atcacert/atcacert_def.h"

uint8_t g_signer_1_ca_public_key[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const atcacert_cert_element_t g_cert_elements_1_signer[] = {
    {
        .id         = "IssueDate",
        .device_loc = {
            .zone      = DEVZONE_DATA,
            .slot      = 14,
            .is_genkey = 0,
            .offset    = 35-13,
            .count     = 13
        },
        .cert_loc   = {
            .offset = 92,
            .count  = 13
        }
    },
    {
        .id         = "ExpireDate",
        .device_loc = {
            .zone      = DEVZONE_DATA,
            .slot      = 14,
            .is_genkey = 0,
            .offset    = 50-13,
            .count     = 13
        },
        .cert_loc   = {
            .offset = 107,
            .count  = 13
        }
    }
};

const uint8_t g_cert_template_1_signer[] = {
    0x30, 0x82, 0x01, 0xba, 0x30, 0x82, 0x01, 0x60,  0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x14, 0x61,
    0x10, 0x64, 0x51, 0x1a, 0xe6, 0xc0, 0xd8, 0xb6,  0xc4, 0x00, 0xc1, 0x97, 0x7d, 0x1c, 0xfa, 0xcd,
    0xbc, 0x4c, 0x6c, 0x30, 0x0a, 0x06, 0x08, 0x2a,  0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30,
    0x27, 0x31, 0x0c, 0x30, 0x0a, 0x06, 0x03, 0x55,  0x04, 0x0a, 0x0c, 0x03, 0x45, 0x53, 0x50, 0x31,
    0x17, 0x30, 0x15, 0x06, 0x03, 0x55, 0x04, 0x03,  0x0c, 0x0e, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65,
    0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41,  0x30, 0x1e, 0x17, 0x0d, 0x32, 0x30, 0x30, 0x32,
    0x31, 0x37, 0x32, 0x30, 0x30, 0x30, 0x30, 0x31,  0x5a, 0x17, 0x0d, 0x32, 0x31, 0x30, 0x32, 0x31,
    0x36, 0x32, 0x30, 0x30, 0x30, 0x30, 0x31, 0x5a,  0x30, 0x2b, 0x31, 0x0c, 0x30, 0x0a, 0x06, 0x03,
    0x55, 0x04, 0x0a, 0x0c, 0x03, 0x45, 0x53, 0x50,  0x31, 0x1b, 0x30, 0x19, 0x06, 0x03, 0x55, 0x04,
    0x03, 0x0c, 0x12, 0x53, 0x61, 0x6d, 0x70, 0x6c,  0x65, 0x20, 0x53, 0x69, 0x67, 0x6e, 0x65, 0x72,
    0x20, 0x46, 0x46, 0x46, 0x46, 0x30, 0x59, 0x30,  0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d,
    0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce,  0x3d, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04,
    0x48, 0xbf, 0xcf, 0x23, 0xca, 0x3d, 0x80, 0x91,  0x30, 0x20, 0x9c, 0x31, 0x6a, 0xd1, 0x24, 0x87,
    0x48, 0xc8, 0x4e, 0xcb, 0xf9, 0xaf, 0xc1, 0x7b,  0x90, 0x76, 0x28, 0xbd, 0x47, 0x06, 0xe6, 0x6e,
    0xba, 0x8a, 0x3c, 0x0d, 0xb5, 0xfc, 0x6c, 0x98,  0xf3, 0xd7, 0x74, 0x57, 0x82, 0x9f, 0x54, 0x09,
    0xf6, 0x3d, 0x61, 0x48, 0x85, 0x3c, 0xc7, 0xdd,  0xca, 0xf9, 0x24, 0x13, 0x79, 0x30, 0xdc, 0xa6,
    0xa3, 0x66, 0x30, 0x64, 0x30, 0x12, 0x06, 0x03,  0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x08,
    0x30, 0x06, 0x01, 0x01, 0xff, 0x02, 0x01, 0x00,  0x30, 0x0e, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01,
    0x01, 0xff, 0x04, 0x04, 0x03, 0x02, 0x01, 0x86,  0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04,
    0x16, 0x04, 0x14, 0xd0, 0x9f, 0x1c, 0x0e, 0x11,  0xed, 0x7a, 0x5b, 0x0c, 0x7e, 0x98, 0xd2, 0x5f,
    0x25, 0xf1, 0xd2, 0x7a, 0xcb, 0x34, 0x62, 0x30,  0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x18,
    0x30, 0x16, 0x80, 0x14, 0x47, 0x39, 0x71, 0x47,  0x6e, 0x01, 0x26, 0x7f, 0x3a, 0x7c, 0x8f, 0x3f,
    0x68, 0x97, 0x17, 0x35, 0xe6, 0x5d, 0x4a, 0xba,  0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce,
    0x3d, 0x04, 0x03, 0x02, 0x03, 0x48, 0x00, 0x30,  0x45, 0x02, 0x20, 0x04, 0xfd, 0xc5, 0x61, 0x75,
    0x4c, 0x26, 0x13, 0xec, 0x4e, 0xc6, 0xfa, 0xb4,  0x6d, 0xd9, 0x22, 0x0a, 0x85, 0x4d, 0xff, 0xb7,
    0x73, 0xda, 0xc6, 0x6d, 0x92, 0x0f, 0x56, 0x2e,  0x9e, 0x2d, 0x0f, 0x02, 0x21, 0x00, 0xe0, 0x36,
    0x1f, 0xc7, 0x7b, 0xdf, 0x70, 0xef, 0xab, 0xab,  0xc4, 0x58, 0x64, 0xb3, 0x02, 0x7d, 0xbb, 0x9e,
    0x5e, 0x37, 0xdd, 0xbd, 0xb0, 0x57, 0x4f, 0x09,  0xb1, 0x87, 0xe0, 0xae, 0xf9, 0xbf
};

const atcacert_def_t g_cert_def_1_signer = {
    .type                   = CERTTYPE_X509,
    .template_id            = 1,
    .chain_id               = 0,
    .private_key_slot       = 0,
    .sn_source              = SNSRC_STORED,
    .cert_sn_dev_loc        = {
        .zone      = DEVZONE_DATA,
        .slot      = 14,
        .is_genkey = 0,
        .offset    = 20-20,
        .count     = 20
    },
    .issue_date_format      = DATEFMT_RFC5280_UTC,
    .expire_date_format     = DATEFMT_RFC5280_UTC,
    .tbs_cert_loc           = {
        .offset = 4,
        .count  = 356
    },
    .expire_years           = 1,
    .public_key_dev_loc     = {
        .zone      = DEVZONE_DATA,
        .slot      = 11,
        .is_genkey = 0,
        .offset    = 0,
        .count     = 72
    },
    .comp_cert_dev_loc      = {
        .zone      = DEVZONE_DATA,
        .slot      = 12,
        .is_genkey = 0,
        .offset    = 0,
        .count     = 72
    },
    .std_cert_elements      = {
        { // STDCERT_PUBLIC_KEY
            .offset = 192,
            .count  = 64
        },
        { // STDCERT_SIGNATURE
            .offset = 372,
            .count  = 74
        },
        { // STDCERT_ISSUE_DATE
            .offset = 92,
            .count  = 13
        },
        { // STDCERT_EXPIRE_DATE
            .offset = 107,
            .count  = 13
        },
        { // STDCERT_SIGNER_ID
            .offset = 161,
            .count  = 4
        },
        { // STDCERT_CERT_SN
            .offset = 15,
            .count  = 20
        },
        { // STDCERT_AUTH_KEY_ID
            .offset = 340,
            .count  = 20
        },
        { // STDCERT_SUBJ_KEY_ID
            .offset = 307,
            .count  = 20
        }
    },
    .cert_elements          = g_cert_elements_1_signer,
    .cert_elements_count    = sizeof(g_cert_elements_1_signer) / sizeof(g_cert_elements_1_signer[0]),
    .cert_template          = g_cert_template_1_signer,
    .cert_template_size     = sizeof(g_cert_template_1_signer)
};