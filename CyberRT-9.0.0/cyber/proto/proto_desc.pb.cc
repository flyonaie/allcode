// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/proto_desc.proto

#include "cyber/proto/proto_desc.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_cyber_2fproto_2fproto_5fdesc_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ProtoDesc_cyber_2fproto_2fproto_5fdesc_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class ProtoDescDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ProtoDesc> _instance;
} _ProtoDesc_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
static void InitDefaultsscc_info_ProtoDesc_cyber_2fproto_2fproto_5fdesc_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::cyber::proto::_ProtoDesc_default_instance_;
    new (ptr) ::apollo::cyber::proto::ProtoDesc();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ProtoDesc_cyber_2fproto_2fproto_5fdesc_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ProtoDesc_cyber_2fproto_2fproto_5fdesc_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_cyber_2fproto_2fproto_5fdesc_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_cyber_2fproto_2fproto_5fdesc_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_cyber_2fproto_2fproto_5fdesc_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_cyber_2fproto_2fproto_5fdesc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ProtoDesc, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ProtoDesc, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ProtoDesc, desc_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ProtoDesc, dependencies_),
  0,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::apollo::cyber::proto::ProtoDesc)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::cyber::proto::_ProtoDesc_default_instance_),
};

const char descriptor_table_protodef_cyber_2fproto_2fproto_5fdesc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034cyber/proto/proto_desc.proto\022\022apollo.c"
  "yber.proto\"N\n\tProtoDesc\022\014\n\004desc\030\001 \001(\014\0223\n"
  "\014dependencies\030\002 \003(\0132\035.apollo.cyber.proto"
  ".ProtoDesc"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_sccs[1] = {
  &scc_info_ProtoDesc_cyber_2fproto_2fproto_5fdesc_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto = {
  false, false, descriptor_table_protodef_cyber_2fproto_2fproto_5fdesc_2eproto, "cyber/proto/proto_desc.proto", 130,
  &descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_once, descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_sccs, descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_cyber_2fproto_2fproto_5fdesc_2eproto::offsets,
  file_level_metadata_cyber_2fproto_2fproto_5fdesc_2eproto, 1, file_level_enum_descriptors_cyber_2fproto_2fproto_5fdesc_2eproto, file_level_service_descriptors_cyber_2fproto_2fproto_5fdesc_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_cyber_2fproto_2fproto_5fdesc_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto)), true);
namespace apollo {
namespace cyber {
namespace proto {

// ===================================================================

class ProtoDesc::_Internal {
 public:
  using HasBits = decltype(std::declval<ProtoDesc>()._has_bits_);
  static void set_has_desc(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

ProtoDesc::ProtoDesc(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  dependencies_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.cyber.proto.ProtoDesc)
}
ProtoDesc::ProtoDesc(const ProtoDesc& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      dependencies_(from.dependencies_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  desc_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_desc()) {
    desc_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_desc(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.ProtoDesc)
}

void ProtoDesc::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ProtoDesc_cyber_2fproto_2fproto_5fdesc_2eproto.base);
  desc_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ProtoDesc::~ProtoDesc() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.ProtoDesc)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ProtoDesc::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  desc_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ProtoDesc::ArenaDtor(void* object) {
  ProtoDesc* _this = reinterpret_cast< ProtoDesc* >(object);
  (void)_this;
}
void ProtoDesc::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ProtoDesc::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ProtoDesc& ProtoDesc::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ProtoDesc_cyber_2fproto_2fproto_5fdesc_2eproto.base);
  return *internal_default_instance();
}


void ProtoDesc::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.ProtoDesc)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  dependencies_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    desc_.ClearNonDefaultToEmpty();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProtoDesc::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional bytes desc = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_desc();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .apollo.cyber.proto.ProtoDesc dependencies = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_dependencies(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ProtoDesc::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.ProtoDesc)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes desc = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_desc(), target);
  }

  // repeated .apollo.cyber.proto.ProtoDesc dependencies = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_dependencies_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_dependencies(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.ProtoDesc)
  return target;
}

size_t ProtoDesc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.ProtoDesc)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.cyber.proto.ProtoDesc dependencies = 2;
  total_size += 1UL * this->_internal_dependencies_size();
  for (const auto& msg : this->dependencies_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional bytes desc = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_desc());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProtoDesc::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.cyber.proto.ProtoDesc)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoDesc* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ProtoDesc>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.cyber.proto.ProtoDesc)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.cyber.proto.ProtoDesc)
    MergeFrom(*source);
  }
}

void ProtoDesc::MergeFrom(const ProtoDesc& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.ProtoDesc)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  dependencies_.MergeFrom(from.dependencies_);
  if (from._internal_has_desc()) {
    _internal_set_desc(from._internal_desc());
  }
}

void ProtoDesc::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.cyber.proto.ProtoDesc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoDesc::CopyFrom(const ProtoDesc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.ProtoDesc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoDesc::IsInitialized() const {
  return true;
}

void ProtoDesc::InternalSwap(ProtoDesc* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  dependencies_.InternalSwap(&other->dependencies_);
  desc_.Swap(&other->desc_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata ProtoDesc::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::cyber::proto::ProtoDesc* Arena::CreateMaybeMessage< ::apollo::cyber::proto::ProtoDesc >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::cyber::proto::ProtoDesc >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
