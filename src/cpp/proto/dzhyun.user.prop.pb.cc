// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dzhyun.user.prop.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dzhyun.user.prop.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace dzhyun {

namespace {

const ::google::protobuf::Descriptor* UserProp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserProp_reflection_ = NULL;
const ::google::protobuf::Descriptor* UserPropsMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserPropsMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dzhyun_2euser_2eprop_2eproto() {
  protobuf_AddDesc_dzhyun_2euser_2eprop_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dzhyun.user.prop.proto");
  GOOGLE_CHECK(file != NULL);
  UserProp_descriptor_ = file->message_type(0);
  static const int UserProp_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserProp, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserProp, lable_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserProp, value_),
  };
  UserProp_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UserProp_descriptor_,
      UserProp::default_instance_,
      UserProp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserProp, _has_bits_[0]),
      -1,
      -1,
      sizeof(UserProp),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserProp, _internal_metadata_),
      -1);
  UserPropsMessage_descriptor_ = file->message_type(1);
  static const int UserPropsMessage_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserPropsMessage, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserPropsMessage, lables_),
  };
  UserPropsMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UserPropsMessage_descriptor_,
      UserPropsMessage::default_instance_,
      UserPropsMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserPropsMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(UserPropsMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserPropsMessage, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dzhyun_2euser_2eprop_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UserProp_descriptor_, &UserProp::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UserPropsMessage_descriptor_, &UserPropsMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dzhyun_2euser_2eprop_2eproto() {
  delete UserProp::default_instance_;
  delete UserProp_reflection_;
  delete UserPropsMessage::default_instance_;
  delete UserPropsMessage_reflection_;
}

void protobuf_AddDesc_dzhyun_2euser_2eprop_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026dzhyun.user.prop.proto\022\006dzhyun\"4\n\010User"
    "Prop\022\n\n\002Id\030\001 \002(\t\022\r\n\005Lable\030\002 \002(\t\022\r\n\005Value"
    "\030\003 \002(\t\"B\n\020UserPropsMessage\022\014\n\004Name\030\001 \002(\t"
    "\022 \n\006Lables\030\002 \003(\0132\020.dzhyun.UserPropB\022\n\020co"
    "m.dzhyun.proto", 174);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dzhyun.user.prop.proto", &protobuf_RegisterTypes);
  UserProp::default_instance_ = new UserProp();
  UserPropsMessage::default_instance_ = new UserPropsMessage();
  UserProp::default_instance_->InitAsDefaultInstance();
  UserPropsMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dzhyun_2euser_2eprop_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dzhyun_2euser_2eprop_2eproto {
  StaticDescriptorInitializer_dzhyun_2euser_2eprop_2eproto() {
    protobuf_AddDesc_dzhyun_2euser_2eprop_2eproto();
  }
} static_descriptor_initializer_dzhyun_2euser_2eprop_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserProp::kIdFieldNumber;
const int UserProp::kLableFieldNumber;
const int UserProp::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserProp::UserProp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dzhyun.UserProp)
}

void UserProp::InitAsDefaultInstance() {
}

UserProp::UserProp(const UserProp& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dzhyun.UserProp)
}

void UserProp::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  lable_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserProp::~UserProp() {
  // @@protoc_insertion_point(destructor:dzhyun.UserProp)
  SharedDtor();
}

void UserProp::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  lable_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void UserProp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserProp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserProp_descriptor_;
}

const UserProp& UserProp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dzhyun_2euser_2eprop_2eproto();
  return *default_instance_;
}

UserProp* UserProp::default_instance_ = NULL;

UserProp* UserProp::New(::google::protobuf::Arena* arena) const {
  UserProp* n = new UserProp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UserProp::Clear() {
// @@protoc_insertion_point(message_clear_start:dzhyun.UserProp)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_id()) {
      id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_lable()) {
      lable_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_value()) {
      value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool UserProp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dzhyun.UserProp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string Id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dzhyun.UserProp.Id");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Lable;
        break;
      }

      // required string Lable = 2;
      case 2: {
        if (tag == 18) {
         parse_Lable:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_lable()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->lable().data(), this->lable().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dzhyun.UserProp.Lable");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_Value;
        break;
      }

      // required string Value = 3;
      case 3: {
        if (tag == 26) {
         parse_Value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dzhyun.UserProp.Value");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dzhyun.UserProp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dzhyun.UserProp)
  return false;
#undef DO_
}

void UserProp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dzhyun.UserProp)
  // required string Id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.UserProp.Id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // required string Lable = 2;
  if (has_lable()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->lable().data(), this->lable().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.UserProp.Lable");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->lable(), output);
  }

  // required string Value = 3;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.UserProp.Value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->value(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:dzhyun.UserProp)
}

::google::protobuf::uint8* UserProp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:dzhyun.UserProp)
  // required string Id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.UserProp.Id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // required string Lable = 2;
  if (has_lable()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->lable().data(), this->lable().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.UserProp.Lable");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->lable(), target);
  }

  // required string Value = 3;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.UserProp.Value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->value(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dzhyun.UserProp)
  return target;
}

int UserProp::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:dzhyun.UserProp)
  int total_size = 0;

  if (has_id()) {
    // required string Id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  if (has_lable()) {
    // required string Lable = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->lable());
  }

  if (has_value()) {
    // required string Value = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());
  }

  return total_size;
}
int UserProp::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:dzhyun.UserProp)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string Id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());

    // required string Lable = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->lable());

    // required string Value = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserProp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dzhyun.UserProp)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const UserProp* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const UserProp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dzhyun.UserProp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dzhyun.UserProp)
    MergeFrom(*source);
  }
}

void UserProp::MergeFrom(const UserProp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dzhyun.UserProp)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_has_id();
      id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
    }
    if (from.has_lable()) {
      set_has_lable();
      lable_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.lable_);
    }
    if (from.has_value()) {
      set_has_value();
      value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void UserProp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dzhyun.UserProp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserProp::CopyFrom(const UserProp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dzhyun.UserProp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserProp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void UserProp::Swap(UserProp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserProp::InternalSwap(UserProp* other) {
  id_.Swap(&other->id_);
  lable_.Swap(&other->lable_);
  value_.Swap(&other->value_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UserProp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserProp_descriptor_;
  metadata.reflection = UserProp_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UserProp

// required string Id = 1;
bool UserProp::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void UserProp::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void UserProp::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void UserProp::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
 const ::std::string& UserProp::id() const {
  // @@protoc_insertion_point(field_get:dzhyun.UserProp.Id)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UserProp::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.UserProp.Id)
}
 void UserProp::set_id(const char* value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.UserProp.Id)
}
 void UserProp::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.UserProp.Id)
}
 ::std::string* UserProp::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:dzhyun.UserProp.Id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UserProp::release_id() {
  // @@protoc_insertion_point(field_release:dzhyun.UserProp.Id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UserProp::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.UserProp.Id)
}

// required string Lable = 2;
bool UserProp::has_lable() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void UserProp::set_has_lable() {
  _has_bits_[0] |= 0x00000002u;
}
void UserProp::clear_has_lable() {
  _has_bits_[0] &= ~0x00000002u;
}
void UserProp::clear_lable() {
  lable_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_lable();
}
 const ::std::string& UserProp::lable() const {
  // @@protoc_insertion_point(field_get:dzhyun.UserProp.Lable)
  return lable_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UserProp::set_lable(const ::std::string& value) {
  set_has_lable();
  lable_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.UserProp.Lable)
}
 void UserProp::set_lable(const char* value) {
  set_has_lable();
  lable_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.UserProp.Lable)
}
 void UserProp::set_lable(const char* value, size_t size) {
  set_has_lable();
  lable_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.UserProp.Lable)
}
 ::std::string* UserProp::mutable_lable() {
  set_has_lable();
  // @@protoc_insertion_point(field_mutable:dzhyun.UserProp.Lable)
  return lable_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UserProp::release_lable() {
  // @@protoc_insertion_point(field_release:dzhyun.UserProp.Lable)
  clear_has_lable();
  return lable_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UserProp::set_allocated_lable(::std::string* lable) {
  if (lable != NULL) {
    set_has_lable();
  } else {
    clear_has_lable();
  }
  lable_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), lable);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.UserProp.Lable)
}

// required string Value = 3;
bool UserProp::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void UserProp::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
void UserProp::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
void UserProp::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
 const ::std::string& UserProp::value() const {
  // @@protoc_insertion_point(field_get:dzhyun.UserProp.Value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UserProp::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.UserProp.Value)
}
 void UserProp::set_value(const char* value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.UserProp.Value)
}
 void UserProp::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.UserProp.Value)
}
 ::std::string* UserProp::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:dzhyun.UserProp.Value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UserProp::release_value() {
  // @@protoc_insertion_point(field_release:dzhyun.UserProp.Value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UserProp::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.UserProp.Value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserPropsMessage::kNameFieldNumber;
const int UserPropsMessage::kLablesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserPropsMessage::UserPropsMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dzhyun.UserPropsMessage)
}

void UserPropsMessage::InitAsDefaultInstance() {
}

UserPropsMessage::UserPropsMessage(const UserPropsMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dzhyun.UserPropsMessage)
}

void UserPropsMessage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserPropsMessage::~UserPropsMessage() {
  // @@protoc_insertion_point(destructor:dzhyun.UserPropsMessage)
  SharedDtor();
}

void UserPropsMessage::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void UserPropsMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserPropsMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserPropsMessage_descriptor_;
}

const UserPropsMessage& UserPropsMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dzhyun_2euser_2eprop_2eproto();
  return *default_instance_;
}

UserPropsMessage* UserPropsMessage::default_instance_ = NULL;

UserPropsMessage* UserPropsMessage::New(::google::protobuf::Arena* arena) const {
  UserPropsMessage* n = new UserPropsMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UserPropsMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:dzhyun.UserPropsMessage)
  if (has_name()) {
    name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  lables_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool UserPropsMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dzhyun.UserPropsMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string Name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dzhyun.UserPropsMessage.Name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Lables;
        break;
      }

      // repeated .dzhyun.UserProp Lables = 2;
      case 2: {
        if (tag == 18) {
         parse_Lables:
          DO_(input->IncrementRecursionDepth());
         parse_loop_Lables:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_lables()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_Lables;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dzhyun.UserPropsMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dzhyun.UserPropsMessage)
  return false;
#undef DO_
}

void UserPropsMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dzhyun.UserPropsMessage)
  // required string Name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.UserPropsMessage.Name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .dzhyun.UserProp Lables = 2;
  for (unsigned int i = 0, n = this->lables_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->lables(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:dzhyun.UserPropsMessage)
}

::google::protobuf::uint8* UserPropsMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:dzhyun.UserPropsMessage)
  // required string Name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.UserPropsMessage.Name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .dzhyun.UserProp Lables = 2;
  for (unsigned int i = 0, n = this->lables_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->lables(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dzhyun.UserPropsMessage)
  return target;
}

int UserPropsMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:dzhyun.UserPropsMessage)
  int total_size = 0;

  // required string Name = 1;
  if (has_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }
  // repeated .dzhyun.UserProp Lables = 2;
  total_size += 1 * this->lables_size();
  for (int i = 0; i < this->lables_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->lables(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserPropsMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dzhyun.UserPropsMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const UserPropsMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const UserPropsMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dzhyun.UserPropsMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dzhyun.UserPropsMessage)
    MergeFrom(*source);
  }
}

void UserPropsMessage::MergeFrom(const UserPropsMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dzhyun.UserPropsMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  lables_.MergeFrom(from.lables_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void UserPropsMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dzhyun.UserPropsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserPropsMessage::CopyFrom(const UserPropsMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dzhyun.UserPropsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserPropsMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->lables())) return false;
  return true;
}

void UserPropsMessage::Swap(UserPropsMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserPropsMessage::InternalSwap(UserPropsMessage* other) {
  name_.Swap(&other->name_);
  lables_.UnsafeArenaSwap(&other->lables_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UserPropsMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserPropsMessage_descriptor_;
  metadata.reflection = UserPropsMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UserPropsMessage

// required string Name = 1;
bool UserPropsMessage::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void UserPropsMessage::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void UserPropsMessage::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void UserPropsMessage::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& UserPropsMessage::name() const {
  // @@protoc_insertion_point(field_get:dzhyun.UserPropsMessage.Name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UserPropsMessage::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.UserPropsMessage.Name)
}
 void UserPropsMessage::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.UserPropsMessage.Name)
}
 void UserPropsMessage::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.UserPropsMessage.Name)
}
 ::std::string* UserPropsMessage::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:dzhyun.UserPropsMessage.Name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UserPropsMessage::release_name() {
  // @@protoc_insertion_point(field_release:dzhyun.UserPropsMessage.Name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UserPropsMessage::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.UserPropsMessage.Name)
}

// repeated .dzhyun.UserProp Lables = 2;
int UserPropsMessage::lables_size() const {
  return lables_.size();
}
void UserPropsMessage::clear_lables() {
  lables_.Clear();
}
const ::dzhyun::UserProp& UserPropsMessage::lables(int index) const {
  // @@protoc_insertion_point(field_get:dzhyun.UserPropsMessage.Lables)
  return lables_.Get(index);
}
::dzhyun::UserProp* UserPropsMessage::mutable_lables(int index) {
  // @@protoc_insertion_point(field_mutable:dzhyun.UserPropsMessage.Lables)
  return lables_.Mutable(index);
}
::dzhyun::UserProp* UserPropsMessage::add_lables() {
  // @@protoc_insertion_point(field_add:dzhyun.UserPropsMessage.Lables)
  return lables_.Add();
}
::google::protobuf::RepeatedPtrField< ::dzhyun::UserProp >*
UserPropsMessage::mutable_lables() {
  // @@protoc_insertion_point(field_mutable_list:dzhyun.UserPropsMessage.Lables)
  return &lables_;
}
const ::google::protobuf::RepeatedPtrField< ::dzhyun::UserProp >&
UserPropsMessage::lables() const {
  // @@protoc_insertion_point(field_list:dzhyun.UserPropsMessage.Lables)
  return lables_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace dzhyun

// @@protoc_insertion_point(global_scope)
