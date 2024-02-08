# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: cyber/proto/qos_profile.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='cyber/proto/qos_profile.proto',
  package='apollo.cyber.proto',
  syntax='proto2',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x1d\x63yber/proto/qos_profile.proto\x12\x12\x61pollo.cyber.proto\"\x9f\x02\n\nQosProfile\x12H\n\x07history\x18\x01 \x01(\x0e\x32$.apollo.cyber.proto.QosHistoryPolicy:\x11HISTORY_KEEP_LAST\x12\x10\n\x05\x64\x65pth\x18\x02 \x01(\r:\x01\x31\x12\x0e\n\x03mps\x18\x03 \x01(\r:\x01\x30\x12S\n\x0breliability\x18\x04 \x01(\x0e\x32(.apollo.cyber.proto.QosReliabilityPolicy:\x14RELIABILITY_RELIABLE\x12P\n\ndurability\x18\x05 \x01(\x0e\x32\'.apollo.cyber.proto.QosDurabilityPolicy:\x13\x44URABILITY_VOLATILE*[\n\x10QosHistoryPolicy\x12\x1a\n\x16HISTORY_SYSTEM_DEFAULT\x10\x00\x12\x15\n\x11HISTORY_KEEP_LAST\x10\x01\x12\x14\n\x10HISTORY_KEEP_ALL\x10\x02*m\n\x14QosReliabilityPolicy\x12\x1e\n\x1aRELIABILITY_SYSTEM_DEFAULT\x10\x00\x12\x18\n\x14RELIABILITY_RELIABLE\x10\x01\x12\x1b\n\x17RELIABILITY_BEST_EFFORT\x10\x02*m\n\x13QosDurabilityPolicy\x12\x1d\n\x19\x44URABILITY_SYSTEM_DEFAULT\x10\x00\x12\x1e\n\x1a\x44URABILITY_TRANSIENT_LOCAL\x10\x01\x12\x17\n\x13\x44URABILITY_VOLATILE\x10\x02'
)

_QOSHISTORYPOLICY = _descriptor.EnumDescriptor(
  name='QosHistoryPolicy',
  full_name='apollo.cyber.proto.QosHistoryPolicy',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='HISTORY_SYSTEM_DEFAULT', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='HISTORY_KEEP_LAST', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='HISTORY_KEEP_ALL', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=343,
  serialized_end=434,
)
_sym_db.RegisterEnumDescriptor(_QOSHISTORYPOLICY)

QosHistoryPolicy = enum_type_wrapper.EnumTypeWrapper(_QOSHISTORYPOLICY)
_QOSRELIABILITYPOLICY = _descriptor.EnumDescriptor(
  name='QosReliabilityPolicy',
  full_name='apollo.cyber.proto.QosReliabilityPolicy',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='RELIABILITY_SYSTEM_DEFAULT', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='RELIABILITY_RELIABLE', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='RELIABILITY_BEST_EFFORT', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=436,
  serialized_end=545,
)
_sym_db.RegisterEnumDescriptor(_QOSRELIABILITYPOLICY)

QosReliabilityPolicy = enum_type_wrapper.EnumTypeWrapper(_QOSRELIABILITYPOLICY)
_QOSDURABILITYPOLICY = _descriptor.EnumDescriptor(
  name='QosDurabilityPolicy',
  full_name='apollo.cyber.proto.QosDurabilityPolicy',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='DURABILITY_SYSTEM_DEFAULT', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='DURABILITY_TRANSIENT_LOCAL', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='DURABILITY_VOLATILE', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=547,
  serialized_end=656,
)
_sym_db.RegisterEnumDescriptor(_QOSDURABILITYPOLICY)

QosDurabilityPolicy = enum_type_wrapper.EnumTypeWrapper(_QOSDURABILITYPOLICY)
HISTORY_SYSTEM_DEFAULT = 0
HISTORY_KEEP_LAST = 1
HISTORY_KEEP_ALL = 2
RELIABILITY_SYSTEM_DEFAULT = 0
RELIABILITY_RELIABLE = 1
RELIABILITY_BEST_EFFORT = 2
DURABILITY_SYSTEM_DEFAULT = 0
DURABILITY_TRANSIENT_LOCAL = 1
DURABILITY_VOLATILE = 2



_QOSPROFILE = _descriptor.Descriptor(
  name='QosProfile',
  full_name='apollo.cyber.proto.QosProfile',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='history', full_name='apollo.cyber.proto.QosProfile.history', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='depth', full_name='apollo.cyber.proto.QosProfile.depth', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='mps', full_name='apollo.cyber.proto.QosProfile.mps', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='reliability', full_name='apollo.cyber.proto.QosProfile.reliability', index=3,
      number=4, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='durability', full_name='apollo.cyber.proto.QosProfile.durability', index=4,
      number=5, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=2,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=54,
  serialized_end=341,
)

_QOSPROFILE.fields_by_name['history'].enum_type = _QOSHISTORYPOLICY
_QOSPROFILE.fields_by_name['reliability'].enum_type = _QOSRELIABILITYPOLICY
_QOSPROFILE.fields_by_name['durability'].enum_type = _QOSDURABILITYPOLICY
DESCRIPTOR.message_types_by_name['QosProfile'] = _QOSPROFILE
DESCRIPTOR.enum_types_by_name['QosHistoryPolicy'] = _QOSHISTORYPOLICY
DESCRIPTOR.enum_types_by_name['QosReliabilityPolicy'] = _QOSRELIABILITYPOLICY
DESCRIPTOR.enum_types_by_name['QosDurabilityPolicy'] = _QOSDURABILITYPOLICY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

QosProfile = _reflection.GeneratedProtocolMessageType('QosProfile', (_message.Message,), {
  'DESCRIPTOR' : _QOSPROFILE,
  '__module__' : 'cyber.proto.qos_profile_pb2'
  # @@protoc_insertion_point(class_scope:apollo.cyber.proto.QosProfile)
  })
_sym_db.RegisterMessage(QosProfile)


# @@protoc_insertion_point(module_scope)
