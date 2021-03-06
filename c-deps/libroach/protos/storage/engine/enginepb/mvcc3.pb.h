// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: storage/engine/enginepb/mvcc3.proto

#ifndef PROTOBUF_storage_2fengine_2fenginepb_2fmvcc3_2eproto__INCLUDED
#define PROTOBUF_storage_2fengine_2fenginepb_2fmvcc3_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
#include "util/hlc/timestamp.pb.h"
// @@protoc_insertion_point(includes)
namespace cockroach {
namespace storage {
namespace engine {
namespace enginepb {
class MVCCNetworkStats;
class MVCCNetworkStatsDefaultTypeInternal;
extern MVCCNetworkStatsDefaultTypeInternal _MVCCNetworkStats_default_instance_;
class TxnMeta;
class TxnMetaDefaultTypeInternal;
extern TxnMetaDefaultTypeInternal _TxnMeta_default_instance_;
}  // namespace enginepb
}  // namespace engine
}  // namespace storage
}  // namespace cockroach

namespace cockroach {
namespace storage {
namespace engine {
namespace enginepb {

namespace protobuf_storage_2fengine_2fenginepb_2fmvcc3_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_storage_2fengine_2fenginepb_2fmvcc3_2eproto

enum IsolationType {
  SERIALIZABLE = 0,
  SNAPSHOT = 1,
  IsolationType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  IsolationType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool IsolationType_IsValid(int value);
const IsolationType IsolationType_MIN = SERIALIZABLE;
const IsolationType IsolationType_MAX = SNAPSHOT;
const int IsolationType_ARRAYSIZE = IsolationType_MAX + 1;

// ===================================================================

class TxnMeta : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:cockroach.storage.engine.enginepb.TxnMeta) */ {
 public:
  TxnMeta();
  virtual ~TxnMeta();

  TxnMeta(const TxnMeta& from);

  inline TxnMeta& operator=(const TxnMeta& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TxnMeta(TxnMeta&& from) noexcept
    : TxnMeta() {
    *this = ::std::move(from);
  }

  inline TxnMeta& operator=(TxnMeta&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const TxnMeta& default_instance();

  static inline const TxnMeta* internal_default_instance() {
    return reinterpret_cast<const TxnMeta*>(
               &_TxnMeta_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(TxnMeta* other);
  friend void swap(TxnMeta& a, TxnMeta& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TxnMeta* New() const PROTOBUF_FINAL { return New(NULL); }

  TxnMeta* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const TxnMeta& from);
  void MergeFrom(const TxnMeta& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TxnMeta* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const void* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // bytes key = 3;
  void clear_key();
  static const int kKeyFieldNumber = 3;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 5;
  const ::cockroach::util::hlc::Timestamp& timestamp() const;
  ::cockroach::util::hlc::Timestamp* mutable_timestamp();
  ::cockroach::util::hlc::Timestamp* release_timestamp();
  void set_allocated_timestamp(::cockroach::util::hlc::Timestamp* timestamp);

  // .cockroach.storage.engine.enginepb.IsolationType isolation = 2;
  void clear_isolation();
  static const int kIsolationFieldNumber = 2;
  ::cockroach::storage::engine::enginepb::IsolationType isolation() const;
  void set_isolation(::cockroach::storage::engine::enginepb::IsolationType value);

  // uint32 epoch = 4;
  void clear_epoch();
  static const int kEpochFieldNumber = 4;
  ::google::protobuf::uint32 epoch() const;
  void set_epoch(::google::protobuf::uint32 value);

  // int32 priority = 6;
  void clear_priority();
  static const int kPriorityFieldNumber = 6;
  ::google::protobuf::int32 priority() const;
  void set_priority(::google::protobuf::int32 value);

  // int32 sequence = 7;
  void clear_sequence();
  static const int kSequenceFieldNumber = 7;
  ::google::protobuf::int32 sequence() const;
  void set_sequence(::google::protobuf::int32 value);

  // int32 batch_index = 8;
  void clear_batch_index();
  static const int kBatchIndexFieldNumber = 8;
  ::google::protobuf::int32 batch_index() const;
  void set_batch_index(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cockroach.storage.engine.enginepb.TxnMeta)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::cockroach::util::hlc::Timestamp* timestamp_;
  int isolation_;
  ::google::protobuf::uint32 epoch_;
  ::google::protobuf::int32 priority_;
  ::google::protobuf::int32 sequence_;
  ::google::protobuf::int32 batch_index_;
  mutable int _cached_size_;
  friend struct protobuf_storage_2fengine_2fenginepb_2fmvcc3_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class MVCCNetworkStats : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:cockroach.storage.engine.enginepb.MVCCNetworkStats) */ {
 public:
  MVCCNetworkStats();
  virtual ~MVCCNetworkStats();

  MVCCNetworkStats(const MVCCNetworkStats& from);

  inline MVCCNetworkStats& operator=(const MVCCNetworkStats& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MVCCNetworkStats(MVCCNetworkStats&& from) noexcept
    : MVCCNetworkStats() {
    *this = ::std::move(from);
  }

  inline MVCCNetworkStats& operator=(MVCCNetworkStats&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const MVCCNetworkStats& default_instance();

  static inline const MVCCNetworkStats* internal_default_instance() {
    return reinterpret_cast<const MVCCNetworkStats*>(
               &_MVCCNetworkStats_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(MVCCNetworkStats* other);
  friend void swap(MVCCNetworkStats& a, MVCCNetworkStats& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MVCCNetworkStats* New() const PROTOBUF_FINAL { return New(NULL); }

  MVCCNetworkStats* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const MVCCNetworkStats& from);
  void MergeFrom(const MVCCNetworkStats& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MVCCNetworkStats* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // sfixed64 last_update_nanos = 1;
  void clear_last_update_nanos();
  static const int kLastUpdateNanosFieldNumber = 1;
  ::google::protobuf::int64 last_update_nanos() const;
  void set_last_update_nanos(::google::protobuf::int64 value);

  // sfixed64 intent_age = 2;
  void clear_intent_age();
  static const int kIntentAgeFieldNumber = 2;
  ::google::protobuf::int64 intent_age() const;
  void set_intent_age(::google::protobuf::int64 value);

  void clear_gc_bytes_age();
  static const int kGcBytesAgeFieldNumber = 3;
  ::google::protobuf::int64 gc_bytes_age() const;
  void set_gc_bytes_age(::google::protobuf::int64 value);

  // sint64 live_bytes = 4;
  void clear_live_bytes();
  static const int kLiveBytesFieldNumber = 4;
  ::google::protobuf::int64 live_bytes() const;
  void set_live_bytes(::google::protobuf::int64 value);

  // sint64 live_count = 5;
  void clear_live_count();
  static const int kLiveCountFieldNumber = 5;
  ::google::protobuf::int64 live_count() const;
  void set_live_count(::google::protobuf::int64 value);

  // sint64 key_bytes = 6;
  void clear_key_bytes();
  static const int kKeyBytesFieldNumber = 6;
  ::google::protobuf::int64 key_bytes() const;
  void set_key_bytes(::google::protobuf::int64 value);

  // sint64 key_count = 7;
  void clear_key_count();
  static const int kKeyCountFieldNumber = 7;
  ::google::protobuf::int64 key_count() const;
  void set_key_count(::google::protobuf::int64 value);

  // sint64 val_bytes = 8;
  void clear_val_bytes();
  static const int kValBytesFieldNumber = 8;
  ::google::protobuf::int64 val_bytes() const;
  void set_val_bytes(::google::protobuf::int64 value);

  // sint64 val_count = 9;
  void clear_val_count();
  static const int kValCountFieldNumber = 9;
  ::google::protobuf::int64 val_count() const;
  void set_val_count(::google::protobuf::int64 value);

  // sint64 intent_bytes = 10;
  void clear_intent_bytes();
  static const int kIntentBytesFieldNumber = 10;
  ::google::protobuf::int64 intent_bytes() const;
  void set_intent_bytes(::google::protobuf::int64 value);

  // sint64 intent_count = 11;
  void clear_intent_count();
  static const int kIntentCountFieldNumber = 11;
  ::google::protobuf::int64 intent_count() const;
  void set_intent_count(::google::protobuf::int64 value);

  // sint64 sys_bytes = 12;
  void clear_sys_bytes();
  static const int kSysBytesFieldNumber = 12;
  ::google::protobuf::int64 sys_bytes() const;
  void set_sys_bytes(::google::protobuf::int64 value);

  // sint64 sys_count = 13;
  void clear_sys_count();
  static const int kSysCountFieldNumber = 13;
  ::google::protobuf::int64 sys_count() const;
  void set_sys_count(::google::protobuf::int64 value);

  // bool contains_estimates = 14;
  void clear_contains_estimates();
  static const int kContainsEstimatesFieldNumber = 14;
  bool contains_estimates() const;
  void set_contains_estimates(bool value);

  // @@protoc_insertion_point(class_scope:cockroach.storage.engine.enginepb.MVCCNetworkStats)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::int64 last_update_nanos_;
  ::google::protobuf::int64 intent_age_;
  ::google::protobuf::int64 gc_bytes_age_;
  ::google::protobuf::int64 live_bytes_;
  ::google::protobuf::int64 live_count_;
  ::google::protobuf::int64 key_bytes_;
  ::google::protobuf::int64 key_count_;
  ::google::protobuf::int64 val_bytes_;
  ::google::protobuf::int64 val_count_;
  ::google::protobuf::int64 intent_bytes_;
  ::google::protobuf::int64 intent_count_;
  ::google::protobuf::int64 sys_bytes_;
  ::google::protobuf::int64 sys_count_;
  bool contains_estimates_;
  mutable int _cached_size_;
  friend struct protobuf_storage_2fengine_2fenginepb_2fmvcc3_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TxnMeta

inline void TxnMeta::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TxnMeta::id() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.TxnMeta.id)
  return id_.GetNoArena();
}
inline void TxnMeta::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.TxnMeta.id)
}
#if LANG_CXX11
inline void TxnMeta::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cockroach.storage.engine.enginepb.TxnMeta.id)
}
#endif
inline void TxnMeta::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cockroach.storage.engine.enginepb.TxnMeta.id)
}
inline void TxnMeta::set_id(const void* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cockroach.storage.engine.enginepb.TxnMeta.id)
}
inline ::std::string* TxnMeta::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:cockroach.storage.engine.enginepb.TxnMeta.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TxnMeta::release_id() {
  // @@protoc_insertion_point(field_release:cockroach.storage.engine.enginepb.TxnMeta.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TxnMeta::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:cockroach.storage.engine.enginepb.TxnMeta.id)
}

// .cockroach.storage.engine.enginepb.IsolationType isolation = 2;
inline void TxnMeta::clear_isolation() {
  isolation_ = 0;
}
inline ::cockroach::storage::engine::enginepb::IsolationType TxnMeta::isolation() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.TxnMeta.isolation)
  return static_cast< ::cockroach::storage::engine::enginepb::IsolationType >(isolation_);
}
inline void TxnMeta::set_isolation(::cockroach::storage::engine::enginepb::IsolationType value) {
  
  isolation_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.TxnMeta.isolation)
}

// bytes key = 3;
inline void TxnMeta::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TxnMeta::key() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.TxnMeta.key)
  return key_.GetNoArena();
}
inline void TxnMeta::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.TxnMeta.key)
}
#if LANG_CXX11
inline void TxnMeta::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cockroach.storage.engine.enginepb.TxnMeta.key)
}
#endif
inline void TxnMeta::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cockroach.storage.engine.enginepb.TxnMeta.key)
}
inline void TxnMeta::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cockroach.storage.engine.enginepb.TxnMeta.key)
}
inline ::std::string* TxnMeta::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:cockroach.storage.engine.enginepb.TxnMeta.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TxnMeta::release_key() {
  // @@protoc_insertion_point(field_release:cockroach.storage.engine.enginepb.TxnMeta.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TxnMeta::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:cockroach.storage.engine.enginepb.TxnMeta.key)
}

// uint32 epoch = 4;
inline void TxnMeta::clear_epoch() {
  epoch_ = 0u;
}
inline ::google::protobuf::uint32 TxnMeta::epoch() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.TxnMeta.epoch)
  return epoch_;
}
inline void TxnMeta::set_epoch(::google::protobuf::uint32 value) {
  
  epoch_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.TxnMeta.epoch)
}

inline bool TxnMeta::has_timestamp() const {
  return this != internal_default_instance() && timestamp_ != NULL;
}
inline void TxnMeta::clear_timestamp() {
  if (GetArenaNoVirtual() == NULL && timestamp_ != NULL) delete timestamp_;
  timestamp_ = NULL;
}
inline const ::cockroach::util::hlc::Timestamp& TxnMeta::timestamp() const {
  const ::cockroach::util::hlc::Timestamp* p = timestamp_;
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.TxnMeta.timestamp)
  return p != NULL ? *p : *reinterpret_cast<const ::cockroach::util::hlc::Timestamp*>(
      &::cockroach::util::hlc::_Timestamp_default_instance_);
}
inline ::cockroach::util::hlc::Timestamp* TxnMeta::mutable_timestamp() {
  
  if (timestamp_ == NULL) {
    timestamp_ = new ::cockroach::util::hlc::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:cockroach.storage.engine.enginepb.TxnMeta.timestamp)
  return timestamp_;
}
inline ::cockroach::util::hlc::Timestamp* TxnMeta::release_timestamp() {
  // @@protoc_insertion_point(field_release:cockroach.storage.engine.enginepb.TxnMeta.timestamp)
  
  ::cockroach::util::hlc::Timestamp* temp = timestamp_;
  timestamp_ = NULL;
  return temp;
}
inline void TxnMeta::set_allocated_timestamp(::cockroach::util::hlc::Timestamp* timestamp) {
  delete timestamp_;
  timestamp_ = timestamp;
  if (timestamp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cockroach.storage.engine.enginepb.TxnMeta.timestamp)
}

// int32 priority = 6;
inline void TxnMeta::clear_priority() {
  priority_ = 0;
}
inline ::google::protobuf::int32 TxnMeta::priority() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.TxnMeta.priority)
  return priority_;
}
inline void TxnMeta::set_priority(::google::protobuf::int32 value) {
  
  priority_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.TxnMeta.priority)
}

// int32 sequence = 7;
inline void TxnMeta::clear_sequence() {
  sequence_ = 0;
}
inline ::google::protobuf::int32 TxnMeta::sequence() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.TxnMeta.sequence)
  return sequence_;
}
inline void TxnMeta::set_sequence(::google::protobuf::int32 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.TxnMeta.sequence)
}

// int32 batch_index = 8;
inline void TxnMeta::clear_batch_index() {
  batch_index_ = 0;
}
inline ::google::protobuf::int32 TxnMeta::batch_index() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.TxnMeta.batch_index)
  return batch_index_;
}
inline void TxnMeta::set_batch_index(::google::protobuf::int32 value) {
  
  batch_index_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.TxnMeta.batch_index)
}

// -------------------------------------------------------------------

// MVCCNetworkStats

// bool contains_estimates = 14;
inline void MVCCNetworkStats::clear_contains_estimates() {
  contains_estimates_ = false;
}
inline bool MVCCNetworkStats::contains_estimates() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.contains_estimates)
  return contains_estimates_;
}
inline void MVCCNetworkStats::set_contains_estimates(bool value) {
  
  contains_estimates_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.contains_estimates)
}

// sfixed64 last_update_nanos = 1;
inline void MVCCNetworkStats::clear_last_update_nanos() {
  last_update_nanos_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::last_update_nanos() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.last_update_nanos)
  return last_update_nanos_;
}
inline void MVCCNetworkStats::set_last_update_nanos(::google::protobuf::int64 value) {
  
  last_update_nanos_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.last_update_nanos)
}

// sfixed64 intent_age = 2;
inline void MVCCNetworkStats::clear_intent_age() {
  intent_age_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::intent_age() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.intent_age)
  return intent_age_;
}
inline void MVCCNetworkStats::set_intent_age(::google::protobuf::int64 value) {
  
  intent_age_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.intent_age)
}

inline void MVCCNetworkStats::clear_gc_bytes_age() {
  gc_bytes_age_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::gc_bytes_age() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.gc_bytes_age)
  return gc_bytes_age_;
}
inline void MVCCNetworkStats::set_gc_bytes_age(::google::protobuf::int64 value) {
  
  gc_bytes_age_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.gc_bytes_age)
}

// sint64 live_bytes = 4;
inline void MVCCNetworkStats::clear_live_bytes() {
  live_bytes_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::live_bytes() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.live_bytes)
  return live_bytes_;
}
inline void MVCCNetworkStats::set_live_bytes(::google::protobuf::int64 value) {
  
  live_bytes_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.live_bytes)
}

// sint64 live_count = 5;
inline void MVCCNetworkStats::clear_live_count() {
  live_count_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::live_count() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.live_count)
  return live_count_;
}
inline void MVCCNetworkStats::set_live_count(::google::protobuf::int64 value) {
  
  live_count_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.live_count)
}

// sint64 key_bytes = 6;
inline void MVCCNetworkStats::clear_key_bytes() {
  key_bytes_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::key_bytes() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.key_bytes)
  return key_bytes_;
}
inline void MVCCNetworkStats::set_key_bytes(::google::protobuf::int64 value) {
  
  key_bytes_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.key_bytes)
}

// sint64 key_count = 7;
inline void MVCCNetworkStats::clear_key_count() {
  key_count_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::key_count() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.key_count)
  return key_count_;
}
inline void MVCCNetworkStats::set_key_count(::google::protobuf::int64 value) {
  
  key_count_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.key_count)
}

// sint64 val_bytes = 8;
inline void MVCCNetworkStats::clear_val_bytes() {
  val_bytes_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::val_bytes() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.val_bytes)
  return val_bytes_;
}
inline void MVCCNetworkStats::set_val_bytes(::google::protobuf::int64 value) {
  
  val_bytes_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.val_bytes)
}

// sint64 val_count = 9;
inline void MVCCNetworkStats::clear_val_count() {
  val_count_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::val_count() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.val_count)
  return val_count_;
}
inline void MVCCNetworkStats::set_val_count(::google::protobuf::int64 value) {
  
  val_count_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.val_count)
}

// sint64 intent_bytes = 10;
inline void MVCCNetworkStats::clear_intent_bytes() {
  intent_bytes_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::intent_bytes() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.intent_bytes)
  return intent_bytes_;
}
inline void MVCCNetworkStats::set_intent_bytes(::google::protobuf::int64 value) {
  
  intent_bytes_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.intent_bytes)
}

// sint64 intent_count = 11;
inline void MVCCNetworkStats::clear_intent_count() {
  intent_count_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::intent_count() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.intent_count)
  return intent_count_;
}
inline void MVCCNetworkStats::set_intent_count(::google::protobuf::int64 value) {
  
  intent_count_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.intent_count)
}

// sint64 sys_bytes = 12;
inline void MVCCNetworkStats::clear_sys_bytes() {
  sys_bytes_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::sys_bytes() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.sys_bytes)
  return sys_bytes_;
}
inline void MVCCNetworkStats::set_sys_bytes(::google::protobuf::int64 value) {
  
  sys_bytes_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.sys_bytes)
}

// sint64 sys_count = 13;
inline void MVCCNetworkStats::clear_sys_count() {
  sys_count_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MVCCNetworkStats::sys_count() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.MVCCNetworkStats.sys_count)
  return sys_count_;
}
inline void MVCCNetworkStats::set_sys_count(::google::protobuf::int64 value) {
  
  sys_count_ = value;
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.MVCCNetworkStats.sys_count)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace enginepb
}  // namespace engine
}  // namespace storage
}  // namespace cockroach

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::cockroach::storage::engine::enginepb::IsolationType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_storage_2fengine_2fenginepb_2fmvcc3_2eproto__INCLUDED
