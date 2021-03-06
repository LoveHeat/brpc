// Copyright (c) 2014 Baidu, Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "esp_message.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)


namespace brpc {

namespace {

const ::google::protobuf::Descriptor* EspMessage_descriptor_ = NULL;

}  // namespace

void protobuf_AssignDesc_esp_5fmessage_2eproto() {
    protobuf_AddDesc_esp_5fmessage_2eproto();
    const ::google::protobuf::FileDescriptor* file =
        ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
                "esp_message.proto");
    GOOGLE_CHECK(file != NULL);
    EspMessage_descriptor_ = file->message_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
    ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
            &protobuf_AssignDesc_esp_5fmessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
    protobuf_AssignDescriptorsOnce();
    ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
            EspMessage_descriptor_, &EspMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_esp_5fmessage_2eproto() {
    delete EspMessage::default_instance_;
}

void protobuf_AddDesc_esp_5fmessage_2eproto() {
    static bool already_here = false;

    if (already_here) {
        return;
    }

    already_here = true;
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
            "\n\021esp_message.proto\022\tbaidu.rpc\"\014\n\nEspMessage", 44);
    ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
            "esp_message.proto", &protobuf_RegisterTypes);
    EspMessage::default_instance_ = new EspMessage();
    EspMessage::default_instance_->InitAsDefaultInstance();
    ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_esp_5fmessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_esp_5fmessage_2eproto {
    StaticDescriptorInitializer_esp_5fmessage_2eproto() {
        protobuf_AddDesc_esp_5fmessage_2eproto();
    }
} static_descriptor_initializer_esp_5fmessage_2eproto_;


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

EspMessage::EspMessage()
    : ::google::protobuf::Message() {
    SharedCtor();
}

void EspMessage::InitAsDefaultInstance() {
}

EspMessage::EspMessage(const EspMessage& from)
    : ::google::protobuf::Message() {
    SharedCtor();
    MergeFrom(from);
}

void EspMessage::SharedCtor() {
    memset(&head, 0, sizeof(head));
}

EspMessage::~EspMessage() {
    SharedDtor();
}

void EspMessage::SharedDtor() {
    if (this != default_instance_) {
    }
}

const ::google::protobuf::Descriptor* EspMessage::descriptor() {
    protobuf_AssignDescriptorsOnce();
    return EspMessage_descriptor_;
}

const EspMessage& EspMessage::default_instance() {
    if (default_instance_ == NULL) {
        protobuf_AddDesc_esp_5fmessage_2eproto();
    }

    return *default_instance_;
}

EspMessage* EspMessage::default_instance_ = NULL;

EspMessage* EspMessage::New() const {
    return new EspMessage;
}

void EspMessage::Clear() {
    head.body_len = 0;
    body.clear();
}

bool EspMessage::MergePartialFromCodedStream(
        ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
    ::google::protobuf::uint32 tag;

    while ((tag = input->ReadTag()) != 0) {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
            return true;
        }
    }
    return true;
#undef DO_
}

void EspMessage::SerializeWithCachedSizes(
        ::google::protobuf::io::CodedOutputStream*) const {
}

::google::protobuf::uint8* EspMessage::SerializeWithCachedSizesToArray(
        ::google::protobuf::uint8* target) const {
    return target;
}

int EspMessage::ByteSize() const {
    return sizeof(head) + body.size();
}

void EspMessage::MergeFrom(const ::google::protobuf::Message& from) {
    GOOGLE_CHECK_NE(&from, this);
    const EspMessage* source =
        ::google::protobuf::internal::dynamic_cast_if_available<const EspMessage*>(
                &from);

    if (source == NULL) {
        ::google::protobuf::internal::ReflectionOps::Merge(from, this);
    } else {
        MergeFrom(*source);
    }
}

void EspMessage::MergeFrom(const EspMessage& from) {
    GOOGLE_CHECK_NE(&from, this);
    head = from.head;
    body = from.body;
}

void EspMessage::CopyFrom(const ::google::protobuf::Message& from) {
    if (&from == this) {
        return;
    }

    Clear();
    MergeFrom(from);
}

void EspMessage::CopyFrom(const EspMessage& from) {
    if (&from == this) {
        return;
    }

    Clear();
    MergeFrom(from);
}

bool EspMessage::IsInitialized() const {
    return true;
}

void EspMessage::Swap(EspMessage* other) {
    if (other != this) {
        const EspHead tmp = other->head;
        other->head = head;
        head = tmp;
        body.swap(other->body);
    }
}

::google::protobuf::Metadata EspMessage::GetMetadata() const {
    protobuf_AssignDescriptorsOnce();
    ::google::protobuf::Metadata metadata;
    metadata.descriptor = EspMessage_descriptor_;
    metadata.reflection = NULL;
    return metadata;
}

// @@protoc_insertion_point(namespace_scope)

} // namespace brpc


// @@protoc_insertion_point(global_scope)
