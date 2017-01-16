// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dzhyun.historytrends.proto

#ifndef PROTOBUF_dzhyun_2ehistorytrends_2eproto__INCLUDED
#define PROTOBUF_dzhyun_2ehistorytrends_2eproto__INCLUDED

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
#include "dzhyun.topicinvest.pb.h"
// @@protoc_insertion_point(includes)

namespace dzhyun {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_dzhyun_2ehistorytrends_2eproto();
void protobuf_AssignDesc_dzhyun_2ehistorytrends_2eproto();
void protobuf_ShutdownFile_dzhyun_2ehistorytrends_2eproto();

class HistoryTrends;
class MonthTrends;
class YueKXianShuJu;
class YueZouShiShuJu;

// ===================================================================

class YueKXianShuJu : public ::google::protobuf::Message {
 public:
  YueKXianShuJu();
  virtual ~YueKXianShuJu();

  YueKXianShuJu(const YueKXianShuJu& from);

  inline YueKXianShuJu& operator=(const YueKXianShuJu& from) {
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
  static const YueKXianShuJu& default_instance();

  void Swap(YueKXianShuJu* other);

  // implements Message ----------------------------------------------

  inline YueKXianShuJu* New() const { return New(NULL); }

  YueKXianShuJu* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const YueKXianShuJu& from);
  void MergeFrom(const YueKXianShuJu& from);
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
  void InternalSwap(YueKXianShuJu* other);
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

  // required int64 Nian = 1;
  bool has_nian() const;
  void clear_nian();
  static const int kNianFieldNumber = 1;
  ::google::protobuf::int64 nian() const;
  void set_nian(::google::protobuf::int64 value);

  // optional int64 ZhangFu = 2;
  bool has_zhangfu() const;
  void clear_zhangfu();
  static const int kZhangFuFieldNumber = 2;
  ::google::protobuf::int64 zhangfu() const;
  void set_zhangfu(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:dzhyun.YueKXianShuJu)
 private:
  inline void set_has_nian();
  inline void clear_has_nian();
  inline void set_has_zhangfu();
  inline void clear_has_zhangfu();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 nian_;
  ::google::protobuf::int64 zhangfu_;
  friend void  protobuf_AddDesc_dzhyun_2ehistorytrends_2eproto();
  friend void protobuf_AssignDesc_dzhyun_2ehistorytrends_2eproto();
  friend void protobuf_ShutdownFile_dzhyun_2ehistorytrends_2eproto();

  void InitAsDefaultInstance();
  static YueKXianShuJu* default_instance_;
};
// -------------------------------------------------------------------

class YueZouShiShuJu : public ::google::protobuf::Message {
 public:
  YueZouShiShuJu();
  virtual ~YueZouShiShuJu();

  YueZouShiShuJu(const YueZouShiShuJu& from);

  inline YueZouShiShuJu& operator=(const YueZouShiShuJu& from) {
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
  static const YueZouShiShuJu& default_instance();

  void Swap(YueZouShiShuJu* other);

  // implements Message ----------------------------------------------

  inline YueZouShiShuJu* New() const { return New(NULL); }

  YueZouShiShuJu* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const YueZouShiShuJu& from);
  void MergeFrom(const YueZouShiShuJu& from);
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
  void InternalSwap(YueZouShiShuJu* other);
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

  // required int64 Yue = 1;
  bool has_yue() const;
  void clear_yue();
  static const int kYueFieldNumber = 1;
  ::google::protobuf::int64 yue() const;
  void set_yue(::google::protobuf::int64 value);

  // repeated .dzhyun.YueKXianShuJu YueKXian = 2;
  int yuekxian_size() const;
  void clear_yuekxian();
  static const int kYueKXianFieldNumber = 2;
  const ::dzhyun::YueKXianShuJu& yuekxian(int index) const;
  ::dzhyun::YueKXianShuJu* mutable_yuekxian(int index);
  ::dzhyun::YueKXianShuJu* add_yuekxian();
  ::google::protobuf::RepeatedPtrField< ::dzhyun::YueKXianShuJu >*
      mutable_yuekxian();
  const ::google::protobuf::RepeatedPtrField< ::dzhyun::YueKXianShuJu >&
      yuekxian() const;

  // optional int64 ShangZhangGaiLv = 3;
  bool has_shangzhanggailv() const;
  void clear_shangzhanggailv();
  static const int kShangZhangGaiLvFieldNumber = 3;
  ::google::protobuf::int64 shangzhanggailv() const;
  void set_shangzhanggailv(::google::protobuf::int64 value);

  // optional int64 PingJunZhangFu = 4;
  bool has_pingjunzhangfu() const;
  void clear_pingjunzhangfu();
  static const int kPingJunZhangFuFieldNumber = 4;
  ::google::protobuf::int64 pingjunzhangfu() const;
  void set_pingjunzhangfu(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:dzhyun.YueZouShiShuJu)
 private:
  inline void set_has_yue();
  inline void clear_has_yue();
  inline void set_has_shangzhanggailv();
  inline void clear_has_shangzhanggailv();
  inline void set_has_pingjunzhangfu();
  inline void clear_has_pingjunzhangfu();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 yue_;
  ::google::protobuf::RepeatedPtrField< ::dzhyun::YueKXianShuJu > yuekxian_;
  ::google::protobuf::int64 shangzhanggailv_;
  ::google::protobuf::int64 pingjunzhangfu_;
  friend void  protobuf_AddDesc_dzhyun_2ehistorytrends_2eproto();
  friend void protobuf_AssignDesc_dzhyun_2ehistorytrends_2eproto();
  friend void protobuf_ShutdownFile_dzhyun_2ehistorytrends_2eproto();

  void InitAsDefaultInstance();
  static YueZouShiShuJu* default_instance_;
};
// -------------------------------------------------------------------

class HistoryTrends : public ::google::protobuf::Message {
 public:
  HistoryTrends();
  virtual ~HistoryTrends();

  HistoryTrends(const HistoryTrends& from);

  inline HistoryTrends& operator=(const HistoryTrends& from) {
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
  static const HistoryTrends& default_instance();

  void Swap(HistoryTrends* other);

  // implements Message ----------------------------------------------

  inline HistoryTrends* New() const { return New(NULL); }

  HistoryTrends* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HistoryTrends& from);
  void MergeFrom(const HistoryTrends& from);
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
  void InternalSwap(HistoryTrends* other);
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

  // repeated .dzhyun.YueZouShiShuJu YueZouShi = 2;
  int yuezoushi_size() const;
  void clear_yuezoushi();
  static const int kYueZouShiFieldNumber = 2;
  const ::dzhyun::YueZouShiShuJu& yuezoushi(int index) const;
  ::dzhyun::YueZouShiShuJu* mutable_yuezoushi(int index);
  ::dzhyun::YueZouShiShuJu* add_yuezoushi();
  ::google::protobuf::RepeatedPtrField< ::dzhyun::YueZouShiShuJu >*
      mutable_yuezoushi();
  const ::google::protobuf::RepeatedPtrField< ::dzhyun::YueZouShiShuJu >&
      yuezoushi() const;

  // @@protoc_insertion_point(class_scope:dzhyun.HistoryTrends)
 private:
  inline void set_has_obj();
  inline void clear_has_obj();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr obj_;
  ::google::protobuf::RepeatedPtrField< ::dzhyun::YueZouShiShuJu > yuezoushi_;
  friend void  protobuf_AddDesc_dzhyun_2ehistorytrends_2eproto();
  friend void protobuf_AssignDesc_dzhyun_2ehistorytrends_2eproto();
  friend void protobuf_ShutdownFile_dzhyun_2ehistorytrends_2eproto();

  void InitAsDefaultInstance();
  static HistoryTrends* default_instance_;
};
// -------------------------------------------------------------------

class MonthTrends : public ::google::protobuf::Message {
 public:
  MonthTrends();
  virtual ~MonthTrends();

  MonthTrends(const MonthTrends& from);

  inline MonthTrends& operator=(const MonthTrends& from) {
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
  static const MonthTrends& default_instance();

  void Swap(MonthTrends* other);

  // implements Message ----------------------------------------------

  inline MonthTrends* New() const { return New(NULL); }

  MonthTrends* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MonthTrends& from);
  void MergeFrom(const MonthTrends& from);
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
  void InternalSwap(MonthTrends* other);
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

  // repeated .dzhyun.LiShiHangQing HangQing = 2;
  int hangqing_size() const;
  void clear_hangqing();
  static const int kHangQingFieldNumber = 2;
  const ::dzhyun::LiShiHangQing& hangqing(int index) const;
  ::dzhyun::LiShiHangQing* mutable_hangqing(int index);
  ::dzhyun::LiShiHangQing* add_hangqing();
  ::google::protobuf::RepeatedPtrField< ::dzhyun::LiShiHangQing >*
      mutable_hangqing();
  const ::google::protobuf::RepeatedPtrField< ::dzhyun::LiShiHangQing >&
      hangqing() const;

  // @@protoc_insertion_point(class_scope:dzhyun.MonthTrends)
 private:
  inline void set_has_obj();
  inline void clear_has_obj();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr obj_;
  ::google::protobuf::RepeatedPtrField< ::dzhyun::LiShiHangQing > hangqing_;
  friend void  protobuf_AddDesc_dzhyun_2ehistorytrends_2eproto();
  friend void protobuf_AssignDesc_dzhyun_2ehistorytrends_2eproto();
  friend void protobuf_ShutdownFile_dzhyun_2ehistorytrends_2eproto();

  void InitAsDefaultInstance();
  static MonthTrends* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// YueKXianShuJu

// required int64 Nian = 1;
inline bool YueKXianShuJu::has_nian() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void YueKXianShuJu::set_has_nian() {
  _has_bits_[0] |= 0x00000001u;
}
inline void YueKXianShuJu::clear_has_nian() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void YueKXianShuJu::clear_nian() {
  nian_ = GOOGLE_LONGLONG(0);
  clear_has_nian();
}
inline ::google::protobuf::int64 YueKXianShuJu::nian() const {
  // @@protoc_insertion_point(field_get:dzhyun.YueKXianShuJu.Nian)
  return nian_;
}
inline void YueKXianShuJu::set_nian(::google::protobuf::int64 value) {
  set_has_nian();
  nian_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.YueKXianShuJu.Nian)
}

// optional int64 ZhangFu = 2;
inline bool YueKXianShuJu::has_zhangfu() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void YueKXianShuJu::set_has_zhangfu() {
  _has_bits_[0] |= 0x00000002u;
}
inline void YueKXianShuJu::clear_has_zhangfu() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void YueKXianShuJu::clear_zhangfu() {
  zhangfu_ = GOOGLE_LONGLONG(0);
  clear_has_zhangfu();
}
inline ::google::protobuf::int64 YueKXianShuJu::zhangfu() const {
  // @@protoc_insertion_point(field_get:dzhyun.YueKXianShuJu.ZhangFu)
  return zhangfu_;
}
inline void YueKXianShuJu::set_zhangfu(::google::protobuf::int64 value) {
  set_has_zhangfu();
  zhangfu_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.YueKXianShuJu.ZhangFu)
}

// -------------------------------------------------------------------

// YueZouShiShuJu

// required int64 Yue = 1;
inline bool YueZouShiShuJu::has_yue() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void YueZouShiShuJu::set_has_yue() {
  _has_bits_[0] |= 0x00000001u;
}
inline void YueZouShiShuJu::clear_has_yue() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void YueZouShiShuJu::clear_yue() {
  yue_ = GOOGLE_LONGLONG(0);
  clear_has_yue();
}
inline ::google::protobuf::int64 YueZouShiShuJu::yue() const {
  // @@protoc_insertion_point(field_get:dzhyun.YueZouShiShuJu.Yue)
  return yue_;
}
inline void YueZouShiShuJu::set_yue(::google::protobuf::int64 value) {
  set_has_yue();
  yue_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.YueZouShiShuJu.Yue)
}

// repeated .dzhyun.YueKXianShuJu YueKXian = 2;
inline int YueZouShiShuJu::yuekxian_size() const {
  return yuekxian_.size();
}
inline void YueZouShiShuJu::clear_yuekxian() {
  yuekxian_.Clear();
}
inline const ::dzhyun::YueKXianShuJu& YueZouShiShuJu::yuekxian(int index) const {
  // @@protoc_insertion_point(field_get:dzhyun.YueZouShiShuJu.YueKXian)
  return yuekxian_.Get(index);
}
inline ::dzhyun::YueKXianShuJu* YueZouShiShuJu::mutable_yuekxian(int index) {
  // @@protoc_insertion_point(field_mutable:dzhyun.YueZouShiShuJu.YueKXian)
  return yuekxian_.Mutable(index);
}
inline ::dzhyun::YueKXianShuJu* YueZouShiShuJu::add_yuekxian() {
  // @@protoc_insertion_point(field_add:dzhyun.YueZouShiShuJu.YueKXian)
  return yuekxian_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::dzhyun::YueKXianShuJu >*
YueZouShiShuJu::mutable_yuekxian() {
  // @@protoc_insertion_point(field_mutable_list:dzhyun.YueZouShiShuJu.YueKXian)
  return &yuekxian_;
}
inline const ::google::protobuf::RepeatedPtrField< ::dzhyun::YueKXianShuJu >&
YueZouShiShuJu::yuekxian() const {
  // @@protoc_insertion_point(field_list:dzhyun.YueZouShiShuJu.YueKXian)
  return yuekxian_;
}

// optional int64 ShangZhangGaiLv = 3;
inline bool YueZouShiShuJu::has_shangzhanggailv() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void YueZouShiShuJu::set_has_shangzhanggailv() {
  _has_bits_[0] |= 0x00000004u;
}
inline void YueZouShiShuJu::clear_has_shangzhanggailv() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void YueZouShiShuJu::clear_shangzhanggailv() {
  shangzhanggailv_ = GOOGLE_LONGLONG(0);
  clear_has_shangzhanggailv();
}
inline ::google::protobuf::int64 YueZouShiShuJu::shangzhanggailv() const {
  // @@protoc_insertion_point(field_get:dzhyun.YueZouShiShuJu.ShangZhangGaiLv)
  return shangzhanggailv_;
}
inline void YueZouShiShuJu::set_shangzhanggailv(::google::protobuf::int64 value) {
  set_has_shangzhanggailv();
  shangzhanggailv_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.YueZouShiShuJu.ShangZhangGaiLv)
}

// optional int64 PingJunZhangFu = 4;
inline bool YueZouShiShuJu::has_pingjunzhangfu() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void YueZouShiShuJu::set_has_pingjunzhangfu() {
  _has_bits_[0] |= 0x00000008u;
}
inline void YueZouShiShuJu::clear_has_pingjunzhangfu() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void YueZouShiShuJu::clear_pingjunzhangfu() {
  pingjunzhangfu_ = GOOGLE_LONGLONG(0);
  clear_has_pingjunzhangfu();
}
inline ::google::protobuf::int64 YueZouShiShuJu::pingjunzhangfu() const {
  // @@protoc_insertion_point(field_get:dzhyun.YueZouShiShuJu.PingJunZhangFu)
  return pingjunzhangfu_;
}
inline void YueZouShiShuJu::set_pingjunzhangfu(::google::protobuf::int64 value) {
  set_has_pingjunzhangfu();
  pingjunzhangfu_ = value;
  // @@protoc_insertion_point(field_set:dzhyun.YueZouShiShuJu.PingJunZhangFu)
}

// -------------------------------------------------------------------

// HistoryTrends

// required string Obj = 1;
inline bool HistoryTrends::has_obj() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HistoryTrends::set_has_obj() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HistoryTrends::clear_has_obj() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HistoryTrends::clear_obj() {
  obj_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_obj();
}
inline const ::std::string& HistoryTrends::obj() const {
  // @@protoc_insertion_point(field_get:dzhyun.HistoryTrends.Obj)
  return obj_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HistoryTrends::set_obj(const ::std::string& value) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.HistoryTrends.Obj)
}
inline void HistoryTrends::set_obj(const char* value) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.HistoryTrends.Obj)
}
inline void HistoryTrends::set_obj(const char* value, size_t size) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.HistoryTrends.Obj)
}
inline ::std::string* HistoryTrends::mutable_obj() {
  set_has_obj();
  // @@protoc_insertion_point(field_mutable:dzhyun.HistoryTrends.Obj)
  return obj_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HistoryTrends::release_obj() {
  // @@protoc_insertion_point(field_release:dzhyun.HistoryTrends.Obj)
  clear_has_obj();
  return obj_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HistoryTrends::set_allocated_obj(::std::string* obj) {
  if (obj != NULL) {
    set_has_obj();
  } else {
    clear_has_obj();
  }
  obj_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), obj);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.HistoryTrends.Obj)
}

// repeated .dzhyun.YueZouShiShuJu YueZouShi = 2;
inline int HistoryTrends::yuezoushi_size() const {
  return yuezoushi_.size();
}
inline void HistoryTrends::clear_yuezoushi() {
  yuezoushi_.Clear();
}
inline const ::dzhyun::YueZouShiShuJu& HistoryTrends::yuezoushi(int index) const {
  // @@protoc_insertion_point(field_get:dzhyun.HistoryTrends.YueZouShi)
  return yuezoushi_.Get(index);
}
inline ::dzhyun::YueZouShiShuJu* HistoryTrends::mutable_yuezoushi(int index) {
  // @@protoc_insertion_point(field_mutable:dzhyun.HistoryTrends.YueZouShi)
  return yuezoushi_.Mutable(index);
}
inline ::dzhyun::YueZouShiShuJu* HistoryTrends::add_yuezoushi() {
  // @@protoc_insertion_point(field_add:dzhyun.HistoryTrends.YueZouShi)
  return yuezoushi_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::dzhyun::YueZouShiShuJu >*
HistoryTrends::mutable_yuezoushi() {
  // @@protoc_insertion_point(field_mutable_list:dzhyun.HistoryTrends.YueZouShi)
  return &yuezoushi_;
}
inline const ::google::protobuf::RepeatedPtrField< ::dzhyun::YueZouShiShuJu >&
HistoryTrends::yuezoushi() const {
  // @@protoc_insertion_point(field_list:dzhyun.HistoryTrends.YueZouShi)
  return yuezoushi_;
}

// -------------------------------------------------------------------

// MonthTrends

// required string Obj = 1;
inline bool MonthTrends::has_obj() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MonthTrends::set_has_obj() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MonthTrends::clear_has_obj() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MonthTrends::clear_obj() {
  obj_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_obj();
}
inline const ::std::string& MonthTrends::obj() const {
  // @@protoc_insertion_point(field_get:dzhyun.MonthTrends.Obj)
  return obj_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MonthTrends::set_obj(const ::std::string& value) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dzhyun.MonthTrends.Obj)
}
inline void MonthTrends::set_obj(const char* value) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dzhyun.MonthTrends.Obj)
}
inline void MonthTrends::set_obj(const char* value, size_t size) {
  set_has_obj();
  obj_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dzhyun.MonthTrends.Obj)
}
inline ::std::string* MonthTrends::mutable_obj() {
  set_has_obj();
  // @@protoc_insertion_point(field_mutable:dzhyun.MonthTrends.Obj)
  return obj_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MonthTrends::release_obj() {
  // @@protoc_insertion_point(field_release:dzhyun.MonthTrends.Obj)
  clear_has_obj();
  return obj_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MonthTrends::set_allocated_obj(::std::string* obj) {
  if (obj != NULL) {
    set_has_obj();
  } else {
    clear_has_obj();
  }
  obj_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), obj);
  // @@protoc_insertion_point(field_set_allocated:dzhyun.MonthTrends.Obj)
}

// repeated .dzhyun.LiShiHangQing HangQing = 2;
inline int MonthTrends::hangqing_size() const {
  return hangqing_.size();
}
inline void MonthTrends::clear_hangqing() {
  hangqing_.Clear();
}
inline const ::dzhyun::LiShiHangQing& MonthTrends::hangqing(int index) const {
  // @@protoc_insertion_point(field_get:dzhyun.MonthTrends.HangQing)
  return hangqing_.Get(index);
}
inline ::dzhyun::LiShiHangQing* MonthTrends::mutable_hangqing(int index) {
  // @@protoc_insertion_point(field_mutable:dzhyun.MonthTrends.HangQing)
  return hangqing_.Mutable(index);
}
inline ::dzhyun::LiShiHangQing* MonthTrends::add_hangqing() {
  // @@protoc_insertion_point(field_add:dzhyun.MonthTrends.HangQing)
  return hangqing_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::dzhyun::LiShiHangQing >*
MonthTrends::mutable_hangqing() {
  // @@protoc_insertion_point(field_mutable_list:dzhyun.MonthTrends.HangQing)
  return &hangqing_;
}
inline const ::google::protobuf::RepeatedPtrField< ::dzhyun::LiShiHangQing >&
MonthTrends::hangqing() const {
  // @@protoc_insertion_point(field_list:dzhyun.MonthTrends.HangQing)
  return hangqing_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace dzhyun

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dzhyun_2ehistorytrends_2eproto__INCLUDED
