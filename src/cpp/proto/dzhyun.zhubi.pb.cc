// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dzhyun.zhubi.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dzhyun.zhubi.pb.h"

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

const ::google::protobuf::Descriptor* ZhubiDangri_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ZhubiDangri_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dzhyun_2ezhubi_2eproto() {
  protobuf_AddDesc_dzhyun_2ezhubi_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dzhyun.zhubi.proto");
  GOOGLE_CHECK(file != NULL);
  ZhubiDangri_descriptor_ = file->message_type(0);
  static const int ZhubiDangri_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZhubiDangri, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZhubiDangri, shijian_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZhubiDangri, zuixinjia_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZhubiDangri, chengjiaoliang_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZhubiDangri, zhubiid_),
  };
  ZhubiDangri_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ZhubiDangri_descriptor_,
      ZhubiDangri::default_instance_,
      ZhubiDangri_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZhubiDangri, _has_bits_[0]),
      -1,
      -1,
      sizeof(ZhubiDangri),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ZhubiDangri, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dzhyun_2ezhubi_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ZhubiDangri_descriptor_, &ZhubiDangri::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dzhyun_2ezhubi_2eproto() {
  delete ZhubiDangri::default_instance_;
  delete ZhubiDangri_reflection_;
}

void protobuf_AddDesc_dzhyun_2ezhubi_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022dzhyun.zhubi.proto\022\006dzhyun\"f\n\013ZhubiDan"
    "gri\022\n\n\002Id\030\001 \002(\003\022\017\n\007ShiJian\030\002 \002(\003\022\021\n\tZuiX"
    "inJia\030\003 \001(\003\022\026\n\016ChengJiaoLiang\030\004 \001(\003\022\017\n\007Z"
    "hubiId\030\005 \001(\003B\022\n\020com.dzhyun.proto", 152);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dzhyun.zhubi.proto", &protobuf_RegisterTypes);
  ZhubiDangri::default_instance_ = new ZhubiDangri();
  ZhubiDangri::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dzhyun_2ezhubi_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dzhyun_2ezhubi_2eproto {
  StaticDescriptorInitializer_dzhyun_2ezhubi_2eproto() {
    protobuf_AddDesc_dzhyun_2ezhubi_2eproto();
  }
} static_descriptor_initializer_dzhyun_2ezhubi_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ZhubiDangri::kIdFieldNumber;
const int ZhubiDangri::kShiJianFieldNumber;
const int ZhubiDangri::kZuiXinJiaFieldNumber;
const int ZhubiDangri::kChengJiaoLiangFieldNumber;
const int ZhubiDangri::kZhubiIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ZhubiDangri::ZhubiDangri()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dzhyun.ZhubiDangri)
}

void ZhubiDangri::InitAsDefaultInstance() {
}

ZhubiDangri::ZhubiDangri(const ZhubiDangri& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dzhyun.ZhubiDangri)
}

void ZhubiDangri::SharedCtor() {
  _cached_size_ = 0;
  id_ = GOOGLE_LONGLONG(0);
  shijian_ = GOOGLE_LONGLONG(0);
  zuixinjia_ = GOOGLE_LONGLONG(0);
  chengjiaoliang_ = GOOGLE_LONGLONG(0);
  zhubiid_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ZhubiDangri::~ZhubiDangri() {
  // @@protoc_insertion_point(destructor:dzhyun.ZhubiDangri)
  SharedDtor();
}

void ZhubiDangri::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ZhubiDangri::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ZhubiDangri::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ZhubiDangri_descriptor_;
}

const ZhubiDangri& ZhubiDangri::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dzhyun_2ezhubi_2eproto();
  return *default_instance_;
}

ZhubiDangri* ZhubiDangri::default_instance_ = NULL;

ZhubiDangri* ZhubiDangri::New(::google::protobuf::Arena* arena) const {
  ZhubiDangri* n = new ZhubiDangri;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ZhubiDangri::Clear() {
// @@protoc_insertion_point(message_clear_start:dzhyun.ZhubiDangri)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(ZhubiDangri, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ZhubiDangri*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31u) {
    ZR_(id_, zhubiid_);
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool ZhubiDangri::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dzhyun.ZhubiDangri)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 Id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_ShiJian;
        break;
      }

      // required int64 ShiJian = 2;
      case 2: {
        if (tag == 16) {
         parse_ShiJian:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &shijian_)));
          set_has_shijian();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_ZuiXinJia;
        break;
      }

      // optional int64 ZuiXinJia = 3;
      case 3: {
        if (tag == 24) {
         parse_ZuiXinJia:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &zuixinjia_)));
          set_has_zuixinjia();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_ChengJiaoLiang;
        break;
      }

      // optional int64 ChengJiaoLiang = 4;
      case 4: {
        if (tag == 32) {
         parse_ChengJiaoLiang:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &chengjiaoliang_)));
          set_has_chengjiaoliang();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_ZhubiId;
        break;
      }

      // optional int64 ZhubiId = 5;
      case 5: {
        if (tag == 40) {
         parse_ZhubiId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &zhubiid_)));
          set_has_zhubiid();
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
  // @@protoc_insertion_point(parse_success:dzhyun.ZhubiDangri)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dzhyun.ZhubiDangri)
  return false;
#undef DO_
}

void ZhubiDangri::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dzhyun.ZhubiDangri)
  // required int64 Id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // required int64 ShiJian = 2;
  if (has_shijian()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->shijian(), output);
  }

  // optional int64 ZuiXinJia = 3;
  if (has_zuixinjia()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->zuixinjia(), output);
  }

  // optional int64 ChengJiaoLiang = 4;
  if (has_chengjiaoliang()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->chengjiaoliang(), output);
  }

  // optional int64 ZhubiId = 5;
  if (has_zhubiid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->zhubiid(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:dzhyun.ZhubiDangri)
}

::google::protobuf::uint8* ZhubiDangri::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:dzhyun.ZhubiDangri)
  // required int64 Id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->id(), target);
  }

  // required int64 ShiJian = 2;
  if (has_shijian()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->shijian(), target);
  }

  // optional int64 ZuiXinJia = 3;
  if (has_zuixinjia()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->zuixinjia(), target);
  }

  // optional int64 ChengJiaoLiang = 4;
  if (has_chengjiaoliang()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->chengjiaoliang(), target);
  }

  // optional int64 ZhubiId = 5;
  if (has_zhubiid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->zhubiid(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dzhyun.ZhubiDangri)
  return target;
}

int ZhubiDangri::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:dzhyun.ZhubiDangri)
  int total_size = 0;

  if (has_id()) {
    // required int64 Id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id());
  }

  if (has_shijian()) {
    // required int64 ShiJian = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->shijian());
  }

  return total_size;
}
int ZhubiDangri::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:dzhyun.ZhubiDangri)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int64 Id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id());

    // required int64 ShiJian = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->shijian());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_has_bits_[2 / 32] & 28u) {
    // optional int64 ZuiXinJia = 3;
    if (has_zuixinjia()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->zuixinjia());
    }

    // optional int64 ChengJiaoLiang = 4;
    if (has_chengjiaoliang()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->chengjiaoliang());
    }

    // optional int64 ZhubiId = 5;
    if (has_zhubiid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->zhubiid());
    }

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

void ZhubiDangri::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dzhyun.ZhubiDangri)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ZhubiDangri* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ZhubiDangri>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dzhyun.ZhubiDangri)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dzhyun.ZhubiDangri)
    MergeFrom(*source);
  }
}

void ZhubiDangri::MergeFrom(const ZhubiDangri& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dzhyun.ZhubiDangri)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_shijian()) {
      set_shijian(from.shijian());
    }
    if (from.has_zuixinjia()) {
      set_zuixinjia(from.zuixinjia());
    }
    if (from.has_chengjiaoliang()) {
      set_chengjiaoliang(from.chengjiaoliang());
    }
    if (from.has_zhubiid()) {
      set_zhubiid(from.zhubiid());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void ZhubiDangri::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dzhyun.ZhubiDangri)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZhubiDangri::CopyFrom(const ZhubiDangri& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dzhyun.ZhubiDangri)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZhubiDangri::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ZhubiDangri::Swap(ZhubiDangri* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ZhubiDangri::InternalSwap(ZhubiDangri* other) {
  std::swap(id_, other->id_);
  std::swap(shijian_, other->shijian_);
  std::swap(zuixinjia_, other->zuixinjia_);
  std::swap(chengjiaoliang_, other->chengjiaoliang_);
  std::swap(zhubiid_, other->zhubiid_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ZhubiDangri::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ZhubiDangri_descriptor_;
  metadata.reflection = ZhubiDangri_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ZhubiDangri

// required int64 Id = 1;
bool ZhubiDangri::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ZhubiDangri::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void ZhubiDangri::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void ZhubiDangri::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
 ::google::protobuf::int64 ZhubiDangri::id() const {
  // @@protoc_insertion_point(field_get:dzhyun.ZhubiDangri.Id)
  return id_;
}
 void ZhubiDangri::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.ZhubiDangri.Id)
}

// required int64 ShiJian = 2;
bool ZhubiDangri::has_shijian() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ZhubiDangri::set_has_shijian() {
  _has_bits_[0] |= 0x00000002u;
}
void ZhubiDangri::clear_has_shijian() {
  _has_bits_[0] &= ~0x00000002u;
}
void ZhubiDangri::clear_shijian() {
  shijian_ = GOOGLE_LONGLONG(0);
  clear_has_shijian();
}
 ::google::protobuf::int64 ZhubiDangri::shijian() const {
  // @@protoc_insertion_point(field_get:dzhyun.ZhubiDangri.ShiJian)
  return shijian_;
}
 void ZhubiDangri::set_shijian(::google::protobuf::int64 value) {
  set_has_shijian();
  shijian_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.ZhubiDangri.ShiJian)
}

// optional int64 ZuiXinJia = 3;
bool ZhubiDangri::has_zuixinjia() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ZhubiDangri::set_has_zuixinjia() {
  _has_bits_[0] |= 0x00000004u;
}
void ZhubiDangri::clear_has_zuixinjia() {
  _has_bits_[0] &= ~0x00000004u;
}
void ZhubiDangri::clear_zuixinjia() {
  zuixinjia_ = GOOGLE_LONGLONG(0);
  clear_has_zuixinjia();
}
 ::google::protobuf::int64 ZhubiDangri::zuixinjia() const {
  // @@protoc_insertion_point(field_get:dzhyun.ZhubiDangri.ZuiXinJia)
  return zuixinjia_;
}
 void ZhubiDangri::set_zuixinjia(::google::protobuf::int64 value) {
  set_has_zuixinjia();
  zuixinjia_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.ZhubiDangri.ZuiXinJia)
}

// optional int64 ChengJiaoLiang = 4;
bool ZhubiDangri::has_chengjiaoliang() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ZhubiDangri::set_has_chengjiaoliang() {
  _has_bits_[0] |= 0x00000008u;
}
void ZhubiDangri::clear_has_chengjiaoliang() {
  _has_bits_[0] &= ~0x00000008u;
}
void ZhubiDangri::clear_chengjiaoliang() {
  chengjiaoliang_ = GOOGLE_LONGLONG(0);
  clear_has_chengjiaoliang();
}
 ::google::protobuf::int64 ZhubiDangri::chengjiaoliang() const {
  // @@protoc_insertion_point(field_get:dzhyun.ZhubiDangri.ChengJiaoLiang)
  return chengjiaoliang_;
}
 void ZhubiDangri::set_chengjiaoliang(::google::protobuf::int64 value) {
  set_has_chengjiaoliang();
  chengjiaoliang_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.ZhubiDangri.ChengJiaoLiang)
}

// optional int64 ZhubiId = 5;
bool ZhubiDangri::has_zhubiid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void ZhubiDangri::set_has_zhubiid() {
  _has_bits_[0] |= 0x00000010u;
}
void ZhubiDangri::clear_has_zhubiid() {
  _has_bits_[0] &= ~0x00000010u;
}
void ZhubiDangri::clear_zhubiid() {
  zhubiid_ = GOOGLE_LONGLONG(0);
  clear_has_zhubiid();
}
 ::google::protobuf::int64 ZhubiDangri::zhubiid() const {
  // @@protoc_insertion_point(field_get:dzhyun.ZhubiDangri.ZhubiId)
  return zhubiid_;
}
 void ZhubiDangri::set_zhubiid(::google::protobuf::int64 value) {
  set_has_zhubiid();
  zhubiid_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.ZhubiDangri.ZhubiId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace dzhyun

// @@protoc_insertion_point(global_scope)