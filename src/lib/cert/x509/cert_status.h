/*
* Result enums
* (C) 2013 Jack Lloyd
*
* Distributed under the terms of the Botan license
*/

#ifndef BOTAN_X509_PATH_RESULT_H__
#define BOTAN_X509_PATH_RESULT_H__

#include <string>

namespace Botan {

enum Certificate_Status_Code {
   VERIFIED,
   UNKNOWN_X509_ERROR,
   CANNOT_ESTABLISH_TRUST,
   CERT_CHAIN_TOO_LONG,
   SIGNATURE_ERROR,
   POLICY_ERROR,
   INVALID_USAGE,

   SIGNATURE_METHOD_TOO_WEAK,
   UNTRUSTED_HASH,

   CERT_MULTIPLE_ISSUERS_FOUND,

   CERT_FORMAT_ERROR,
   CERT_ISSUER_NOT_FOUND,
   CERT_NOT_YET_VALID,
   CERT_HAS_EXPIRED,
   CERT_IS_REVOKED,

   NO_REVOCATION_DATA,

   CRL_FORMAT_ERROR,
   CRL_NOT_YET_VALID,
   CRL_HAS_EXPIRED,
   CRL_NOT_FOUND,
   CRL_BAD_SIGNATURE,

   OCSP_CERT_NOT_LISTED,
   OCSP_NOT_YET_VALID,
   OCSP_EXPIRED,
   OCSP_BAD_STATUS,
   OCSP_RESPONSE_GOOD,

   CA_CERT_CANNOT_SIGN,
   CA_CERT_NOT_FOR_CERT_ISSUER,
   CA_CERT_NOT_FOR_CRL_ISSUER
};


}

#endif