/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: identity.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "identity.pb-c.h"
void   wickr__proto__identity__init
                     (Wickr__Proto__Identity         *message)
{
  static const Wickr__Proto__Identity init_value = WICKR__PROTO__IDENTITY__INIT;
  *message = init_value;
}
size_t wickr__proto__identity__get_packed_size
                     (const Wickr__Proto__Identity *message)
{
  assert(message->base.descriptor == &wickr__proto__identity__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t wickr__proto__identity__pack
                     (const Wickr__Proto__Identity *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &wickr__proto__identity__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t wickr__proto__identity__pack_to_buffer
                     (const Wickr__Proto__Identity *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &wickr__proto__identity__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Wickr__Proto__Identity *
       wickr__proto__identity__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Wickr__Proto__Identity *)
     protobuf_c_message_unpack (&wickr__proto__identity__descriptor,
                                allocator, len, data);
}
void   wickr__proto__identity__free_unpacked
                     (Wickr__Proto__Identity *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &wickr__proto__identity__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   wickr__proto__identity_chain__init
                     (Wickr__Proto__IdentityChain         *message)
{
  static const Wickr__Proto__IdentityChain init_value = WICKR__PROTO__IDENTITY_CHAIN__INIT;
  *message = init_value;
}
size_t wickr__proto__identity_chain__get_packed_size
                     (const Wickr__Proto__IdentityChain *message)
{
  assert(message->base.descriptor == &wickr__proto__identity_chain__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t wickr__proto__identity_chain__pack
                     (const Wickr__Proto__IdentityChain *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &wickr__proto__identity_chain__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t wickr__proto__identity_chain__pack_to_buffer
                     (const Wickr__Proto__IdentityChain *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &wickr__proto__identity_chain__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Wickr__Proto__IdentityChain *
       wickr__proto__identity_chain__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Wickr__Proto__IdentityChain *)
     protobuf_c_message_unpack (&wickr__proto__identity_chain__descriptor,
                                allocator, len, data);
}
void   wickr__proto__identity_chain__free_unpacked
                     (Wickr__Proto__IdentityChain *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &wickr__proto__identity_chain__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue wickr__proto__identity__type__enum_values_by_number[2] =
{
  { "IDENTITY_TYPE_ROOT", "WICKR__PROTO__IDENTITY__TYPE__IDENTITY_TYPE_ROOT", 0 },
  { "IDENTITY_TYPE_NODE", "WICKR__PROTO__IDENTITY__TYPE__IDENTITY_TYPE_NODE", 1 },
};
static const ProtobufCIntRange wickr__proto__identity__type__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex wickr__proto__identity__type__enum_values_by_name[2] =
{
  { "IDENTITY_TYPE_NODE", 1 },
  { "IDENTITY_TYPE_ROOT", 0 },
};
const ProtobufCEnumDescriptor wickr__proto__identity__type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "wickr.proto.Identity.Type",
  "Type",
  "Wickr__Proto__Identity__Type",
  "wickr.proto",
  2,
  wickr__proto__identity__type__enum_values_by_number,
  2,
  wickr__proto__identity__type__enum_values_by_name,
  1,
  wickr__proto__identity__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const protobuf_c_boolean wickr__proto__identity__is_private__default_value = 0;
static const ProtobufCFieldDescriptor wickr__proto__identity__field_descriptors[5] =
{
  {
    "identifier",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Wickr__Proto__Identity, has_identifier),
    offsetof(Wickr__Proto__Identity, identifier),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sig_key",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Wickr__Proto__Identity, has_sig_key),
    offsetof(Wickr__Proto__Identity, sig_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "signature",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Wickr__Proto__Identity, has_signature),
    offsetof(Wickr__Proto__Identity, signature),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Wickr__Proto__Identity, has_type),
    offsetof(Wickr__Proto__Identity, type),
    &wickr__proto__identity__type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "is_private",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Wickr__Proto__Identity, has_is_private),
    offsetof(Wickr__Proto__Identity, is_private),
    NULL,
    &wickr__proto__identity__is_private__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wickr__proto__identity__field_indices_by_name[] = {
  0,   /* field[0] = identifier */
  4,   /* field[4] = is_private */
  1,   /* field[1] = sig_key */
  2,   /* field[2] = signature */
  3,   /* field[3] = type */
};
static const ProtobufCIntRange wickr__proto__identity__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor wickr__proto__identity__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "wickr.proto.Identity",
  "Identity",
  "Wickr__Proto__Identity",
  "wickr.proto",
  sizeof(Wickr__Proto__Identity),
  5,
  wickr__proto__identity__field_descriptors,
  wickr__proto__identity__field_indices_by_name,
  1,  wickr__proto__identity__number_ranges,
  (ProtobufCMessageInit) wickr__proto__identity__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor wickr__proto__identity_chain__field_descriptors[2] =
{
  {
    "root",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Wickr__Proto__IdentityChain, root),
    &wickr__proto__identity__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "node",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Wickr__Proto__IdentityChain, node),
    &wickr__proto__identity__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wickr__proto__identity_chain__field_indices_by_name[] = {
  1,   /* field[1] = node */
  0,   /* field[0] = root */
};
static const ProtobufCIntRange wickr__proto__identity_chain__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor wickr__proto__identity_chain__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "wickr.proto.IdentityChain",
  "IdentityChain",
  "Wickr__Proto__IdentityChain",
  "wickr.proto",
  sizeof(Wickr__Proto__IdentityChain),
  2,
  wickr__proto__identity_chain__field_descriptors,
  wickr__proto__identity_chain__field_indices_by_name,
  1,  wickr__proto__identity_chain__number_ranges,
  (ProtobufCMessageInit) wickr__proto__identity_chain__init,
  NULL,NULL,NULL    /* reserved[123] */
};
