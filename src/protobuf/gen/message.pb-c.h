/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: message.proto */

#ifndef PROTOBUF_C_message_2eproto__INCLUDED
#define PROTOBUF_C_message_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Wickr__Proto__Packet Wickr__Proto__Packet;
typedef struct _Wickr__Proto__Payload Wickr__Proto__Payload;
typedef struct _Wickr__Proto__Payload__Meta Wickr__Proto__Payload__Meta;
typedef struct _Wickr__Proto__Payload__Meta__Ephemerality Wickr__Proto__Payload__Meta__Ephemerality;


/* --- enums --- */


/* --- messages --- */

struct  _Wickr__Proto__Packet
{
  ProtobufCMessage base;
  ProtobufCBinaryData enc_header;
  ProtobufCBinaryData enc_payload;
};
#define WICKR__PROTO__PACKET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wickr__proto__packet__descriptor) \
    , {0,NULL}, {0,NULL} }


struct  _Wickr__Proto__Payload__Meta__Ephemerality
{
  ProtobufCMessage base;
  uint64_t ttl;
  protobuf_c_boolean has_bor;
  uint64_t bor;
};
#define WICKR__PROTO__PAYLOAD__META__EPHEMERALITY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wickr__proto__payload__meta__ephemerality__descriptor) \
    , 0, 0, 0 }


struct  _Wickr__Proto__Payload__Meta
{
  ProtobufCMessage base;
  Wickr__Proto__Payload__Meta__Ephemerality *ephemerality_settings;
  protobuf_c_boolean has_channel_tag;
  ProtobufCBinaryData channel_tag;
  protobuf_c_boolean has_content_type;
  uint32_t content_type;
};
#define WICKR__PROTO__PAYLOAD__META__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wickr__proto__payload__meta__descriptor) \
    , NULL, 0, {0,NULL}, 0, 0 }


struct  _Wickr__Proto__Payload
{
  ProtobufCMessage base;
  Wickr__Proto__Payload__Meta *metadata;
  ProtobufCBinaryData body;
};
#define WICKR__PROTO__PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wickr__proto__payload__descriptor) \
    , NULL, {0,NULL} }


/* Wickr__Proto__Packet methods */
void   wickr__proto__packet__init
                     (Wickr__Proto__Packet         *message);
size_t wickr__proto__packet__get_packed_size
                     (const Wickr__Proto__Packet   *message);
size_t wickr__proto__packet__pack
                     (const Wickr__Proto__Packet   *message,
                      uint8_t             *out);
size_t wickr__proto__packet__pack_to_buffer
                     (const Wickr__Proto__Packet   *message,
                      ProtobufCBuffer     *buffer);
Wickr__Proto__Packet *
       wickr__proto__packet__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   wickr__proto__packet__free_unpacked
                     (Wickr__Proto__Packet *message,
                      ProtobufCAllocator *allocator);
/* Wickr__Proto__Payload__Meta__Ephemerality methods */
void   wickr__proto__payload__meta__ephemerality__init
                     (Wickr__Proto__Payload__Meta__Ephemerality         *message);
/* Wickr__Proto__Payload__Meta methods */
void   wickr__proto__payload__meta__init
                     (Wickr__Proto__Payload__Meta         *message);
/* Wickr__Proto__Payload methods */
void   wickr__proto__payload__init
                     (Wickr__Proto__Payload         *message);
size_t wickr__proto__payload__get_packed_size
                     (const Wickr__Proto__Payload   *message);
size_t wickr__proto__payload__pack
                     (const Wickr__Proto__Payload   *message,
                      uint8_t             *out);
size_t wickr__proto__payload__pack_to_buffer
                     (const Wickr__Proto__Payload   *message,
                      ProtobufCBuffer     *buffer);
Wickr__Proto__Payload *
       wickr__proto__payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   wickr__proto__payload__free_unpacked
                     (Wickr__Proto__Payload *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Wickr__Proto__Packet_Closure)
                 (const Wickr__Proto__Packet *message,
                  void *closure_data);
typedef void (*Wickr__Proto__Payload__Meta__Ephemerality_Closure)
                 (const Wickr__Proto__Payload__Meta__Ephemerality *message,
                  void *closure_data);
typedef void (*Wickr__Proto__Payload__Meta_Closure)
                 (const Wickr__Proto__Payload__Meta *message,
                  void *closure_data);
typedef void (*Wickr__Proto__Payload_Closure)
                 (const Wickr__Proto__Payload *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor wickr__proto__packet__descriptor;
extern const ProtobufCMessageDescriptor wickr__proto__payload__descriptor;
extern const ProtobufCMessageDescriptor wickr__proto__payload__meta__descriptor;
extern const ProtobufCMessageDescriptor wickr__proto__payload__meta__ephemerality__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_message_2eproto__INCLUDED */
