// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dzhyun.paixu.proto

#ifndef PROTOBUF_dzhyun_2epaixu_2eproto__INCLUDED
#define PROTOBUF_dzhyun_2epaixu_2eproto__INCLUDED

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
void protobuf_AddDesc_dzhyun_2epaixu_2eproto();
void protobuf_AssignDesc_dzhyun_2epaixu_2eproto();
void protobuf_ShutdownFile_dzhyun_2epaixu_2eproto();

class PaiMing;
class PaiXu;

// ===================================================================

class PaiXu : public ::google::protobuf::Message {
 public:
  PaiXu();
  virtual ~PaiXu();

  PaiXu(const PaiXu& from);

  inline PaiXu& operator=(const PaiXu& from) {
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
  static const PaiXu& default_instance();

  void Swap(PaiXu* other);

  // implements Message ----------------------------------------------

  inline PaiXu* New() const { return New(NULL); }

  PaiXu* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PaiXu& from);
  void MergeFrom(const PaiXu& from);
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
  void InternalSwap(PaiXu* other);
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

  // required string Obj = 1;
  bool has_obj() const;
  void clear_obj();
  static const int kObjFieldNumber = 1;
  const ::std::string& obj() const;
  void set_obj(const ::std::string& value);
  void set_obj(const char* value);
  void set_obj(const char* value, size_t size);
  ::std::string* mutable_obj();
  ::std::string* release_obj();
  void set_allocated_obj(::std::string* obj);

  // optional int64 Value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  ::google::protobuf::int64 value() const;
  void set_value(::google::protobuf::int64 value);

  // optional string Text = 3;
  bool has_text() const;
  void clear_text();
  static const int kTextFieldNumber = 3;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // @@protoc_insertion_point(class_scope:dzhyun.PaiXu)
 private:
  inline void set_has_obj();
  inline void clear_has_obj();
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_text();
  inline void clear_has_text();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr obj_;
  ::google::protobuf::int64 value_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  friend void  protobuf_AddDesc_dzhyun_2epaixu_2eproto();
  friend void protobuf_AssignDesc_dzhyun_2epaixu_2eproto();
  friend void protobuf_ShutdownFile_dzhyun_2epaixu_2eproto();

  void InitAsDefaultInstance();
  static PaiXu* default_instance_;
};
// -------------------------------------------------------------------

class PaiMing : public ::google::protobuf::Message {
 public:
  PaiMing();
  virtual ~PaiMing();

  PaiMing(const PaiMing& from);

  inline PaiMing& operator=(const PaiMing& from) {
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
  static const PaiMing& default_instance();

  void Swap(PaiMing* other);

  // implements Message ----------------------------------------------

  inline PaiMing* New() const { return New(NULL); }

  PaiMing* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PaiMing& from);
  void MergeFrom(const PaiMing& from);
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
  void InternalSwap(PaiMing* other);
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

  // required string Obj = 1;
  bool has_obj() const;
  void clear_obj();
  static const int kObjFieldNumber = 1;
  const ::std::string& obj() const;
  void set_obj(const ::std::string& value);
  void set_obj(const char* value);
  void set_obj(const char* value, size_t size);
  ::std::string* mutable_obj();
  ::std::string* release_obj();
  void set_allocated_obj(::std::string* obj);

  // optional int64 Value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  ::google::protobuf::int64 value() const;
  void set_value(::google::protobuf::int64 value);

  // optional string Text = 3;
  bool has_text() const;
  void clear_text();
  static const int kTextFieldNumber = 3;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // optional int64 MingCi = 4;
  bool has_mingci() const;
  void clear_mingci();
  static const int kMingCiFieldNumber = 4;
  ::google::protobuf::int64 mingci() const;
  void set_mingci(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:dzhyun.PaiMing)
 private:
  inline void set_has_obj();
  inline void clear_has_obj();
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_text();
  inline void clear_has_text();
  inline void set_has_mingci();
  inline void clear_has_mingci();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr obj_;
  ::google::protobuf::int64 value_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  ::google::protobuf::int64 mingci_;
  friend void  protobuf_AddDesc_dzhyun_2epaixu_2eproto();
  friend void protobuf_AssignDesc_dzhyun_2epaixu_2eproto();
  friend void protobuf_ShutdownFile_dzhyun_2epaixu_2eproto();

  void InitAsDefaultInstance();
  static PaiMing* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PaiXu

// required string Obj = 1;
inline bool PaiXu::has_obj() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PaiXu::set_has_obj() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PaiXu::clear_has_obj() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PaiXu::clear_obj() {
  obj_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_obj();
}
inline const ::std::string& PaiXu::obj() const {
  // @@protoc_insertion_point(field_get:dzhyun.PaiXu.Obj)
  return obj_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaiXu::set_obj(const ::std::string& value) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.PaiXu.Obj)
}
inline void PaiXu::set_obj(const char* value) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.PaiXu.Obj)
}
inline void PaiXu::set_obj(const char* value, size_t size) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.PaiXu.Obj)
}
inline ::std::string* PaiXu::mutable_obj() {
  set_has_obj();
  // @@protoc_insertion_point(field_mutable:dzhyun.PaiXu.Obj)
  return obj_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PaiXu::release_obj() {
  // @@protoc_insertion_point(field_release:dzhyun.PaiXu.Obj)
  clear_has_obj();
  return obj_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaiXu::set_allocated_obj(::std::string* obj) {
  if (obj != NULL) {
    set_has_obj();
  } else {
    clear_has_obj();
  }
  obj_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), obj);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.PaiXu.Obj)
}

// optional int64 Value = 2;
inline bool PaiXu::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PaiXu::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PaiXu::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PaiXu::clear_value() {
  value_ = GOOGLE_LONGLONG(0);
  clear_has_value();
}
inline ::google::protobuf::int64 PaiXu::value() const {
  // @@protoc_insertion_point(field_get:dzhyun.PaiXu.Value)
  return value_;
}
inline void PaiXu::set_value(::google::protobuf::int64 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.PaiXu.Value)
}

// optional string Text = 3;
inline bool PaiXu::has_text() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PaiXu::set_has_text() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PaiXu::clear_has_text() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PaiXu::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_text();
}
inline const ::std::string& PaiXu::text() const {
  // @@protoc_insertion_point(field_get:dzhyun.PaiXu.Text)
  return text_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaiXu::set_text(const ::std::string& value) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.PaiXu.Text)
}
inline void PaiXu::set_text(const char* value) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.PaiXu.Text)
}
inline void PaiXu::set_text(const char* value, size_t size) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.PaiXu.Text)
}
inline ::std::string* PaiXu::mutable_text() {
  set_has_text();
  // @@protoc_insertion_point(field_mutable:dzhyun.PaiXu.Text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PaiXu::release_text() {
  // @@protoc_insertion_point(field_release:dzhyun.PaiXu.Text)
  clear_has_text();
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaiXu::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    set_has_text();
  } else {
    clear_has_text();
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.PaiXu.Text)
}

// -------------------------------------------------------------------

// PaiMing

// required string Obj = 1;
inline bool PaiMing::has_obj() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PaiMing::set_has_obj() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PaiMing::clear_has_obj() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PaiMing::clear_obj() {
  obj_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_obj();
}
inline const ::std::string& PaiMing::obj() const {
  // @@protoc_insertion_point(field_get:dzhyun.PaiMing.Obj)
  return obj_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaiMing::set_obj(const ::std::string& value) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.PaiMing.Obj)
}
inline void PaiMing::set_obj(const char* value) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.PaiMing.Obj)
}
inline void PaiMing::set_obj(const char* value, size_t size) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.PaiMing.Obj)
}
inline ::std::string* PaiMing::mutable_obj() {
  set_has_obj();
  // @@protoc_insertion_point(field_mutable:dzhyun.PaiMing.Obj)
  return obj_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PaiMing::release_obj() {
  // @@protoc_insertion_point(field_release:dzhyun.PaiMing.Obj)
  clear_has_obj();
  return obj_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaiMing::set_allocated_obj(::std::string* obj) {
  if (obj != NULL) {
    set_has_obj();
  } else {
    clear_has_obj();
  }
  obj_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), obj);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.PaiMing.Obj)
}

// optional int64 Value = 2;
inline bool PaiMing::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PaiMing::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PaiMing::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PaiMing::clear_value() {
  value_ = GOOGLE_LONGLONG(0);
  clear_has_value();
}
inline ::google::protobuf::int64 PaiMing::value() const {
  // @@protoc_insertion_point(field_get:dzhyun.PaiMing.Value)
  return value_;
}
inline void PaiMing::set_value(::google::protobuf::int64 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.PaiMing.Value)
}

// optional string Text = 3;
inline bool PaiMing::has_text() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PaiMing::set_has_text() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PaiMing::clear_has_text() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PaiMing::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_text();
}
inline const ::std::string& PaiMing::text() const {
  // @@protoc_insertion_point(field_get:dzhyun.PaiMing.Text)
  return text_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaiMing::set_text(const ::std::string& value) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.PaiMing.Text)
}
inline void PaiMing::set_text(const char* value) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.PaiMing.Text)
}
inline void PaiMing::set_text(const char* value, size_t size) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.PaiMing.Text)
}
inline ::std::string* PaiMing::mutable_text() {
  set_has_text();
  // @@protoc_insertion_point(field_mutable:dzhyun.PaiMing.Text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PaiMing::release_text() {
  // @@protoc_insertion_point(field_release:dzhyun.PaiMing.Text)
  clear_has_text();
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaiMing::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    set_has_text();
  } else {
    clear_has_text();
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.PaiMing.Text)
}

// optional int64 MingCi = 4;
inline bool PaiMing::has_mingci() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PaiMing::set_has_mingci() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PaiMing::clear_has_mingci() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PaiMing::clear_mingci() {
  mingci_ = GOOGLE_LONGLONG(0);
  clear_has_mingci();
}
inline ::google::protobuf::int64 PaiMing::mingci() const {
  // @@protoc_insertion_point(field_get:dzhyun.PaiMing.MingCi)
  return mingci_;
}
inline void PaiMing::set_mingci(::google::protobuf::int64 value) {
  set_has_mingci();
  mingci_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.PaiMing.MingCi)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace dzhyun

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dzhyun_2epaixu_2eproto__INCLUDED
