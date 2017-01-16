// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dzh.block.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dzh.block.pb.h"

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

const ::google::protobuf::Descriptor* BlockObjOutput_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BlockObjOutput_reflection_ = NULL;
const ::google::protobuf::Descriptor* BlockPropOutput_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BlockPropOutput_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dzh_2eblock_2eproto() {
  protobuf_AddDesc_dzh_2eblock_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dzh.block.proto");
  GOOGLE_CHECK(file != NULL);
  BlockObjOutput_descriptor_ = file->message_type(0);
  static const int BlockObjOutput_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockObjOutput, obj_),
  };
  BlockObjOutput_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BlockObjOutput_descriptor_,
      BlockObjOutput::default_instance_,
      BlockObjOutput_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockObjOutput, _has_bits_[0]),
      -1,
      -1,
      sizeof(BlockObjOutput),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockObjOutput, _internal_metadata_),
      -1);
  BlockPropOutput_descriptor_ = file->message_type(1);
  static const int BlockPropOutput_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockPropOutput, name_),
  };
  BlockPropOutput_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BlockPropOutput_descriptor_,
      BlockPropOutput::default_instance_,
      BlockPropOutput_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockPropOutput, _has_bits_[0]),
      -1,
      -1,
      sizeof(BlockPropOutput),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockPropOutput, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dzh_2eblock_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BlockObjOutput_descriptor_, &BlockObjOutput::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BlockPropOutput_descriptor_, &BlockPropOutput::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dzh_2eblock_2eproto() {
  delete BlockObjOutput::default_instance_;
  delete BlockObjOutput_reflection_;
  delete BlockPropOutput::default_instance_;
  delete BlockPropOutput_reflection_;
}

void protobuf_AddDesc_dzh_2eblock_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017dzh.block.proto\022\006dzhyun\"\035\n\016BlockObjOut"
    "put\022\013\n\003obj\030\001 \003(\t\"\037\n\017BlockPropOutput\022\014\n\004n"
    "ame\030\001 \003(\tB\022\n\020com.dzhyun.proto", 109);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dzh.block.proto", &protobuf_RegisterTypes);
  BlockObjOutput::default_instance_ = new BlockObjOutput();
  BlockPropOutput::default_instance_ = new BlockPropOutput();
  BlockObjOutput::default_instance_->InitAsDefaultInstance();
  BlockPropOutput::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dzh_2eblock_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dzh_2eblock_2eproto {
  StaticDescriptorInitializer_dzh_2eblock_2eproto() {
    protobuf_AddDesc_dzh_2eblock_2eproto();
  }
} static_descriptor_initializer_dzh_2eblock_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BlockObjOutput::kObjFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BlockObjOutput::BlockObjOutput()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dzhyun.BlockObjOutput)
}

void BlockObjOutput::InitAsDefaultInstance() {
}

BlockObjOutput::BlockObjOutput(const BlockObjOutput& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dzhyun.BlockObjOutput)
}

void BlockObjOutput::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BlockObjOutput::~BlockObjOutput() {
  // @@protoc_insertion_point(destructor:dzhyun.BlockObjOutput)
  SharedDtor();
}

void BlockObjOutput::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BlockObjOutput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BlockObjOutput::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BlockObjOutput_descriptor_;
}

const BlockObjOutput& BlockObjOutput::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dzh_2eblock_2eproto();
  return *default_instance_;
}

BlockObjOutput* BlockObjOutput::default_instance_ = NULL;

BlockObjOutput* BlockObjOutput::New(::google::protobuf::Arena* arena) const {
  BlockObjOutput* n = new BlockObjOutput;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BlockObjOutput::Clear() {
// @@protoc_insertion_point(message_clear_start:dzhyun.BlockObjOutput)
  obj_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool BlockObjOutput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dzhyun.BlockObjOutput)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string obj = 1;
      case 1: {
        if (tag == 10) {
         parse_obj:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_obj()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->obj(this->obj_size() - 1).data(),
            this->obj(this->obj_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dzhyun.BlockObjOutput.obj");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_obj;
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
  // @@protoc_insertion_point(parse_success:dzhyun.BlockObjOutput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dzhyun.BlockObjOutput)
  return false;
#undef DO_
}

void BlockObjOutput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dzhyun.BlockObjOutput)
  // repeated string obj = 1;
  for (int i = 0; i < this->obj_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->obj(i).data(), this->obj(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.BlockObjOutput.obj");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->obj(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:dzhyun.BlockObjOutput)
}

::google::protobuf::uint8* BlockObjOutput::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:dzhyun.BlockObjOutput)
  // repeated string obj = 1;
  for (int i = 0; i < this->obj_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->obj(i).data(), this->obj(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.BlockObjOutput.obj");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->obj(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dzhyun.BlockObjOutput)
  return target;
}

int BlockObjOutput::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:dzhyun.BlockObjOutput)
  int total_size = 0;

  // repeated string obj = 1;
  total_size += 1 * this->obj_size();
  for (int i = 0; i < this->obj_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->obj(i));
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

void BlockObjOutput::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dzhyun.BlockObjOutput)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const BlockObjOutput* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const BlockObjOutput>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dzhyun.BlockObjOutput)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dzhyun.BlockObjOutput)
    MergeFrom(*source);
  }
}

void BlockObjOutput::MergeFrom(const BlockObjOutput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dzhyun.BlockObjOutput)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  obj_.MergeFrom(from.obj_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void BlockObjOutput::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dzhyun.BlockObjOutput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BlockObjOutput::CopyFrom(const BlockObjOutput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dzhyun.BlockObjOutput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlockObjOutput::IsInitialized() const {

  return true;
}

void BlockObjOutput::Swap(BlockObjOutput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BlockObjOutput::InternalSwap(BlockObjOutput* other) {
  obj_.UnsafeArenaSwap(&other->obj_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BlockObjOutput::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BlockObjOutput_descriptor_;
  metadata.reflection = BlockObjOutput_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BlockObjOutput

// repeated string obj = 1;
int BlockObjOutput::obj_size() const {
  return obj_.size();
}
void BlockObjOutput::clear_obj() {
  obj_.Clear();
}
 const ::std::string& BlockObjOutput::obj(int index) const {
  // @@protoc_insertion_point(field_get:dzhyun.BlockObjOutput.obj)
  return obj_.Get(index);
}
 ::std::string* BlockObjOutput::mutable_obj(int index) {
  // @@protoc_insertion_point(field_mutable:dzhyun.BlockObjOutput.obj)
  return obj_.Mutable(index);
}
 void BlockObjOutput::set_obj(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:dzhyun.BlockObjOutput.obj)
  obj_.Mutable(index)->assign(value);
}
 void BlockObjOutput::set_obj(int index, const char* value) {
  obj_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:dzhyun.BlockObjOutput.obj)
}
 void BlockObjOutput::set_obj(int index, const char* value, size_t size) {
  obj_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:dzhyun.BlockObjOutput.obj)
}
 ::std::string* BlockObjOutput::add_obj() {
  // @@protoc_insertion_point(field_add_mutable:dzhyun.BlockObjOutput.obj)
  return obj_.Add();
}
 void BlockObjOutput::add_obj(const ::std::string& value) {
  obj_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:dzhyun.BlockObjOutput.obj)
}
 void BlockObjOutput::add_obj(const char* value) {
  obj_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:dzhyun.BlockObjOutput.obj)
}
 void BlockObjOutput::add_obj(const char* value, size_t size) {
  obj_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:dzhyun.BlockObjOutput.obj)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
BlockObjOutput::obj() const {
  // @@protoc_insertion_point(field_list:dzhyun.BlockObjOutput.obj)
  return obj_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
BlockObjOutput::mutable_obj() {
  // @@protoc_insertion_point(field_mutable_list:dzhyun.BlockObjOutput.obj)
  return &obj_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BlockPropOutput::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BlockPropOutput::BlockPropOutput()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dzhyun.BlockPropOutput)
}

void BlockPropOutput::InitAsDefaultInstance() {
}

BlockPropOutput::BlockPropOutput(const BlockPropOutput& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dzhyun.BlockPropOutput)
}

void BlockPropOutput::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BlockPropOutput::~BlockPropOutput() {
  // @@protoc_insertion_point(destructor:dzhyun.BlockPropOutput)
  SharedDtor();
}

void BlockPropOutput::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BlockPropOutput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BlockPropOutput::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BlockPropOutput_descriptor_;
}

const BlockPropOutput& BlockPropOutput::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dzh_2eblock_2eproto();
  return *default_instance_;
}

BlockPropOutput* BlockPropOutput::default_instance_ = NULL;

BlockPropOutput* BlockPropOutput::New(::google::protobuf::Arena* arena) const {
  BlockPropOutput* n = new BlockPropOutput;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BlockPropOutput::Clear() {
// @@protoc_insertion_point(message_clear_start:dzhyun.BlockPropOutput)
  name_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool BlockPropOutput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dzhyun.BlockPropOutput)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string name = 1;
      case 1: {
        if (tag == 10) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name(this->name_size() - 1).data(),
            this->name(this->name_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dzhyun.BlockPropOutput.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_name;
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
  // @@protoc_insertion_point(parse_success:dzhyun.BlockPropOutput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dzhyun.BlockPropOutput)
  return false;
#undef DO_
}

void BlockPropOutput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dzhyun.BlockPropOutput)
  // repeated string name = 1;
  for (int i = 0; i < this->name_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name(i).data(), this->name(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.BlockPropOutput.name");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:dzhyun.BlockPropOutput)
}

::google::protobuf::uint8* BlockPropOutput::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:dzhyun.BlockPropOutput)
  // repeated string name = 1;
  for (int i = 0; i < this->name_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name(i).data(), this->name(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.BlockPropOutput.name");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->name(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dzhyun.BlockPropOutput)
  return target;
}

int BlockPropOutput::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:dzhyun.BlockPropOutput)
  int total_size = 0;

  // repeated string name = 1;
  total_size += 1 * this->name_size();
  for (int i = 0; i < this->name_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->name(i));
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

void BlockPropOutput::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dzhyun.BlockPropOutput)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const BlockPropOutput* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const BlockPropOutput>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dzhyun.BlockPropOutput)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dzhyun.BlockPropOutput)
    MergeFrom(*source);
  }
}

void BlockPropOutput::MergeFrom(const BlockPropOutput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dzhyun.BlockPropOutput)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  name_.MergeFrom(from.name_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void BlockPropOutput::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dzhyun.BlockPropOutput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BlockPropOutput::CopyFrom(const BlockPropOutput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dzhyun.BlockPropOutput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlockPropOutput::IsInitialized() const {

  return true;
}

void BlockPropOutput::Swap(BlockPropOutput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BlockPropOutput::InternalSwap(BlockPropOutput* other) {
  name_.UnsafeArenaSwap(&other->name_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BlockPropOutput::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BlockPropOutput_descriptor_;
  metadata.reflection = BlockPropOutput_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BlockPropOutput

// repeated string name = 1;
int BlockPropOutput::name_size() const {
  return name_.size();
}
void BlockPropOutput::clear_name() {
  name_.Clear();
}
 const ::std::string& BlockPropOutput::name(int index) const {
  // @@protoc_insertion_point(field_get:dzhyun.BlockPropOutput.name)
  return name_.Get(index);
}
 ::std::string* BlockPropOutput::mutable_name(int index) {
  // @@protoc_insertion_point(field_mutable:dzhyun.BlockPropOutput.name)
  return name_.Mutable(index);
}
 void BlockPropOutput::set_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:dzhyun.BlockPropOutput.name)
  name_.Mutable(index)->assign(value);
}
 void BlockPropOutput::set_name(int index, const char* value) {
  name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:dzhyun.BlockPropOutput.name)
}
 void BlockPropOutput::set_name(int index, const char* value, size_t size) {
  name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:dzhyun.BlockPropOutput.name)
}
 ::std::string* BlockPropOutput::add_name() {
  // @@protoc_insertion_point(field_add_mutable:dzhyun.BlockPropOutput.name)
  return name_.Add();
}
 void BlockPropOutput::add_name(const ::std::string& value) {
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:dzhyun.BlockPropOutput.name)
}
 void BlockPropOutput::add_name(const char* value) {
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:dzhyun.BlockPropOutput.name)
}
 void BlockPropOutput::add_name(const char* value, size_t size) {
  name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:dzhyun.BlockPropOutput.name)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
BlockPropOutput::name() const {
  // @@protoc_insertion_point(field_list:dzhyun.BlockPropOutput.name)
  return name_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
BlockPropOutput::mutable_name() {
  // @@protoc_insertion_point(field_mutable_list:dzhyun.BlockPropOutput.name)
  return &name_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace dzhyun

// @@protoc_insertion_point(global_scope)
