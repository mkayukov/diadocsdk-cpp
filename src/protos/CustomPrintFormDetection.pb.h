// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CustomPrintFormDetection.proto

#ifndef PROTOBUF_CustomPrintFormDetection_2eproto__INCLUDED
#define PROTOBUF_CustomPrintFormDetection_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "DocumentId.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CustomPrintFormDetection_2eproto();
void protobuf_AssignDesc_CustomPrintFormDetection_2eproto();
void protobuf_ShutdownFile_CustomPrintFormDetection_2eproto();

class CustomPrintFormDetectionRequest;
class CustomPrintFormDetectionResult;
class CustomPrintFormDetectionItemResult;

// ===================================================================

class CustomPrintFormDetectionRequest : public ::google::protobuf::Message {
 public:
  CustomPrintFormDetectionRequest();
  virtual ~CustomPrintFormDetectionRequest();

  CustomPrintFormDetectionRequest(const CustomPrintFormDetectionRequest& from);

  inline CustomPrintFormDetectionRequest& operator=(const CustomPrintFormDetectionRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CustomPrintFormDetectionRequest& default_instance();

  void Swap(CustomPrintFormDetectionRequest* other);

  // implements Message ----------------------------------------------

  CustomPrintFormDetectionRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CustomPrintFormDetectionRequest& from);
  void MergeFrom(const CustomPrintFormDetectionRequest& from);
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
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Diadoc.Api.Proto.DocumentId DocumentIds = 1;
  inline int documentids_size() const;
  inline void clear_documentids();
  static const int kDocumentIdsFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::DocumentId& documentids(int index) const;
  inline ::Diadoc::Api::Proto::DocumentId* mutable_documentids(int index);
  inline ::Diadoc::Api::Proto::DocumentId* add_documentids();
  inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::DocumentId >&
      documentids() const;
  inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::DocumentId >*
      mutable_documentids();

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.CustomPrintFormDetectionRequest)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::DocumentId > documentids_;
  friend void  protobuf_AddDesc_CustomPrintFormDetection_2eproto();
  friend void protobuf_AssignDesc_CustomPrintFormDetection_2eproto();
  friend void protobuf_ShutdownFile_CustomPrintFormDetection_2eproto();

  void InitAsDefaultInstance();
  static CustomPrintFormDetectionRequest* default_instance_;
};
// -------------------------------------------------------------------

class CustomPrintFormDetectionResult : public ::google::protobuf::Message {
 public:
  CustomPrintFormDetectionResult();
  virtual ~CustomPrintFormDetectionResult();

  CustomPrintFormDetectionResult(const CustomPrintFormDetectionResult& from);

  inline CustomPrintFormDetectionResult& operator=(const CustomPrintFormDetectionResult& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CustomPrintFormDetectionResult& default_instance();

  void Swap(CustomPrintFormDetectionResult* other);

  // implements Message ----------------------------------------------

  CustomPrintFormDetectionResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CustomPrintFormDetectionResult& from);
  void MergeFrom(const CustomPrintFormDetectionResult& from);
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
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Diadoc.Api.Proto.CustomPrintFormDetectionItemResult Items = 1;
  inline int items_size() const;
  inline void clear_items();
  static const int kItemsFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult& items(int index) const;
  inline ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult* mutable_items(int index);
  inline ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult* add_items();
  inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult >&
      items() const;
  inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult >*
      mutable_items();

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.CustomPrintFormDetectionResult)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult > items_;
  friend void  protobuf_AddDesc_CustomPrintFormDetection_2eproto();
  friend void protobuf_AssignDesc_CustomPrintFormDetection_2eproto();
  friend void protobuf_ShutdownFile_CustomPrintFormDetection_2eproto();

  void InitAsDefaultInstance();
  static CustomPrintFormDetectionResult* default_instance_;
};
// -------------------------------------------------------------------

class CustomPrintFormDetectionItemResult : public ::google::protobuf::Message {
 public:
  CustomPrintFormDetectionItemResult();
  virtual ~CustomPrintFormDetectionItemResult();

  CustomPrintFormDetectionItemResult(const CustomPrintFormDetectionItemResult& from);

  inline CustomPrintFormDetectionItemResult& operator=(const CustomPrintFormDetectionItemResult& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CustomPrintFormDetectionItemResult& default_instance();

  void Swap(CustomPrintFormDetectionItemResult* other);

  // implements Message ----------------------------------------------

  CustomPrintFormDetectionItemResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CustomPrintFormDetectionItemResult& from);
  void MergeFrom(const CustomPrintFormDetectionItemResult& from);
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
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .Diadoc.Api.Proto.DocumentId DocumentId = 1;
  inline bool has_documentid() const;
  inline void clear_documentid();
  static const int kDocumentIdFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::DocumentId& documentid() const;
  inline ::Diadoc::Api::Proto::DocumentId* mutable_documentid();
  inline ::Diadoc::Api::Proto::DocumentId* release_documentid();
  inline void set_allocated_documentid(::Diadoc::Api::Proto::DocumentId* documentid);

  // required bool HasCustomPrintForm = 2;
  inline bool has_hascustomprintform() const;
  inline void clear_hascustomprintform();
  static const int kHasCustomPrintFormFieldNumber = 2;
  inline bool hascustomprintform() const;
  inline void set_hascustomprintform(bool value);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.CustomPrintFormDetectionItemResult)
 private:
  inline void set_has_documentid();
  inline void clear_has_documentid();
  inline void set_has_hascustomprintform();
  inline void clear_has_hascustomprintform();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::Diadoc::Api::Proto::DocumentId* documentid_;
  bool hascustomprintform_;
  friend void  protobuf_AddDesc_CustomPrintFormDetection_2eproto();
  friend void protobuf_AssignDesc_CustomPrintFormDetection_2eproto();
  friend void protobuf_ShutdownFile_CustomPrintFormDetection_2eproto();

  void InitAsDefaultInstance();
  static CustomPrintFormDetectionItemResult* default_instance_;
};
// ===================================================================


// ===================================================================

// CustomPrintFormDetectionRequest

// repeated .Diadoc.Api.Proto.DocumentId DocumentIds = 1;
inline int CustomPrintFormDetectionRequest::documentids_size() const {
  return documentids_.size();
}
inline void CustomPrintFormDetectionRequest::clear_documentids() {
  documentids_.Clear();
}
inline const ::Diadoc::Api::Proto::DocumentId& CustomPrintFormDetectionRequest::documentids(int index) const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.CustomPrintFormDetectionRequest.DocumentIds)
  return documentids_.Get(index);
}
inline ::Diadoc::Api::Proto::DocumentId* CustomPrintFormDetectionRequest::mutable_documentids(int index) {
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.CustomPrintFormDetectionRequest.DocumentIds)
  return documentids_.Mutable(index);
}
inline ::Diadoc::Api::Proto::DocumentId* CustomPrintFormDetectionRequest::add_documentids() {
  // @@protoc_insertion_point(field_add:Diadoc.Api.Proto.CustomPrintFormDetectionRequest.DocumentIds)
  return documentids_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::DocumentId >&
CustomPrintFormDetectionRequest::documentids() const {
  // @@protoc_insertion_point(field_list:Diadoc.Api.Proto.CustomPrintFormDetectionRequest.DocumentIds)
  return documentids_;
}
inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::DocumentId >*
CustomPrintFormDetectionRequest::mutable_documentids() {
  // @@protoc_insertion_point(field_mutable_list:Diadoc.Api.Proto.CustomPrintFormDetectionRequest.DocumentIds)
  return &documentids_;
}

// -------------------------------------------------------------------

// CustomPrintFormDetectionResult

// repeated .Diadoc.Api.Proto.CustomPrintFormDetectionItemResult Items = 1;
inline int CustomPrintFormDetectionResult::items_size() const {
  return items_.size();
}
inline void CustomPrintFormDetectionResult::clear_items() {
  items_.Clear();
}
inline const ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult& CustomPrintFormDetectionResult::items(int index) const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.CustomPrintFormDetectionResult.Items)
  return items_.Get(index);
}
inline ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult* CustomPrintFormDetectionResult::mutable_items(int index) {
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.CustomPrintFormDetectionResult.Items)
  return items_.Mutable(index);
}
inline ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult* CustomPrintFormDetectionResult::add_items() {
  // @@protoc_insertion_point(field_add:Diadoc.Api.Proto.CustomPrintFormDetectionResult.Items)
  return items_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult >&
CustomPrintFormDetectionResult::items() const {
  // @@protoc_insertion_point(field_list:Diadoc.Api.Proto.CustomPrintFormDetectionResult.Items)
  return items_;
}
inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::CustomPrintFormDetectionItemResult >*
CustomPrintFormDetectionResult::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:Diadoc.Api.Proto.CustomPrintFormDetectionResult.Items)
  return &items_;
}

// -------------------------------------------------------------------

// CustomPrintFormDetectionItemResult

// required .Diadoc.Api.Proto.DocumentId DocumentId = 1;
inline bool CustomPrintFormDetectionItemResult::has_documentid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CustomPrintFormDetectionItemResult::set_has_documentid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CustomPrintFormDetectionItemResult::clear_has_documentid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CustomPrintFormDetectionItemResult::clear_documentid() {
  if (documentid_ != NULL) documentid_->::Diadoc::Api::Proto::DocumentId::Clear();
  clear_has_documentid();
}
inline const ::Diadoc::Api::Proto::DocumentId& CustomPrintFormDetectionItemResult::documentid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.CustomPrintFormDetectionItemResult.DocumentId)
  return documentid_ != NULL ? *documentid_ : *default_instance_->documentid_;
}
inline ::Diadoc::Api::Proto::DocumentId* CustomPrintFormDetectionItemResult::mutable_documentid() {
  set_has_documentid();
  if (documentid_ == NULL) documentid_ = new ::Diadoc::Api::Proto::DocumentId;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.CustomPrintFormDetectionItemResult.DocumentId)
  return documentid_;
}
inline ::Diadoc::Api::Proto::DocumentId* CustomPrintFormDetectionItemResult::release_documentid() {
  clear_has_documentid();
  ::Diadoc::Api::Proto::DocumentId* temp = documentid_;
  documentid_ = NULL;
  return temp;
}
inline void CustomPrintFormDetectionItemResult::set_allocated_documentid(::Diadoc::Api::Proto::DocumentId* documentid) {
  delete documentid_;
  documentid_ = documentid;
  if (documentid) {
    set_has_documentid();
  } else {
    clear_has_documentid();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.CustomPrintFormDetectionItemResult.DocumentId)
}

// required bool HasCustomPrintForm = 2;
inline bool CustomPrintFormDetectionItemResult::has_hascustomprintform() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CustomPrintFormDetectionItemResult::set_has_hascustomprintform() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CustomPrintFormDetectionItemResult::clear_has_hascustomprintform() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CustomPrintFormDetectionItemResult::clear_hascustomprintform() {
  hascustomprintform_ = false;
  clear_has_hascustomprintform();
}
inline bool CustomPrintFormDetectionItemResult::hascustomprintform() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.CustomPrintFormDetectionItemResult.HasCustomPrintForm)
  return hascustomprintform_;
}
inline void CustomPrintFormDetectionItemResult::set_hascustomprintform(bool value) {
  set_has_hascustomprintform();
  hascustomprintform_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.CustomPrintFormDetectionItemResult.HasCustomPrintForm)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CustomPrintFormDetection_2eproto__INCLUDED
