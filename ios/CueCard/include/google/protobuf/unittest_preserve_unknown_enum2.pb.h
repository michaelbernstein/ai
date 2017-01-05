// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_preserve_unknown_enum2.proto

#ifndef PROTOBUF_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace proto2_preserve_unknown_enum_unittest {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto();
void protobuf_InitDefaults_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto();

class MyMessage;

enum MyEnum {
  FOO = 0,
  BAR = 1,
  BAZ = 2
};
bool MyEnum_IsValid(int value);
const MyEnum MyEnum_MIN = FOO;
const MyEnum MyEnum_MAX = BAZ;
const int MyEnum_ARRAYSIZE = MyEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* MyEnum_descriptor();
inline const ::std::string& MyEnum_Name(MyEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    MyEnum_descriptor(), value);
}
inline bool MyEnum_Parse(
    const ::std::string& name, MyEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MyEnum>(
    MyEnum_descriptor(), name, value);
}
// ===================================================================

class MyMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto2_preserve_unknown_enum_unittest.MyMessage) */ {
 public:
  MyMessage();
  virtual ~MyMessage();

  MyMessage(const MyMessage& from);

  inline MyMessage& operator=(const MyMessage& from) {
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
  static const MyMessage& default_instance();

  enum OCase {
    kOneofE1 = 5,
    kOneofE2 = 6,
    O_NOT_SET = 0,
  };

  static const MyMessage* internal_default_instance();

  void Swap(MyMessage* other);

  // implements Message ----------------------------------------------

  inline MyMessage* New() const { return New(NULL); }

  MyMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MyMessage& from);
  void MergeFrom(const MyMessage& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MyMessage* other);
  void UnsafeMergeFrom(const MyMessage& from);
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

  // optional .proto2_preserve_unknown_enum_unittest.MyEnum e = 1;
  bool has_e() const;
  void clear_e();
  static const int kEFieldNumber = 1;
  ::proto2_preserve_unknown_enum_unittest::MyEnum e() const;
  void set_e(::proto2_preserve_unknown_enum_unittest::MyEnum value);

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_e = 2;
  int repeated_e_size() const;
  void clear_repeated_e();
  static const int kRepeatedEFieldNumber = 2;
  ::proto2_preserve_unknown_enum_unittest::MyEnum repeated_e(int index) const;
  void set_repeated_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value);
  void add_repeated_e(::proto2_preserve_unknown_enum_unittest::MyEnum value);
  const ::google::protobuf::RepeatedField<int>& repeated_e() const;
  ::google::protobuf::RepeatedField<int>* mutable_repeated_e();

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_e = 3 [packed = true];
  int repeated_packed_e_size() const;
  void clear_repeated_packed_e();
  static const int kRepeatedPackedEFieldNumber = 3;
  ::proto2_preserve_unknown_enum_unittest::MyEnum repeated_packed_e(int index) const;
  void set_repeated_packed_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value);
  void add_repeated_packed_e(::proto2_preserve_unknown_enum_unittest::MyEnum value);
  const ::google::protobuf::RepeatedField<int>& repeated_packed_e() const;
  ::google::protobuf::RepeatedField<int>* mutable_repeated_packed_e();

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_unexpected_e = 4;
  int repeated_packed_unexpected_e_size() const;
  void clear_repeated_packed_unexpected_e();
  static const int kRepeatedPackedUnexpectedEFieldNumber = 4;
  ::proto2_preserve_unknown_enum_unittest::MyEnum repeated_packed_unexpected_e(int index) const;
  void set_repeated_packed_unexpected_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value);
  void add_repeated_packed_unexpected_e(::proto2_preserve_unknown_enum_unittest::MyEnum value);
  const ::google::protobuf::RepeatedField<int>& repeated_packed_unexpected_e() const;
  ::google::protobuf::RepeatedField<int>* mutable_repeated_packed_unexpected_e();

  // optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_1 = 5;
  bool has_oneof_e_1() const;
  void clear_oneof_e_1();
  static const int kOneofE1FieldNumber = 5;
  ::proto2_preserve_unknown_enum_unittest::MyEnum oneof_e_1() const;
  void set_oneof_e_1(::proto2_preserve_unknown_enum_unittest::MyEnum value);

  // optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_2 = 6;
  bool has_oneof_e_2() const;
  void clear_oneof_e_2();
  static const int kOneofE2FieldNumber = 6;
  ::proto2_preserve_unknown_enum_unittest::MyEnum oneof_e_2() const;
  void set_oneof_e_2(::proto2_preserve_unknown_enum_unittest::MyEnum value);

  OCase o_case() const;
  // @@protoc_insertion_point(class_scope:proto2_preserve_unknown_enum_unittest.MyMessage)
 private:
  inline void set_has_e();
  inline void clear_has_e();
  inline void set_has_oneof_e_1();
  inline void set_has_oneof_e_2();

  inline bool has_o() const;
  void clear_o();
  inline void clear_has_o();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField<int> repeated_e_;
  ::google::protobuf::RepeatedField<int> repeated_packed_e_;
  mutable int _repeated_packed_e_cached_byte_size_;
  ::google::protobuf::RepeatedField<int> repeated_packed_unexpected_e_;
  int e_;
  union OUnion {
    OUnion() {}
    int oneof_e_1_;
    int oneof_e_2_;
  } o_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_InitDefaults_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<MyMessage> MyMessage_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MyMessage

// optional .proto2_preserve_unknown_enum_unittest.MyEnum e = 1;
inline bool MyMessage::has_e() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MyMessage::set_has_e() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MyMessage::clear_has_e() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MyMessage::clear_e() {
  e_ = 0;
  clear_has_e();
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::e() const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(e_);
}
inline void MyMessage::set_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  set_has_e();
  e_ = value;
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.e)
}

// repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_e = 2;
inline int MyMessage::repeated_e_size() const {
  return repeated_e_.size();
}
inline void MyMessage::clear_repeated_e() {
  repeated_e_.Clear();
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::repeated_e(int index) const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(repeated_e_.Get(index));
}
inline void MyMessage::set_repeated_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_e_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
}
inline void MyMessage::add_repeated_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_e_.Add(value);
  // @@protoc_insertion_point(field_add:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
}
inline const ::google::protobuf::RepeatedField<int>&
MyMessage::repeated_e() const {
  // @@protoc_insertion_point(field_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
  return repeated_e_;
}
inline ::google::protobuf::RepeatedField<int>*
MyMessage::mutable_repeated_e() {
  // @@protoc_insertion_point(field_mutable_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
  return &repeated_e_;
}

// repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_e = 3 [packed = true];
inline int MyMessage::repeated_packed_e_size() const {
  return repeated_packed_e_.size();
}
inline void MyMessage::clear_repeated_packed_e() {
  repeated_packed_e_.Clear();
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::repeated_packed_e(int index) const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(repeated_packed_e_.Get(index));
}
inline void MyMessage::set_repeated_packed_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_e_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
}
inline void MyMessage::add_repeated_packed_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_e_.Add(value);
  // @@protoc_insertion_point(field_add:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
}
inline const ::google::protobuf::RepeatedField<int>&
MyMessage::repeated_packed_e() const {
  // @@protoc_insertion_point(field_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
  return repeated_packed_e_;
}
inline ::google::protobuf::RepeatedField<int>*
MyMessage::mutable_repeated_packed_e() {
  // @@protoc_insertion_point(field_mutable_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
  return &repeated_packed_e_;
}

// repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_unexpected_e = 4;
inline int MyMessage::repeated_packed_unexpected_e_size() const {
  return repeated_packed_unexpected_e_.size();
}
inline void MyMessage::clear_repeated_packed_unexpected_e() {
  repeated_packed_unexpected_e_.Clear();
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::repeated_packed_unexpected_e(int index) const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(repeated_packed_unexpected_e_.Get(index));
}
inline void MyMessage::set_repeated_packed_unexpected_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_unexpected_e_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
}
inline void MyMessage::add_repeated_packed_unexpected_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_unexpected_e_.Add(value);
  // @@protoc_insertion_point(field_add:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
}
inline const ::google::protobuf::RepeatedField<int>&
MyMessage::repeated_packed_unexpected_e() const {
  // @@protoc_insertion_point(field_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
  return repeated_packed_unexpected_e_;
}
inline ::google::protobuf::RepeatedField<int>*
MyMessage::mutable_repeated_packed_unexpected_e() {
  // @@protoc_insertion_point(field_mutable_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
  return &repeated_packed_unexpected_e_;
}

// optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_1 = 5;
inline bool MyMessage::has_oneof_e_1() const {
  return o_case() == kOneofE1;
}
inline void MyMessage::set_has_oneof_e_1() {
  _oneof_case_[0] = kOneofE1;
}
inline void MyMessage::clear_oneof_e_1() {
  if (has_oneof_e_1()) {
    o_.oneof_e_1_ = 0;
    clear_has_o();
  }
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::oneof_e_1() const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_1)
  if (has_oneof_e_1()) {
    return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(o_.oneof_e_1_);
  }
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(0);
}
inline void MyMessage::set_oneof_e_1(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  if (!has_oneof_e_1()) {
    clear_o();
    set_has_oneof_e_1();
  }
  o_.oneof_e_1_ = value;
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_1)
}

// optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_2 = 6;
inline bool MyMessage::has_oneof_e_2() const {
  return o_case() == kOneofE2;
}
inline void MyMessage::set_has_oneof_e_2() {
  _oneof_case_[0] = kOneofE2;
}
inline void MyMessage::clear_oneof_e_2() {
  if (has_oneof_e_2()) {
    o_.oneof_e_2_ = 0;
    clear_has_o();
  }
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::oneof_e_2() const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_2)
  if (has_oneof_e_2()) {
    return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(o_.oneof_e_2_);
  }
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(0);
}
inline void MyMessage::set_oneof_e_2(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  if (!has_oneof_e_2()) {
    clear_o();
    set_has_oneof_e_2();
  }
  o_.oneof_e_2_ = value;
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_2)
}

inline bool MyMessage::has_o() const {
  return o_case() != O_NOT_SET;
}
inline void MyMessage::clear_has_o() {
  _oneof_case_[0] = O_NOT_SET;
}
inline MyMessage::OCase MyMessage::o_case() const {
  return MyMessage::OCase(_oneof_case_[0]);
}
inline const MyMessage* MyMessage::internal_default_instance() {
  return &MyMessage_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto2_preserve_unknown_enum_unittest

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::proto2_preserve_unknown_enum_unittest::MyEnum> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto2_preserve_unknown_enum_unittest::MyEnum>() {
  return ::proto2_preserve_unknown_enum_unittest::MyEnum_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto__INCLUDED
