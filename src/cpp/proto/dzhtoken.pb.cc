// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dzhtoken.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dzhtoken.pb.h"

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

const ::google::protobuf::Descriptor* Token_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Token_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dzhtoken_2eproto() {
  protobuf_AddDesc_dzhtoken_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dzhtoken.proto");
  GOOGLE_CHECK(file != NULL);
  Token_descriptor_ = file->message_type(0);
  static const int Token_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, create_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, refresh_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, duration_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, appid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, device_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, uid_),
  };
  Token_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Token_descriptor_,
      Token::default_instance_,
      Token_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, _has_bits_[0]),
      -1,
      -1,
      sizeof(Token),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dzhtoken_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Token_descriptor_, &Token::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dzhtoken_2eproto() {
  delete Token::default_instance_;
  delete Token_reflection_;
}

void protobuf_AddDesc_dzhtoken_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016dzhtoken.proto\022\006dzhyun\"\243\001\n\005Token\022\021\n\006re"
    "sult\030\001 \002(\005:\0010\022\r\n\005token\030\002 \001(\t\022\017\n\007version\030"
    "\003 \001(\003\022\023\n\013create_time\030\004 \001(\003\022\024\n\014refresh_ti"
    "me\030\005 \001(\003\022\020\n\010duration\030\006 \001(\003\022\r\n\005appid\030\007 \001("
    "\t\022\016\n\006device\030\010 \001(\t\022\013\n\003uid\030\t \001(\tB\022\n\020com.dz"
    "hyun.proto", 210);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dzhtoken.proto", &protobuf_RegisterTypes);
  Token::default_instance_ = new Token();
  Token::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dzhtoken_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dzhtoken_2eproto {
  StaticDescriptorInitializer_dzhtoken_2eproto() {
    protobuf_AddDesc_dzhtoken_2eproto();
  }
} static_descriptor_initializer_dzhtoken_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Token::kResultFieldNumber;
const int Token::kTokenFieldNumber;
const int Token::kVersionFieldNumber;
const int Token::kCreateTimeFieldNumber;
const int Token::kRefreshTimeFieldNumber;
const int Token::kDurationFieldNumber;
const int Token::kAppidFieldNumber;
const int Token::kDeviceFieldNumber;
const int Token::kUidFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Token::Token()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dzhyun.Token)
}

void Token::InitAsDefaultInstance() {
}

Token::Token(const Token& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dzhyun.Token)
}

void Token::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  result_ = 0;
  token_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = GOOGLE_LONGLONG(0);
  create_time_ = GOOGLE_LONGLONG(0);
  refresh_time_ = GOOGLE_LONGLONG(0);
  duration_ = GOOGLE_LONGLONG(0);
  appid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Token::~Token() {
  // @@protoc_insertion_point(destructor:dzhyun.Token)
  SharedDtor();
}

void Token::SharedDtor() {
  token_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  appid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Token::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Token::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Token_descriptor_;
}

const Token& Token::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dzhtoken_2eproto();
  return *default_instance_;
}

Token* Token::default_instance_ = NULL;

Token* Token::New(::google::protobuf::Arena* arena) const {
  Token* n = new Token;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Token::Clear() {
// @@protoc_insertion_point(message_clear_start:dzhyun.Token)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Token, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Token*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 255u) {
    ZR_(version_, duration_);
    result_ = 0;
    if (has_token()) {
      token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_appid()) {
      appid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_device()) {
      device_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  if (has_uid()) {
    uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Token::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dzhyun.Token)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 result = 1 [default = 0];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_token;
        break;
      }

      // optional string token = 2;
      case 2: {
        if (tag == 18) {
         parse_token:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->token().data(), this->token().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dzhyun.Token.token");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_version;
        break;
      }

      // optional int64 version = 3;
      case 3: {
        if (tag == 24) {
         parse_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &version_)));
          set_has_version();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_create_time;
        break;
      }

      // optional int64 create_time = 4;
      case 4: {
        if (tag == 32) {
         parse_create_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &create_time_)));
          set_has_create_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_refresh_time;
        break;
      }

      // optional int64 refresh_time = 5;
      case 5: {
        if (tag == 40) {
         parse_refresh_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &refresh_time_)));
          set_has_refresh_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_duration;
        break;
      }

      // optional int64 duration = 6;
      case 6: {
        if (tag == 48) {
         parse_duration:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &duration_)));
          set_has_duration();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_appid;
        break;
      }

      // optional string appid = 7;
      case 7: {
        if (tag == 58) {
         parse_appid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_appid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->appid().data(), this->appid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dzhyun.Token.appid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_device;
        break;
      }

      // optional string device = 8;
      case 8: {
        if (tag == 66) {
         parse_device:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->device().data(), this->device().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dzhyun.Token.device");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_uid;
        break;
      }

      // optional string uid = 9;
      case 9: {
        if (tag == 74) {
         parse_uid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->uid().data(), this->uid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dzhyun.Token.uid");
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
  // @@protoc_insertion_point(parse_success:dzhyun.Token)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dzhyun.Token)
  return false;
#undef DO_
}

void Token::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dzhyun.Token)
  // required int32 result = 1 [default = 0];
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
  }

  // optional string token = 2;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.Token.token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->token(), output);
  }

  // optional int64 version = 3;
  if (has_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->version(), output);
  }

  // optional int64 create_time = 4;
  if (has_create_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->create_time(), output);
  }

  // optional int64 refresh_time = 5;
  if (has_refresh_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->refresh_time(), output);
  }

  // optional int64 duration = 6;
  if (has_duration()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->duration(), output);
  }

  // optional string appid = 7;
  if (has_appid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->appid().data(), this->appid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.Token.appid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->appid(), output);
  }

  // optional string device = 8;
  if (has_device()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->device().data(), this->device().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.Token.device");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->device(), output);
  }

  // optional string uid = 9;
  if (has_uid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->uid().data(), this->uid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.Token.uid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->uid(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:dzhyun.Token)
}

::google::protobuf::uint8* Token::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:dzhyun.Token)
  // required int32 result = 1 [default = 0];
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->result(), target);
  }

  // optional string token = 2;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.Token.token");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->token(), target);
  }

  // optional int64 version = 3;
  if (has_version()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->version(), target);
  }

  // optional int64 create_time = 4;
  if (has_create_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->create_time(), target);
  }

  // optional int64 refresh_time = 5;
  if (has_refresh_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->refresh_time(), target);
  }

  // optional int64 duration = 6;
  if (has_duration()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->duration(), target);
  }

  // optional string appid = 7;
  if (has_appid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->appid().data(), this->appid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.Token.appid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->appid(), target);
  }

  // optional string device = 8;
  if (has_device()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->device().data(), this->device().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.Token.device");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->device(), target);
  }

  // optional string uid = 9;
  if (has_uid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->uid().data(), this->uid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dzhyun.Token.uid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->uid(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dzhyun.Token)
  return target;
}

int Token::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:dzhyun.Token)
  int total_size = 0;

  // required int32 result = 1 [default = 0];
  if (has_result()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->result());
  }
  if (_has_bits_[1 / 32] & 254u) {
    // optional string token = 2;
    if (has_token()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->token());
    }

    // optional int64 version = 3;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->version());
    }

    // optional int64 create_time = 4;
    if (has_create_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->create_time());
    }

    // optional int64 refresh_time = 5;
    if (has_refresh_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->refresh_time());
    }

    // optional int64 duration = 6;
    if (has_duration()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->duration());
    }

    // optional string appid = 7;
    if (has_appid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->appid());
    }

    // optional string device = 8;
    if (has_device()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->device());
    }

  }
  // optional string uid = 9;
  if (has_uid()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uid());
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

void Token::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dzhyun.Token)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Token* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Token>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dzhyun.Token)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dzhyun.Token)
    MergeFrom(*source);
  }
}

void Token::MergeFrom(const Token& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dzhyun.Token)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_result()) {
      set_result(from.result());
    }
    if (from.has_token()) {
      set_has_token();
      token_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.token_);
    }
    if (from.has_version()) {
      set_version(from.version());
    }
    if (from.has_create_time()) {
      set_create_time(from.create_time());
    }
    if (from.has_refresh_time()) {
      set_refresh_time(from.refresh_time());
    }
    if (from.has_duration()) {
      set_duration(from.duration());
    }
    if (from.has_appid()) {
      set_has_appid();
      appid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.appid_);
    }
    if (from.has_device()) {
      set_has_device();
      device_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device_);
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_uid()) {
      set_has_uid();
      uid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uid_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Token::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dzhyun.Token)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Token::CopyFrom(const Token& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dzhyun.Token)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Token::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Token::Swap(Token* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Token::InternalSwap(Token* other) {
  std::swap(result_, other->result_);
  token_.Swap(&other->token_);
  std::swap(version_, other->version_);
  std::swap(create_time_, other->create_time_);
  std::swap(refresh_time_, other->refresh_time_);
  std::swap(duration_, other->duration_);
  appid_.Swap(&other->appid_);
  device_.Swap(&other->device_);
  uid_.Swap(&other->uid_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Token::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Token_descriptor_;
  metadata.reflection = Token_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Token

// required int32 result = 1 [default = 0];
bool Token::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Token::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
void Token::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
void Token::clear_result() {
  result_ = 0;
  clear_has_result();
}
 ::google::protobuf::int32 Token::result() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.result)
  return result_;
}
 void Token::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.Token.result)
}

// optional string token = 2;
bool Token::has_token() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Token::set_has_token() {
  _has_bits_[0] |= 0x00000002u;
}
void Token::clear_has_token() {
  _has_bits_[0] &= ~0x00000002u;
}
void Token::clear_token() {
  token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_token();
}
 const ::std::string& Token::token() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.token)
  return token_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Token::set_token(const ::std::string& value) {
  set_has_token();
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.Token.token)
}
 void Token::set_token(const char* value) {
  set_has_token();
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.Token.token)
}
 void Token::set_token(const char* value, size_t size) {
  set_has_token();
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.Token.token)
}
 ::std::string* Token::mutable_token() {
  set_has_token();
  // @@protoc_insertion_point(field_mutable:dzhyun.Token.token)
  return token_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Token::release_token() {
  // @@protoc_insertion_point(field_release:dzhyun.Token.token)
  clear_has_token();
  return token_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Token::set_allocated_token(::std::string* token) {
  if (token != NULL) {
    set_has_token();
  } else {
    clear_has_token();
  }
  token_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), token);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.Token.token)
}

// optional int64 version = 3;
bool Token::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Token::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
void Token::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
void Token::clear_version() {
  version_ = GOOGLE_LONGLONG(0);
  clear_has_version();
}
 ::google::protobuf::int64 Token::version() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.version)
  return version_;
}
 void Token::set_version(::google::protobuf::int64 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.Token.version)
}

// optional int64 create_time = 4;
bool Token::has_create_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void Token::set_has_create_time() {
  _has_bits_[0] |= 0x00000008u;
}
void Token::clear_has_create_time() {
  _has_bits_[0] &= ~0x00000008u;
}
void Token::clear_create_time() {
  create_time_ = GOOGLE_LONGLONG(0);
  clear_has_create_time();
}
 ::google::protobuf::int64 Token::create_time() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.create_time)
  return create_time_;
}
 void Token::set_create_time(::google::protobuf::int64 value) {
  set_has_create_time();
  create_time_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.Token.create_time)
}

// optional int64 refresh_time = 5;
bool Token::has_refresh_time() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void Token::set_has_refresh_time() {
  _has_bits_[0] |= 0x00000010u;
}
void Token::clear_has_refresh_time() {
  _has_bits_[0] &= ~0x00000010u;
}
void Token::clear_refresh_time() {
  refresh_time_ = GOOGLE_LONGLONG(0);
  clear_has_refresh_time();
}
 ::google::protobuf::int64 Token::refresh_time() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.refresh_time)
  return refresh_time_;
}
 void Token::set_refresh_time(::google::protobuf::int64 value) {
  set_has_refresh_time();
  refresh_time_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.Token.refresh_time)
}

// optional int64 duration = 6;
bool Token::has_duration() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void Token::set_has_duration() {
  _has_bits_[0] |= 0x00000020u;
}
void Token::clear_has_duration() {
  _has_bits_[0] &= ~0x00000020u;
}
void Token::clear_duration() {
  duration_ = GOOGLE_LONGLONG(0);
  clear_has_duration();
}
 ::google::protobuf::int64 Token::duration() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.duration)
  return duration_;
}
 void Token::set_duration(::google::protobuf::int64 value) {
  set_has_duration();
  duration_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.Token.duration)
}

// optional string appid = 7;
bool Token::has_appid() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void Token::set_has_appid() {
  _has_bits_[0] |= 0x00000040u;
}
void Token::clear_has_appid() {
  _has_bits_[0] &= ~0x00000040u;
}
void Token::clear_appid() {
  appid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_appid();
}
 const ::std::string& Token::appid() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.appid)
  return appid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Token::set_appid(const ::std::string& value) {
  set_has_appid();
  appid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.Token.appid)
}
 void Token::set_appid(const char* value) {
  set_has_appid();
  appid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.Token.appid)
}
 void Token::set_appid(const char* value, size_t size) {
  set_has_appid();
  appid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.Token.appid)
}
 ::std::string* Token::mutable_appid() {
  set_has_appid();
  // @@protoc_insertion_point(field_mutable:dzhyun.Token.appid)
  return appid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Token::release_appid() {
  // @@protoc_insertion_point(field_release:dzhyun.Token.appid)
  clear_has_appid();
  return appid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Token::set_allocated_appid(::std::string* appid) {
  if (appid != NULL) {
    set_has_appid();
  } else {
    clear_has_appid();
  }
  appid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), appid);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.Token.appid)
}

// optional string device = 8;
bool Token::has_device() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void Token::set_has_device() {
  _has_bits_[0] |= 0x00000080u;
}
void Token::clear_has_device() {
  _has_bits_[0] &= ~0x00000080u;
}
void Token::clear_device() {
  device_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_device();
}
 const ::std::string& Token::device() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.device)
  return device_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Token::set_device(const ::std::string& value) {
  set_has_device();
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.Token.device)
}
 void Token::set_device(const char* value) {
  set_has_device();
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.Token.device)
}
 void Token::set_device(const char* value, size_t size) {
  set_has_device();
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.Token.device)
}
 ::std::string* Token::mutable_device() {
  set_has_device();
  // @@protoc_insertion_point(field_mutable:dzhyun.Token.device)
  return device_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Token::release_device() {
  // @@protoc_insertion_point(field_release:dzhyun.Token.device)
  clear_has_device();
  return device_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Token::set_allocated_device(::std::string* device) {
  if (device != NULL) {
    set_has_device();
  } else {
    clear_has_device();
  }
  device_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.Token.device)
}

// optional string uid = 9;
bool Token::has_uid() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
void Token::set_has_uid() {
  _has_bits_[0] |= 0x00000100u;
}
void Token::clear_has_uid() {
  _has_bits_[0] &= ~0x00000100u;
}
void Token::clear_uid() {
  uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_uid();
}
 const ::std::string& Token::uid() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.uid)
  return uid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Token::set_uid(const ::std::string& value) {
  set_has_uid();
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.Token.uid)
}
 void Token::set_uid(const char* value) {
  set_has_uid();
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.Token.uid)
}
 void Token::set_uid(const char* value, size_t size) {
  set_has_uid();
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.Token.uid)
}
 ::std::string* Token::mutable_uid() {
  set_has_uid();
  // @@protoc_insertion_point(field_mutable:dzhyun.Token.uid)
  return uid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Token::release_uid() {
  // @@protoc_insertion_point(field_release:dzhyun.Token.uid)
  clear_has_uid();
  return uid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Token::set_allocated_uid(::std::string* uid) {
  if (uid != NULL) {
    set_has_uid();
  } else {
    clear_has_uid();
  }
  uid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uid);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.Token.uid)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace dzhyun

// @@protoc_insertion_point(global_scope)
