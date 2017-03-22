//
//  enginxDefinitions.h
//  enginx
//
//  Created by stephenw on 2017/3/15.
//  Copyright © 2017年 stephenw.cc. All rights reserved.
//
/**
 define all used enginx macros here
 */
#ifndef enginxDefinitions_h
#define enginxDefinitions_h

#include <iostream>
#include <string>
#include <vector>
#ifndef ENGINX_NAMESPACE
#define ENGINX_NAMESPACE enginx
#endif

#ifndef ENGINX_NAMESPACE_BEGIN
#define ENGINX_NAMESPACE_BEGIN namespace ENGINX_NAMESPACE {
#endif

#ifndef ENGINX_NAMESPACE_END
#define ENGINX_NAMESPACE_END }
#endif
//error code def
extern int const ENGINX_ERROR_BAD_PARAMETER;
//config fields def
extern const char* ENGINX_CONFIG_FIELD_SERVER_NAME;
extern const char* ENGINX_CONFIG_FIELD_SCHEMA;
extern const char* ENGINX_CONFIG_FIELD_PORT;
extern const char* ENGINX_CONFIG_FIELD_ACTION;
extern const char* ENGINX_CONFIG_FIELD_LOCATION;

//default value def
extern const char* ENGINX_CONFIG_FIELD_DEF_DEFAULT_SERVER;
extern const char* ENGINX_CONFIG_FIELD_DEF_SERVER_WILD;


//internal vars def
extern const char* ENGINX_CONFIG_VAR_DEF_REQUEST_URI;
extern const char* ENGINX_CONFIG_VAR_DEF_HOST;
extern const char* ENGINX_CONFIG_VAR_DEF_SCHEME;
extern const char* ENGINX_CONFIG_VAR_DEF_QUERY_STRING;
extern const char* ENGINX_CONFIG_VAR_DEF_FRAGMENT;

//action instruction def
extern const char* ENGINX_CONFIG_INSTRUCTION_DECODE;
extern const char* ENGINX_CONFIG_INSTRUCTION_ENCODE;
extern const char* ENGINX_CONFIG_INSTRUCTION_REWRITE;
extern const char* ENGINX_CONFIG_INSTRUCTION_PROXY_PASS;
extern const char* ENGINX_CONFIG_INSTRUCTION_RETURN;
extern const char* ENGINX_CONFIG_INSTRUCTION_TEMPORARILY;

//location operators
extern const char* ENGINX_CONFIG_OPERATOR_EQUAL;
extern const char* ENGINX_CONFIG_OPERATOR_NORMAL_HEAD;
extern const char* ENGINX_CONFIG_OPERATOR_REG_NO_CASE_SENSITIVE;
extern const char* ENGINX_CONFIG_OPERATOR_REG_CASE_SENSITIVE;
extern const char* ENGINX_CONFIG_OPERATOR_WILD_COMPARE;

ENGINX_NAMESPACE_BEGIN
class EnginxError {
public:
  std::string message;
  int code;
  EnginxError(const char*msg, int code);
  EnginxError() { code = 0; };
};

void SplitString(const std::string& s, std::vector<std::string>& v, const std::string& c);

std::string UrlEncode(const std::string& str);
std::string UrlDecode(const std::string& str);

ENGINX_NAMESPACE_END

#endif /* enginxDefinitions_h */
