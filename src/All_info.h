#ifndef _ALL_INFOR_H_
#define _ALL_INFOR_H_
#include "Arduino.h"
#define BASE_URL "siot.soict.ai"
#define PATH_GET_VERSION ""
#define URI_CHECK_COMMUNICATION "/communication"
#define URI_GET_VERSION "/version"
#define URI_GET_BOARD_ID "/boardId"
#define URI_GET_FIRMWARE "http://siot.soict.ai/updateFirmware" 
#define STATUS_CODE_OKE 200
#define SSID_DEFAULT "SOICT_CORE_BOARD"

// http://siot.soict.ai/devices/hb20211223
#define KEY "Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiJhODE0NDNlZi1lMWNjLTQ0Y2YtYTE1Ny03Y2U2MmIwOWVlN2QiLCJpYXQiOjE2NzE2MzA3MDV9.v4iBfaepgb5oKXuWeDpTgXE9d-vxysQE-C7LGYv_SQQ"
#define CONTENT_TYPE "application/json"
#define Platform "Rev4"

#define URL_ID "http://siot.soict.ai/api/devices/reader_rs232_to_rs485-r3p1v/attributes/id-unb9n"
//#define URL_TURNONTIME "http://siot.soict.ai/api/devices/hb20211223/attributes/turnontime-qmri2"
//#define URL_EATING  "http://siot.soict.ai/api/devices/hb20211223/attributes/eating-j8ov5"
//#define URL_DISTANCE  "http://siot.soict.ai/api/devices/hb20211223/attributes/distance-pz1q8"

#define MAX_WIDTH 128
#define MAX_HIGHT 64
#endif
