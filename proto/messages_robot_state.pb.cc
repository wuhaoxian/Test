// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_robot_state.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "messages_robot_state.pb.h"

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

const ::google::protobuf::Descriptor* Mesg_RobotState_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Mesg_RobotState_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_messages_5frobot_5fstate_2eproto() {
  protobuf_AddDesc_messages_5frobot_5fstate_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "messages_robot_state.proto");
  GOOGLE_CHECK(file != NULL);
  Mesg_RobotState_descriptor_ = file->message_type(0);
  static const int Mesg_RobotState_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, theta_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, noise_x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, noise_y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, noise_theta_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, vx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, vy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, w_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, cycle_),
  };
  Mesg_RobotState_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Mesg_RobotState_descriptor_,
      Mesg_RobotState::default_instance_,
      Mesg_RobotState_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesg_RobotState, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Mesg_RobotState));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_messages_5frobot_5fstate_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Mesg_RobotState_descriptor_, &Mesg_RobotState::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_messages_5frobot_5fstate_2eproto() {
  delete Mesg_RobotState::default_instance_;
  delete Mesg_RobotState_reflection_;
}

void protobuf_AddDesc_messages_5frobot_5fstate_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032messages_robot_state.proto\"\262\001\n\017Mesg_Ro"
    "botState\022\t\n\001x\030\001 \002(\001\022\t\n\001y\030\002 \002(\001\022\r\n\005theta\030"
    "\003 \002(\001\022\017\n\007noise_x\030\004 \001(\001\022\017\n\007noise_y\030\005 \001(\001\022"
    "\023\n\013noise_theta\030\006 \001(\001\022\n\n\002vx\030\007 \001(\001\022\n\n\002vy\030\010"
    " \001(\001\022\t\n\001w\030\t \001(\001\022\021\n\ttimestamp\030\n \001(\t\022\r\n\005cy"
    "cle\030\013 \001(\r", 209);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messages_robot_state.proto", &protobuf_RegisterTypes);
  Mesg_RobotState::default_instance_ = new Mesg_RobotState();
  Mesg_RobotState::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_messages_5frobot_5fstate_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_messages_5frobot_5fstate_2eproto {
  StaticDescriptorInitializer_messages_5frobot_5fstate_2eproto() {
    protobuf_AddDesc_messages_5frobot_5fstate_2eproto();
  }
} static_descriptor_initializer_messages_5frobot_5fstate_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Mesg_RobotState::kXFieldNumber;
const int Mesg_RobotState::kYFieldNumber;
const int Mesg_RobotState::kThetaFieldNumber;
const int Mesg_RobotState::kNoiseXFieldNumber;
const int Mesg_RobotState::kNoiseYFieldNumber;
const int Mesg_RobotState::kNoiseThetaFieldNumber;
const int Mesg_RobotState::kVxFieldNumber;
const int Mesg_RobotState::kVyFieldNumber;
const int Mesg_RobotState::kWFieldNumber;
const int Mesg_RobotState::kTimestampFieldNumber;
const int Mesg_RobotState::kCycleFieldNumber;
#endif  // !_MSC_VER

Mesg_RobotState::Mesg_RobotState()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Mesg_RobotState::InitAsDefaultInstance() {
}

Mesg_RobotState::Mesg_RobotState(const Mesg_RobotState& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Mesg_RobotState::SharedCtor() {
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  theta_ = 0;
  noise_x_ = 0;
  noise_y_ = 0;
  noise_theta_ = 0;
  vx_ = 0;
  vy_ = 0;
  w_ = 0;
  timestamp_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  cycle_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Mesg_RobotState::~Mesg_RobotState() {
  SharedDtor();
}

void Mesg_RobotState::SharedDtor() {
  if (timestamp_ != &::google::protobuf::internal::kEmptyString) {
    delete timestamp_;
  }
  if (this != default_instance_) {
  }
}

void Mesg_RobotState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Mesg_RobotState::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Mesg_RobotState_descriptor_;
}

const Mesg_RobotState& Mesg_RobotState::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_messages_5frobot_5fstate_2eproto();
  return *default_instance_;
}

Mesg_RobotState* Mesg_RobotState::default_instance_ = NULL;

Mesg_RobotState* Mesg_RobotState::New() const {
  return new Mesg_RobotState;
}

void Mesg_RobotState::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    x_ = 0;
    y_ = 0;
    theta_ = 0;
    noise_x_ = 0;
    noise_y_ = 0;
    noise_theta_ = 0;
    vx_ = 0;
    vy_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    w_ = 0;
    if (has_timestamp()) {
      if (timestamp_ != &::google::protobuf::internal::kEmptyString) {
        timestamp_->clear();
      }
    }
    cycle_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Mesg_RobotState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double x = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
          set_has_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_y;
        break;
      }

      // required double y = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
          set_has_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_theta;
        break;
      }

      // required double theta = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_theta:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &theta_)));
          set_has_theta();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(33)) goto parse_noise_x;
        break;
      }

      // optional double noise_x = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_noise_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &noise_x_)));
          set_has_noise_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(41)) goto parse_noise_y;
        break;
      }

      // optional double noise_y = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_noise_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &noise_y_)));
          set_has_noise_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(49)) goto parse_noise_theta;
        break;
      }

      // optional double noise_theta = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_noise_theta:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &noise_theta_)));
          set_has_noise_theta();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(57)) goto parse_vx;
        break;
      }

      // optional double vx = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_vx:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vx_)));
          set_has_vx();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(65)) goto parse_vy;
        break;
      }

      // optional double vy = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_vy:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vy_)));
          set_has_vy();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(73)) goto parse_w;
        break;
      }

      // optional double w = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_w:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &w_)));
          set_has_w();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(82)) goto parse_timestamp;
        break;
      }

      // optional string timestamp = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_timestamp:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_timestamp()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->timestamp().data(), this->timestamp().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_cycle;
        break;
      }

      // optional uint32 cycle = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cycle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cycle_)));
          set_has_cycle();
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

void Mesg_RobotState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required double x = 1;
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // required double y = 2;
  if (has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  // required double theta = 3;
  if (has_theta()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->theta(), output);
  }

  // optional double noise_x = 4;
  if (has_noise_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->noise_x(), output);
  }

  // optional double noise_y = 5;
  if (has_noise_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->noise_y(), output);
  }

  // optional double noise_theta = 6;
  if (has_noise_theta()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->noise_theta(), output);
  }

  // optional double vx = 7;
  if (has_vx()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->vx(), output);
  }

  // optional double vy = 8;
  if (has_vy()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->vy(), output);
  }

  // optional double w = 9;
  if (has_w()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->w(), output);
  }

  // optional string timestamp = 10;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->timestamp().data(), this->timestamp().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      10, this->timestamp(), output);
  }

  // optional uint32 cycle = 11;
  if (has_cycle()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->cycle(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Mesg_RobotState::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required double x = 1;
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // required double y = 2;
  if (has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  // required double theta = 3;
  if (has_theta()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->theta(), target);
  }

  // optional double noise_x = 4;
  if (has_noise_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->noise_x(), target);
  }

  // optional double noise_y = 5;
  if (has_noise_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->noise_y(), target);
  }

  // optional double noise_theta = 6;
  if (has_noise_theta()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->noise_theta(), target);
  }

  // optional double vx = 7;
  if (has_vx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->vx(), target);
  }

  // optional double vy = 8;
  if (has_vy()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->vy(), target);
  }

  // optional double w = 9;
  if (has_w()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->w(), target);
  }

  // optional string timestamp = 10;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->timestamp().data(), this->timestamp().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->timestamp(), target);
  }

  // optional uint32 cycle = 11;
  if (has_cycle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->cycle(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Mesg_RobotState::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required double x = 1;
    if (has_x()) {
      total_size += 1 + 8;
    }

    // required double y = 2;
    if (has_y()) {
      total_size += 1 + 8;
    }

    // required double theta = 3;
    if (has_theta()) {
      total_size += 1 + 8;
    }

    // optional double noise_x = 4;
    if (has_noise_x()) {
      total_size += 1 + 8;
    }

    // optional double noise_y = 5;
    if (has_noise_y()) {
      total_size += 1 + 8;
    }

    // optional double noise_theta = 6;
    if (has_noise_theta()) {
      total_size += 1 + 8;
    }

    // optional double vx = 7;
    if (has_vx()) {
      total_size += 1 + 8;
    }

    // optional double vy = 8;
    if (has_vy()) {
      total_size += 1 + 8;
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional double w = 9;
    if (has_w()) {
      total_size += 1 + 8;
    }

    // optional string timestamp = 10;
    if (has_timestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->timestamp());
    }

    // optional uint32 cycle = 11;
    if (has_cycle()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cycle());
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

void Mesg_RobotState::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Mesg_RobotState* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Mesg_RobotState*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Mesg_RobotState::MergeFrom(const Mesg_RobotState& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_y()) {
      set_y(from.y());
    }
    if (from.has_theta()) {
      set_theta(from.theta());
    }
    if (from.has_noise_x()) {
      set_noise_x(from.noise_x());
    }
    if (from.has_noise_y()) {
      set_noise_y(from.noise_y());
    }
    if (from.has_noise_theta()) {
      set_noise_theta(from.noise_theta());
    }
    if (from.has_vx()) {
      set_vx(from.vx());
    }
    if (from.has_vy()) {
      set_vy(from.vy());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_w()) {
      set_w(from.w());
    }
    if (from.has_timestamp()) {
      set_timestamp(from.timestamp());
    }
    if (from.has_cycle()) {
      set_cycle(from.cycle());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Mesg_RobotState::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Mesg_RobotState::CopyFrom(const Mesg_RobotState& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Mesg_RobotState::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void Mesg_RobotState::Swap(Mesg_RobotState* other) {
  if (other != this) {
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(theta_, other->theta_);
    std::swap(noise_x_, other->noise_x_);
    std::swap(noise_y_, other->noise_y_);
    std::swap(noise_theta_, other->noise_theta_);
    std::swap(vx_, other->vx_);
    std::swap(vy_, other->vy_);
    std::swap(w_, other->w_);
    std::swap(timestamp_, other->timestamp_);
    std::swap(cycle_, other->cycle_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Mesg_RobotState::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Mesg_RobotState_descriptor_;
  metadata.reflection = Mesg_RobotState_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
