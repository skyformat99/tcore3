// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_lazy_dependencies_custom_option.proto

#include <google/protobuf/unittest_lazy_dependencies_custom_option.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_unittest {
namespace lazy_imports {
class LazyMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LazyMessage>
      _instance;
} _LazyMessage_default_instance_;
}  // namespace lazy_imports
}  // namespace protobuf_unittest
namespace protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto {
static void InitDefaultsLazyMessage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protobuf_unittest::lazy_imports::_LazyMessage_default_instance_;
    new (ptr) ::protobuf_unittest::lazy_imports::LazyMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobuf_unittest::lazy_imports::LazyMessage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_LazyMessage =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLazyMessage}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_LazyMessage.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_unittest::lazy_imports::LazyMessage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_unittest::lazy_imports::LazyMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_unittest::lazy_imports::LazyMessage, a_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::protobuf_unittest::lazy_imports::LazyMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::protobuf_unittest::lazy_imports::_LazyMessage_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/protobuf/unittest_lazy_dependencies_custom_option.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n>google/protobuf/unittest_lazy_dependen"
      "cies_custom_option.proto\022\036protobuf_unitt"
      "est.lazy_imports\0325google/protobuf/unitte"
      "st_lazy_dependencies_enum.proto\032 google/"
      "protobuf/descriptor.proto\"\030\n\013LazyMessage"
      "\022\t\n\001a\030\001 \001(\005:s\n\020lazy_enum_option\022\037.google"
      ".protobuf.MessageOptions\030\357\237\213B \001(\0162(.prot"
      "obuf_unittest.lazy_imports.LazyEnum:\013LAZ"
      "Y_ENUM_1B4B$UnittestLazyImportsCustomOpt"
      "ionProtoH\001\200\001\001\210\001\001\220\001\001\370\001\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 382);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_lazy_dependencies_custom_option.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fdescriptor_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto
namespace protobuf_unittest {
namespace lazy_imports {

// ===================================================================

void LazyMessage::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LazyMessage::kAFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LazyMessage::LazyMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::scc_info_LazyMessage.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest.lazy_imports.LazyMessage)
}
LazyMessage::LazyMessage(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::scc_info_LazyMessage.base);
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.lazy_imports.LazyMessage)
}
LazyMessage::LazyMessage(const LazyMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  a_ = from.a_;
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.lazy_imports.LazyMessage)
}

void LazyMessage::SharedCtor() {
  a_ = 0;
}

LazyMessage::~LazyMessage() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.lazy_imports.LazyMessage)
  SharedDtor();
}

void LazyMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
}

void LazyMessage::ArenaDtor(void* object) {
  LazyMessage* _this = reinterpret_cast< LazyMessage* >(object);
  (void)_this;
}
void LazyMessage::RegisterArenaDtor(::google::protobuf::Arena*) {
}
void LazyMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LazyMessage::descriptor() {
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LazyMessage& LazyMessage::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::scc_info_LazyMessage.base);
  return *internal_default_instance();
}


void LazyMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.lazy_imports.LazyMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  a_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool LazyMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf_unittest.lazy_imports.LazyMessage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 a = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_a();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &a_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_unittest.lazy_imports.LazyMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_unittest.lazy_imports.LazyMessage)
  return false;
#undef DO_
}

void LazyMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_unittest.lazy_imports.LazyMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 a = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->a(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf_unittest.lazy_imports.LazyMessage)
}

::google::protobuf::uint8* LazyMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.lazy_imports.LazyMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 a = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->a(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.lazy_imports.LazyMessage)
  return target;
}

size_t LazyMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.lazy_imports.LazyMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // optional int32 a = 1;
  if (has_a()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->a());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LazyMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.lazy_imports.LazyMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const LazyMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LazyMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.lazy_imports.LazyMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.lazy_imports.LazyMessage)
    MergeFrom(*source);
  }
}

void LazyMessage::MergeFrom(const LazyMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.lazy_imports.LazyMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_a()) {
    set_a(from.a());
  }
}

void LazyMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.lazy_imports.LazyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LazyMessage::CopyFrom(const LazyMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.lazy_imports.LazyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LazyMessage::IsInitialized() const {
  return true;
}

void LazyMessage::Swap(LazyMessage* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    LazyMessage* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void LazyMessage::UnsafeArenaSwap(LazyMessage* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void LazyMessage::InternalSwap(LazyMessage* other) {
  using std::swap;
  swap(a_, other->a_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LazyMessage::GetMetadata() const {
  protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::file_level_metadata[kIndexInFileMessages];
}

::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::EnumTypeTraits< ::protobuf_unittest::lazy_imports::LazyEnum, ::protobuf_unittest::lazy_imports::LazyEnum_IsValid>, 14, false >
  lazy_enum_option(kLazyEnumOptionFieldNumber, static_cast< ::protobuf_unittest::lazy_imports::LazyEnum >(1));

// @@protoc_insertion_point(namespace_scope)
}  // namespace lazy_imports
}  // namespace protobuf_unittest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protobuf_unittest::lazy_imports::LazyMessage* Arena::CreateMaybeMessage< ::protobuf_unittest::lazy_imports::LazyMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protobuf_unittest::lazy_imports::LazyMessage >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
