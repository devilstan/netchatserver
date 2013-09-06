// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MsgPackage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MsgPackage.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* MsgPackage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgPackage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MsgPackage_2eproto() {
  protobuf_AddDesc_MsgPackage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MsgPackage.proto");
  GOOGLE_CHECK(file != NULL);
  MsgPackage_descriptor_ = file->message_type(0);
  static const int MsgPackage_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, m_nsock_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, m_nindex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, m_susername_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, m_spassword_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, m_starget_user_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, msg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, m_login_flag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, m_login_stage_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, m_err_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, m_update_user_flag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, handle_),
  };
  MsgPackage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgPackage_descriptor_,
      MsgPackage::default_instance_,
      MsgPackage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgPackage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgPackage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MsgPackage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgPackage_descriptor_, &MsgPackage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MsgPackage_2eproto() {
  delete MsgPackage::default_instance_;
  delete MsgPackage_reflection_;
}

void protobuf_AddDesc_MsgPackage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020MsgPackage.proto\"\356\001\n\nMsgPackage\022\022\n\nm_n"
    "Sock_id\030\001 \002(\r\022\020\n\010m_nIndex\030\002 \002(\005\022\023\n\013m_sUs"
    "ername\030\003 \002(\t\022\023\n\013m_sPassword\030\004 \002(\t\022\026\n\016m_s"
    "Target_user\030\005 \003(\t\022\013\n\003msg\030\006 \002(\t\022\024\n\014m_logi"
    "n_flag\030\007 \002(\010\022\025\n\rm_login_stage\030\010 \002(\005\022\022\n\nm"
    "_err_code\030\t \002(\005\022\032\n\022m_update_user_flag\030\n "
    "\002(\010\022\016\n\006handle\030\013 \002(\t", 259);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MsgPackage.proto", &protobuf_RegisterTypes);
  MsgPackage::default_instance_ = new MsgPackage();
  MsgPackage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MsgPackage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MsgPackage_2eproto {
  StaticDescriptorInitializer_MsgPackage_2eproto() {
    protobuf_AddDesc_MsgPackage_2eproto();
  }
} static_descriptor_initializer_MsgPackage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MsgPackage::kMNSockIdFieldNumber;
const int MsgPackage::kMNIndexFieldNumber;
const int MsgPackage::kMSUsernameFieldNumber;
const int MsgPackage::kMSPasswordFieldNumber;
const int MsgPackage::kMSTargetUserFieldNumber;
const int MsgPackage::kMsgFieldNumber;
const int MsgPackage::kMLoginFlagFieldNumber;
const int MsgPackage::kMLoginStageFieldNumber;
const int MsgPackage::kMErrCodeFieldNumber;
const int MsgPackage::kMUpdateUserFlagFieldNumber;
const int MsgPackage::kHandleFieldNumber;
#endif  // !_MSC_VER

MsgPackage::MsgPackage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MsgPackage::InitAsDefaultInstance() {
}

MsgPackage::MsgPackage(const MsgPackage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MsgPackage::SharedCtor() {
  _cached_size_ = 0;
  m_nsock_id_ = 0u;
  m_nindex_ = 0;
  m_susername_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  m_spassword_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  m_login_flag_ = false;
  m_login_stage_ = 0;
  m_err_code_ = 0;
  m_update_user_flag_ = false;
  handle_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgPackage::~MsgPackage() {
  SharedDtor();
}

void MsgPackage::SharedDtor() {
  if (m_susername_ != &::google::protobuf::internal::kEmptyString) {
    delete m_susername_;
  }
  if (m_spassword_ != &::google::protobuf::internal::kEmptyString) {
    delete m_spassword_;
  }
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (handle_ != &::google::protobuf::internal::kEmptyString) {
    delete handle_;
  }
  if (this != default_instance_) {
  }
}

void MsgPackage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgPackage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgPackage_descriptor_;
}

const MsgPackage& MsgPackage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MsgPackage_2eproto();
  return *default_instance_;
}

MsgPackage* MsgPackage::default_instance_ = NULL;

MsgPackage* MsgPackage::New() const {
  return new MsgPackage;
}

void MsgPackage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    m_nsock_id_ = 0u;
    m_nindex_ = 0;
    if (has_m_susername()) {
      if (m_susername_ != &::google::protobuf::internal::kEmptyString) {
        m_susername_->clear();
      }
    }
    if (has_m_spassword()) {
      if (m_spassword_ != &::google::protobuf::internal::kEmptyString) {
        m_spassword_->clear();
      }
    }
    if (has_msg()) {
      if (msg_ != &::google::protobuf::internal::kEmptyString) {
        msg_->clear();
      }
    }
    m_login_flag_ = false;
    m_login_stage_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    m_err_code_ = 0;
    m_update_user_flag_ = false;
    if (has_handle()) {
      if (handle_ != &::google::protobuf::internal::kEmptyString) {
        handle_->clear();
      }
    }
  }
  m_starget_user_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgPackage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 m_nSock_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &m_nsock_id_)));
          set_has_m_nsock_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_m_nIndex;
        break;
      }

      // required int32 m_nIndex = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_m_nIndex:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &m_nindex_)));
          set_has_m_nindex();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_m_sUsername;
        break;
      }

      // required string m_sUsername = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_m_sUsername:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_m_susername()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->m_susername().data(), this->m_susername().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_m_sPassword;
        break;
      }

      // required string m_sPassword = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_m_sPassword:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_m_spassword()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->m_spassword().data(), this->m_spassword().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_m_sTarget_user;
        break;
      }

      // repeated string m_sTarget_user = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_m_sTarget_user:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_m_starget_user()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->m_starget_user(this->m_starget_user_size() - 1).data(),
            this->m_starget_user(this->m_starget_user_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_m_sTarget_user;
        if (input->ExpectTag(50)) goto parse_msg;
        break;
      }

      // required string msg = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_m_login_flag;
        break;
      }

      // required bool m_login_flag = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_m_login_flag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &m_login_flag_)));
          set_has_m_login_flag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_m_login_stage;
        break;
      }

      // required int32 m_login_stage = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_m_login_stage:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &m_login_stage_)));
          set_has_m_login_stage();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_m_err_code;
        break;
      }

      // required int32 m_err_code = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_m_err_code:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &m_err_code_)));
          set_has_m_err_code();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_m_update_user_flag;
        break;
      }

      // required bool m_update_user_flag = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_m_update_user_flag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &m_update_user_flag_)));
          set_has_m_update_user_flag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(90)) goto parse_handle;
        break;
      }

      // required string handle = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_handle:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_handle()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->handle().data(), this->handle().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MsgPackage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 m_nSock_id = 1;
  if (has_m_nsock_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->m_nsock_id(), output);
  }

  // required int32 m_nIndex = 2;
  if (has_m_nindex()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->m_nindex(), output);
  }

  // required string m_sUsername = 3;
  if (has_m_susername()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->m_susername().data(), this->m_susername().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->m_susername(), output);
  }

  // required string m_sPassword = 4;
  if (has_m_spassword()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->m_spassword().data(), this->m_spassword().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->m_spassword(), output);
  }

  // repeated string m_sTarget_user = 5;
  for (int i = 0; i < this->m_starget_user_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->m_starget_user(i).data(), this->m_starget_user(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->m_starget_user(i), output);
  }

  // required string msg = 6;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->msg(), output);
  }

  // required bool m_login_flag = 7;
  if (has_m_login_flag()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->m_login_flag(), output);
  }

  // required int32 m_login_stage = 8;
  if (has_m_login_stage()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->m_login_stage(), output);
  }

  // required int32 m_err_code = 9;
  if (has_m_err_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->m_err_code(), output);
  }

  // required bool m_update_user_flag = 10;
  if (has_m_update_user_flag()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->m_update_user_flag(), output);
  }

  // required string handle = 11;
  if (has_handle()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->handle().data(), this->handle().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      11, this->handle(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgPackage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 m_nSock_id = 1;
  if (has_m_nsock_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->m_nsock_id(), target);
  }

  // required int32 m_nIndex = 2;
  if (has_m_nindex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->m_nindex(), target);
  }

  // required string m_sUsername = 3;
  if (has_m_susername()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->m_susername().data(), this->m_susername().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->m_susername(), target);
  }

  // required string m_sPassword = 4;
  if (has_m_spassword()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->m_spassword().data(), this->m_spassword().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->m_spassword(), target);
  }

  // repeated string m_sTarget_user = 5;
  for (int i = 0; i < this->m_starget_user_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->m_starget_user(i).data(), this->m_starget_user(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(5, this->m_starget_user(i), target);
  }

  // required string msg = 6;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->msg(), target);
  }

  // required bool m_login_flag = 7;
  if (has_m_login_flag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->m_login_flag(), target);
  }

  // required int32 m_login_stage = 8;
  if (has_m_login_stage()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->m_login_stage(), target);
  }

  // required int32 m_err_code = 9;
  if (has_m_err_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->m_err_code(), target);
  }

  // required bool m_update_user_flag = 10;
  if (has_m_update_user_flag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->m_update_user_flag(), target);
  }

  // required string handle = 11;
  if (has_handle()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->handle().data(), this->handle().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->handle(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgPackage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 m_nSock_id = 1;
    if (has_m_nsock_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->m_nsock_id());
    }

    // required int32 m_nIndex = 2;
    if (has_m_nindex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->m_nindex());
    }

    // required string m_sUsername = 3;
    if (has_m_susername()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->m_susername());
    }

    // required string m_sPassword = 4;
    if (has_m_spassword()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->m_spassword());
    }

    // required string msg = 6;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msg());
    }

    // required bool m_login_flag = 7;
    if (has_m_login_flag()) {
      total_size += 1 + 1;
    }

    // required int32 m_login_stage = 8;
    if (has_m_login_stage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->m_login_stage());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required int32 m_err_code = 9;
    if (has_m_err_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->m_err_code());
    }

    // required bool m_update_user_flag = 10;
    if (has_m_update_user_flag()) {
      total_size += 1 + 1;
    }

    // required string handle = 11;
    if (has_handle()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->handle());
    }

  }
  // repeated string m_sTarget_user = 5;
  total_size += 1 * this->m_starget_user_size();
  for (int i = 0; i < this->m_starget_user_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->m_starget_user(i));
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

void MsgPackage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgPackage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgPackage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgPackage::MergeFrom(const MsgPackage& from) {
  GOOGLE_CHECK_NE(&from, this);
  m_starget_user_.MergeFrom(from.m_starget_user_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_m_nsock_id()) {
      set_m_nsock_id(from.m_nsock_id());
    }
    if (from.has_m_nindex()) {
      set_m_nindex(from.m_nindex());
    }
    if (from.has_m_susername()) {
      set_m_susername(from.m_susername());
    }
    if (from.has_m_spassword()) {
      set_m_spassword(from.m_spassword());
    }
    if (from.has_msg()) {
      set_msg(from.msg());
    }
    if (from.has_m_login_flag()) {
      set_m_login_flag(from.m_login_flag());
    }
    if (from.has_m_login_stage()) {
      set_m_login_stage(from.m_login_stage());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_m_err_code()) {
      set_m_err_code(from.m_err_code());
    }
    if (from.has_m_update_user_flag()) {
      set_m_update_user_flag(from.m_update_user_flag());
    }
    if (from.has_handle()) {
      set_handle(from.handle());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgPackage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgPackage::CopyFrom(const MsgPackage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgPackage::IsInitialized() const {
  if ((_has_bits_[0] & 0x000007ef) != 0x000007ef) return false;

  return true;
}

void MsgPackage::Swap(MsgPackage* other) {
  if (other != this) {
    std::swap(m_nsock_id_, other->m_nsock_id_);
    std::swap(m_nindex_, other->m_nindex_);
    std::swap(m_susername_, other->m_susername_);
    std::swap(m_spassword_, other->m_spassword_);
    m_starget_user_.Swap(&other->m_starget_user_);
    std::swap(msg_, other->msg_);
    std::swap(m_login_flag_, other->m_login_flag_);
    std::swap(m_login_stage_, other->m_login_stage_);
    std::swap(m_err_code_, other->m_err_code_);
    std::swap(m_update_user_flag_, other->m_update_user_flag_);
    std::swap(handle_, other->handle_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgPackage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgPackage_descriptor_;
  metadata.reflection = MsgPackage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
