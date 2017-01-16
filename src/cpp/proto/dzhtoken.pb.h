// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dzhtoken.proto

#ifndef PROTOBUF_dzhtoken_2eproto__INCLUDED
#define PROTOBUF_dzhtoken_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace dzhyun {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_dzhtoken_2eproto();
void protobuf_AssignDesc_dzhtoken_2eproto();
void protobuf_ShutdownFile_dzhtoken_2eproto();

class Token;

// ===================================================================

class Token : public ::google::protobuf::Message {
 public:
  Token();
  virtual ~Token();

  Token(const Token& from);

  inline Token& operator=(const Token& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Token& default_instance();

  void Swap(Token* other);

  // implements Message ----------------------------------------------

  inline Token* New() const { return New(NULL); }

  Token* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Token& from);
  void MergeFrom(const Token& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Token* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 result = 1 [default = 0];
  bool has_result() const;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::google::protobuf::int32 result() const;
  void set_result(::google::protobuf::int32 value);

  // optional string token = 2;
  bool has_token() const;
  void clear_token();
  static const int kTokenFieldNumber = 2;
  const ::std::string& token() const;
  void set_token(const ::std::string& value);
  void set_token(const char* value);
  void set_token(const char* value, size_t size);
  ::std::string* mutable_token();
  ::std::string* release_token();
  void set_allocated_token(::std::string* token);

  // optional int64 version = 3;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 3;
  ::google::protobuf::int64 version() const;
  void set_version(::google::protobuf::int64 value);

  // optional int64 create_time = 4;
  bool has_create_time() const;
  void clear_create_time();
  static const int kCreateTimeFieldNumber = 4;
  ::google::protobuf::int64 create_time() const;
  void set_create_time(::google::protobuf::int64 value);

  // optional int64 refresh_time = 5;
  bool has_refresh_time() const;
  void clear_refresh_time();
  static const int kRefreshTimeFieldNumber = 5;
  ::google::protobuf::int64 refresh_time() const;
  void set_refresh_time(::google::protobuf::int64 value);

  // optional int64 duration = 6;
  bool has_duration() const;
  void clear_duration();
  static const int kDurationFieldNumber = 6;
  ::google::protobuf::int64 duration() const;
  void set_duration(::google::protobuf::int64 value);

  // optional string appid = 7;
  bool has_appid() const;
  void clear_appid();
  static const int kAppidFieldNumber = 7;
  const ::std::string& appid() const;
  void set_appid(const ::std::string& value);
  void set_appid(const char* value);
  void set_appid(const char* value, size_t size);
  ::std::string* mutable_appid();
  ::std::string* release_appid();
  void set_allocated_appid(::std::string* appid);

  // optional string device = 8;
  bool has_device() const;
  void clear_device();
  static const int kDeviceFieldNumber = 8;
  const ::std::string& device() const;
  void set_device(const ::std::string& value);
  void set_device(const char* value);
  void set_device(const char* value, size_t size);
  ::std::string* mutable_device();
  ::std::string* release_device();
  void set_allocated_device(::std::string* device);

  // optional string uid = 9;
  bool has_uid() const;
  void clear_uid();
  static const int kUidFieldNumber = 9;
  const ::std::string& uid() const;
  void set_uid(const ::std::string& value);
  void set_uid(const char* value);
  void set_uid(const char* value, size_t size);
  ::std::string* mutable_uid();
  ::std::string* release_uid();
  void set_allocated_uid(::std::string* uid);

  // @@protoc_insertion_point(class_scope:dzhyun.Token)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_create_time();
  inline void clear_has_create_time();
  inline void set_has_refresh_time();
  inline void clear_has_refresh_time();
  inline void set_has_duration();
  inline void clear_has_duration();
  inline void set_has_appid();
  inline void clear_has_appid();
  inline void set_has_device();
  inline void clear_has_device();
  inline void set_has_uid();
  inline void clear_has_uid();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr token_;
  ::google::protobuf::int64 version_;
  ::google::protobuf::int64 create_time_;
  ::google::protobuf::int64 refresh_time_;
  ::google::protobuf::int64 duration_;
  ::google::protobuf::internal::ArenaStringPtr appid_;
  ::google::protobuf::internal::ArenaStringPtr device_;
  ::google::protobuf::internal::ArenaStringPtr uid_;
  ::google::protobuf::int32 result_;
  friend void  protobuf_AddDesc_dzhtoken_2eproto();
  friend void protobuf_AssignDesc_dzhtoken_2eproto();
  friend void protobuf_ShutdownFile_dzhtoken_2eproto();

  void InitAsDefaultInstance();
  static Token* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Token

// required int32 result = 1 [default = 0];
inline bool Token::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Token::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Token::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Token::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 Token::result() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.result)
  return result_;
}
inline void Token::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.Token.result)
}

// optional string token = 2;
inline bool Token::has_token() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Token::set_has_token() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Token::clear_has_token() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Token::clear_token() {
  token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_token();
}
inline const ::std::string& Token::token() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.token)
  return token_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_token(const ::std::string& value) {
  set_has_token();
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.Token.token)
}
inline void Token::set_token(const char* value) {
  set_has_token();
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.Token.token)
}
inline void Token::set_token(const char* value, size_t size) {
  set_has_token();
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.Token.token)
}
inline ::std::string* Token::mutable_token() {
  set_has_token();
  // @@protoc_insertion_point(field_mutable:dzhyun.Token.token)
  return token_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Token::release_token() {
  // @@protoc_insertion_point(field_release:dzhyun.Token.token)
  clear_has_token();
  return token_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_allocated_token(::std::string* token) {
  if (token != NULL) {
    set_has_token();
  } else {
    clear_has_token();
  }
  token_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), token);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.Token.token)
}

// optional int64 version = 3;
inline bool Token::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Token::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Token::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Token::clear_version() {
  version_ = GOOGLE_LONGLONG(0);
  clear_has_version();
}
inline ::google::protobuf::int64 Token::version() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.version)
  return version_;
}
inline void Token::set_version(::google::protobuf::int64 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.Token.version)
}

// optional int64 create_time = 4;
inline bool Token::has_create_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Token::set_has_create_time() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Token::clear_has_create_time() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Token::clear_create_time() {
  create_time_ = GOOGLE_LONGLONG(0);
  clear_has_create_time();
}
inline ::google::protobuf::int64 Token::create_time() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.create_time)
  return create_time_;
}
inline void Token::set_create_time(::google::protobuf::int64 value) {
  set_has_create_time();
  create_time_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.Token.create_time)
}

// optional int64 refresh_time = 5;
inline bool Token::has_refresh_time() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Token::set_has_refresh_time() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Token::clear_has_refresh_time() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Token::clear_refresh_time() {
  refresh_time_ = GOOGLE_LONGLONG(0);
  clear_has_refresh_time();
}
inline ::google::protobuf::int64 Token::refresh_time() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.refresh_time)
  return refresh_time_;
}
inline void Token::set_refresh_time(::google::protobuf::int64 value) {
  set_has_refresh_time();
  refresh_time_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.Token.refresh_time)
}

// optional int64 duration = 6;
inline bool Token::has_duration() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Token::set_has_duration() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Token::clear_has_duration() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Token::clear_duration() {
  duration_ = GOOGLE_LONGLONG(0);
  clear_has_duration();
}
inline ::google::protobuf::int64 Token::duration() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.duration)
  return duration_;
}
inline void Token::set_duration(::google::protobuf::int64 value) {
  set_has_duration();
  duration_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.Token.duration)
}

// optional string appid = 7;
inline bool Token::has_appid() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Token::set_has_appid() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Token::clear_has_appid() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Token::clear_appid() {
  appid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_appid();
}
inline const ::std::string& Token::appid() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.appid)
  return appid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_appid(const ::std::string& value) {
  set_has_appid();
  appid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.Token.appid)
}
inline void Token::set_appid(const char* value) {
  set_has_appid();
  appid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.Token.appid)
}
inline void Token::set_appid(const char* value, size_t size) {
  set_has_appid();
  appid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.Token.appid)
}
inline ::std::string* Token::mutable_appid() {
  set_has_appid();
  // @@protoc_insertion_point(field_mutable:dzhyun.Token.appid)
  return appid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Token::release_appid() {
  // @@protoc_insertion_point(field_release:dzhyun.Token.appid)
  clear_has_appid();
  return appid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_allocated_appid(::std::string* appid) {
  if (appid != NULL) {
    set_has_appid();
  } else {
    clear_has_appid();
  }
  appid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), appid);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.Token.appid)
}

// optional string device = 8;
inline bool Token::has_device() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Token::set_has_device() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Token::clear_has_device() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Token::clear_device() {
  device_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_device();
}
inline const ::std::string& Token::device() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.device)
  return device_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_device(const ::std::string& value) {
  set_has_device();
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.Token.device)
}
inline void Token::set_device(const char* value) {
  set_has_device();
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.Token.device)
}
inline void Token::set_device(const char* value, size_t size) {
  set_has_device();
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.Token.device)
}
inline ::std::string* Token::mutable_device() {
  set_has_device();
  // @@protoc_insertion_point(field_mutable:dzhyun.Token.device)
  return device_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Token::release_device() {
  // @@protoc_insertion_point(field_release:dzhyun.Token.device)
  clear_has_device();
  return device_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_allocated_device(::std::string* device) {
  if (device != NULL) {
    set_has_device();
  } else {
    clear_has_device();
  }
  device_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.Token.device)
}

// optional string uid = 9;
inline bool Token::has_uid() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Token::set_has_uid() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Token::clear_has_uid() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Token::clear_uid() {
  uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_uid();
}
inline const ::std::string& Token::uid() const {
  // @@protoc_insertion_point(field_get:dzhyun.Token.uid)
  return uid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_uid(const ::std::string& value) {
  set_has_uid();
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.Token.uid)
}
inline void Token::set_uid(const char* value) {
  set_has_uid();
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.Token.uid)
}
inline void Token::set_uid(const char* value, size_t size) {
  set_has_uid();
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.Token.uid)
}
inline ::std::string* Token::mutable_uid() {
  set_has_uid();
  // @@protoc_insertion_point(field_mutable:dzhyun.Token.uid)
  return uid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Token::release_uid() {
  // @@protoc_insertion_point(field_release:dzhyun.Token.uid)
  clear_has_uid();
  return uid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Token::set_allocated_uid(::std::string* uid) {
  if (uid != NULL) {
    set_has_uid();
  } else {
    clear_has_uid();
  }
  uid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uid);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.Token.uid)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace dzhyun

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dzhtoken_2eproto__INCLUDED
