// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CertificateInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CertificateInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

namespace {

const ::google::protobuf::Descriptor* CertificateInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CertificateInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CertificateInfo_2eproto() {
  protobuf_AddDesc_CertificateInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CertificateInfo.proto");
  GOOGLE_CHECK(file != NULL);
  CertificateInfo_descriptor_ = file->message_type(0);
  static const int CertificateInfo_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateInfo, thumbprint_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateInfo, validfrom_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateInfo, validto_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateInfo, organizationname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateInfo, inn_),
  };
  CertificateInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CertificateInfo_descriptor_,
      CertificateInfo::default_instance_,
      CertificateInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CertificateInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CertificateInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CertificateInfo_descriptor_, &CertificateInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CertificateInfo_2eproto() {
  delete CertificateInfo::default_instance_;
  delete CertificateInfo_reflection_;
}

void protobuf_AddDesc_CertificateInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025CertificateInfo.proto\022\020Diadoc.Api.Prot"
    "o\"p\n\017CertificateInfo\022\022\n\nThumbprint\030\001 \001(\t"
    "\022\021\n\tValidFrom\030\002 \001(\020\022\017\n\007ValidTo\030\003 \001(\020\022\030\n\020"
    "OrganizationName\030\004 \001(\t\022\013\n\003Inn\030\005 \001(\t", 155);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CertificateInfo.proto", &protobuf_RegisterTypes);
  CertificateInfo::default_instance_ = new CertificateInfo();
  CertificateInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CertificateInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CertificateInfo_2eproto {
  StaticDescriptorInitializer_CertificateInfo_2eproto() {
    protobuf_AddDesc_CertificateInfo_2eproto();
  }
} static_descriptor_initializer_CertificateInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CertificateInfo::kThumbprintFieldNumber;
const int CertificateInfo::kValidFromFieldNumber;
const int CertificateInfo::kValidToFieldNumber;
const int CertificateInfo::kOrganizationNameFieldNumber;
const int CertificateInfo::kInnFieldNumber;
#endif  // !_MSC_VER

CertificateInfo::CertificateInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.CertificateInfo)
}

void CertificateInfo::InitAsDefaultInstance() {
}

CertificateInfo::CertificateInfo(const CertificateInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.CertificateInfo)
}

void CertificateInfo::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  thumbprint_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  validfrom_ = GOOGLE_LONGLONG(0);
  validto_ = GOOGLE_LONGLONG(0);
  organizationname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  inn_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CertificateInfo::~CertificateInfo() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.CertificateInfo)
  SharedDtor();
}

void CertificateInfo::SharedDtor() {
  if (thumbprint_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete thumbprint_;
  }
  if (organizationname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete organizationname_;
  }
  if (inn_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete inn_;
  }
  if (this != default_instance_) {
  }
}

void CertificateInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CertificateInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CertificateInfo_descriptor_;
}

const CertificateInfo& CertificateInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CertificateInfo_2eproto();
  return *default_instance_;
}

CertificateInfo* CertificateInfo::default_instance_ = NULL;

CertificateInfo* CertificateInfo::New() const {
  return new CertificateInfo;
}

void CertificateInfo::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<CertificateInfo*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(validfrom_, validto_);
    if (has_thumbprint()) {
      if (thumbprint_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        thumbprint_->clear();
      }
    }
    if (has_organizationname()) {
      if (organizationname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        organizationname_->clear();
      }
    }
    if (has_inn()) {
      if (inn_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        inn_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CertificateInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.CertificateInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string Thumbprint = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_thumbprint()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->thumbprint().data(), this->thumbprint().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "thumbprint");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_ValidFrom;
        break;
      }

      // optional sfixed64 ValidFrom = 2;
      case 2: {
        if (tag == 17) {
         parse_ValidFrom:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SFIXED64>(
                 input, &validfrom_)));
          set_has_validfrom();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_ValidTo;
        break;
      }

      // optional sfixed64 ValidTo = 3;
      case 3: {
        if (tag == 25) {
         parse_ValidTo:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SFIXED64>(
                 input, &validto_)));
          set_has_validto();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_OrganizationName;
        break;
      }

      // optional string OrganizationName = 4;
      case 4: {
        if (tag == 34) {
         parse_OrganizationName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_organizationname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->organizationname().data(), this->organizationname().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "organizationname");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_Inn;
        break;
      }

      // optional string Inn = 5;
      case 5: {
        if (tag == 42) {
         parse_Inn:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_inn()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->inn().data(), this->inn().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "inn");
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.CertificateInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.CertificateInfo)
  return false;
#undef DO_
}

void CertificateInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.CertificateInfo)
  // optional string Thumbprint = 1;
  if (has_thumbprint()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->thumbprint().data(), this->thumbprint().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "thumbprint");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->thumbprint(), output);
  }

  // optional sfixed64 ValidFrom = 2;
  if (has_validfrom()) {
    ::google::protobuf::internal::WireFormatLite::WriteSFixed64(2, this->validfrom(), output);
  }

  // optional sfixed64 ValidTo = 3;
  if (has_validto()) {
    ::google::protobuf::internal::WireFormatLite::WriteSFixed64(3, this->validto(), output);
  }

  // optional string OrganizationName = 4;
  if (has_organizationname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->organizationname().data(), this->organizationname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "organizationname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->organizationname(), output);
  }

  // optional string Inn = 5;
  if (has_inn()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->inn().data(), this->inn().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "inn");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->inn(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.CertificateInfo)
}

::google::protobuf::uint8* CertificateInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.CertificateInfo)
  // optional string Thumbprint = 1;
  if (has_thumbprint()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->thumbprint().data(), this->thumbprint().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "thumbprint");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->thumbprint(), target);
  }

  // optional sfixed64 ValidFrom = 2;
  if (has_validfrom()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSFixed64ToArray(2, this->validfrom(), target);
  }

  // optional sfixed64 ValidTo = 3;
  if (has_validto()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSFixed64ToArray(3, this->validto(), target);
  }

  // optional string OrganizationName = 4;
  if (has_organizationname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->organizationname().data(), this->organizationname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "organizationname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->organizationname(), target);
  }

  // optional string Inn = 5;
  if (has_inn()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->inn().data(), this->inn().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "inn");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->inn(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.CertificateInfo)
  return target;
}

int CertificateInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string Thumbprint = 1;
    if (has_thumbprint()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->thumbprint());
    }

    // optional sfixed64 ValidFrom = 2;
    if (has_validfrom()) {
      total_size += 1 + 8;
    }

    // optional sfixed64 ValidTo = 3;
    if (has_validto()) {
      total_size += 1 + 8;
    }

    // optional string OrganizationName = 4;
    if (has_organizationname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->organizationname());
    }

    // optional string Inn = 5;
    if (has_inn()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->inn());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CertificateInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CertificateInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CertificateInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CertificateInfo::MergeFrom(const CertificateInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_thumbprint()) {
      set_thumbprint(from.thumbprint());
    }
    if (from.has_validfrom()) {
      set_validfrom(from.validfrom());
    }
    if (from.has_validto()) {
      set_validto(from.validto());
    }
    if (from.has_organizationname()) {
      set_organizationname(from.organizationname());
    }
    if (from.has_inn()) {
      set_inn(from.inn());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CertificateInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CertificateInfo::CopyFrom(const CertificateInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CertificateInfo::IsInitialized() const {

  return true;
}

void CertificateInfo::Swap(CertificateInfo* other) {
  if (other != this) {
    std::swap(thumbprint_, other->thumbprint_);
    std::swap(validfrom_, other->validfrom_);
    std::swap(validto_, other->validto_);
    std::swap(organizationname_, other->organizationname_);
    std::swap(inn_, other->inn_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CertificateInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CertificateInfo_descriptor_;
  metadata.reflection = CertificateInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
