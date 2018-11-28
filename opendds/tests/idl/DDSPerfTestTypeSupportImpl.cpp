/* Generated by /home/profanter/repos/OpenDDS_build/share/dds/bin/opendds_idl version 3.13 (ACE version 6.2a_p15) running on input file DDSPerfTest.idl */
#include "DDSPerfTestTypeSupportImpl.h"

#include <cstring>
#include <stdexcept>
#include "dds/CorbaSeq/OctetSeqTypeSupportImpl.h"
#include "dds/DCPS/BuiltInTopicUtils.h"
#include "dds/DCPS/ContentFilteredTopicImpl.h"
#include "dds/DCPS/DataReaderImpl_T.h"
#include "dds/DCPS/DataWriterImpl_T.h"
#include "dds/DCPS/FilterEvaluator.h"
#include "dds/DCPS/MultiTopicDataReader_T.h"
#include "dds/DCPS/PoolAllocator.h"
#include "dds/DCPS/PublicationInstance.h"
#include "dds/DCPS/PublisherImpl.h"
#include "dds/DCPS/Qos_Helper.h"
#include "dds/DCPS/RakeData.h"
#include "dds/DCPS/RakeResults_T.h"
#include "dds/DCPS/ReceivedDataElementList.h"
#include "dds/DCPS/Registered_Data_Types.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/SubscriberImpl.h"
#include "dds/DCPS/Util.h"
#include "dds/DCPS/debug.h"
#include "dds/DdsDcpsDomainC.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: DDSPerfTest */



/* Begin TYPEDEF: BufferType */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const DDSPerfTest::BufferType& seq, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(seq);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  if (seq.length() == 0) {
    return;
  }
  size += seq.length() * max_marshaled_size_octet();
}

bool operator<<(Serializer& strm, const DDSPerfTest::BufferType& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  const CORBA::ULong length = seq.length();
  if (!(strm << length)) {
    return false;
  }
  if (length == 0) {
    return true;
  }
  return strm.write_octet_array(seq.get_buffer(), length);
}

bool operator>>(Serializer& strm, DDSPerfTest::BufferType& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  CORBA::ULong length;
  if (!(strm >> length)) {
    return false;
  }
  seq.length(length);
  if (length == 0) {
    return true;
  }
  return strm.read_octet_array(seq.get_buffer(), length);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool gen_skip_over(Serializer& ser, DDSPerfTest::BufferType*)
{
  ACE_UNUSED_ARG(ser);
  ACE_CDR::ULong length;
  if (!(ser >> length)) return false;
  return ser.skip(static_cast<ACE_UINT16>(length), 1);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: BufferType */


/* Begin STRUCT: PubMessage */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const DDSPerfTest::PubMessage& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  gen_find_size(stru.buffer, size, padding);
}

bool operator<<(Serializer& strm, const DDSPerfTest::PubMessage& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.buffer);
}

bool operator>>(Serializer& strm, DDSPerfTest::PubMessage& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.buffer);
}

size_t gen_max_marshaled_size(const DDSPerfTest::PubMessage& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

size_t gen_max_marshaled_size(KeyOnly<const DDSPerfTest::PubMessage> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const DDSPerfTest::PubMessage> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
}

bool operator<<(Serializer& strm, KeyOnly<const DDSPerfTest::PubMessage> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

bool operator>>(Serializer& strm, KeyOnly<DDSPerfTest::PubMessage> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace DDSPerfTest {
::DDS::DataWriter_ptr PubMessageTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<PubMessage> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}

::DDS::DataReader_ptr PubMessageTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<PubMessage> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}

#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr PubMessageTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<PubMessage> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<PubMessage, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& PubMessageTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<PubMessage>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */

bool PubMessageTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}

const char* PubMessageTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}

PubMessageTypeSupport::_ptr_type PubMessageTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<DDSPerfTest::PubMessage> : MetaStruct {
  typedef DDSPerfTest::PubMessage T;

#ifndef OPENDDS_NO_MULTI_TOPIC
  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  Value getValue(const void* stru, const char* field) const
  {
    const DDSPerfTest::PubMessage& typed = *static_cast<const DDSPerfTest::PubMessage*>(stru);
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct DDSPerfTest::PubMessage)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (!gen_skip_over(ser, static_cast<DDSPerfTest::BufferType*>(0))) {
      throw std::runtime_error("Field " + OPENDDS_STRING(field) + " could not be skipped");
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct DDSPerfTest::PubMessage");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct DDSPerfTest::PubMessage)");
  }

#ifndef OPENDDS_NO_MULTI_TOPIC
  const char** getFieldNames() const
  {
    static const char* names[] = {"buffer", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "buffer") == 0) {
      return &static_cast<const T*>(stru)->buffer;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct DDSPerfTest::PubMessage)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "buffer") == 0) {
      static_cast<T*>(lhs)->buffer = *static_cast<const DDSPerfTest::BufferType*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct DDSPerfTest::PubMessage)");
  }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct DDSPerfTest::PubMessage)");
  }
};

template<>
const MetaStruct& getMetaStruct<DDSPerfTest::PubMessage>()
{
  static MetaStructImpl<DDSPerfTest::PubMessage> msi;
  return msi;
}

bool gen_skip_over(Serializer& ser, DDSPerfTest::PubMessage*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<DDSPerfTest::PubMessage>().getValue(ser, "");
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: PubMessage */


/* Begin STRUCT: AckMessage */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const DDSPerfTest::AckMessage& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.size);
}

bool operator<<(Serializer& strm, const DDSPerfTest::AckMessage& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.size);
}

bool operator>>(Serializer& strm, DDSPerfTest::AckMessage& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.size);
}

size_t gen_max_marshaled_size(const DDSPerfTest::AckMessage& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 4;
}

size_t gen_max_marshaled_size(KeyOnly<const DDSPerfTest::AckMessage> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const DDSPerfTest::AckMessage> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
}

bool operator<<(Serializer& strm, KeyOnly<const DDSPerfTest::AckMessage> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

bool operator>>(Serializer& strm, KeyOnly<DDSPerfTest::AckMessage> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace DDSPerfTest {
::DDS::DataWriter_ptr AckMessageTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<AckMessage> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}

::DDS::DataReader_ptr AckMessageTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<AckMessage> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}

#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr AckMessageTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<AckMessage> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<AckMessage, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& AckMessageTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<AckMessage>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */

bool AckMessageTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}

const char* AckMessageTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}

AckMessageTypeSupport::_ptr_type AckMessageTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<DDSPerfTest::AckMessage> : MetaStruct {
  typedef DDSPerfTest::AckMessage T;

#ifndef OPENDDS_NO_MULTI_TOPIC
  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  Value getValue(const void* stru, const char* field) const
  {
    const DDSPerfTest::AckMessage& typed = *static_cast<const DDSPerfTest::AckMessage*>(stru);
    if (std::strcmp(field, "size") == 0) {
      return typed.size;
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct DDSPerfTest::AckMessage)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strcmp(field, "size") == 0) {
      ACE_CDR::Long val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'size' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 4)) {
        throw std::runtime_error("Field 'size' could not be skipped");
      }
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct DDSPerfTest::AckMessage");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "size") == 0) {
      return make_field_cmp(&T::size, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct DDSPerfTest::AckMessage)");
  }

#ifndef OPENDDS_NO_MULTI_TOPIC
  const char** getFieldNames() const
  {
    static const char* names[] = {"size", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "size") == 0) {
      return &static_cast<const T*>(stru)->size;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct DDSPerfTest::AckMessage)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "size") == 0) {
      static_cast<T*>(lhs)->size = *static_cast<const CORBA::Long*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct DDSPerfTest::AckMessage)");
  }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "size") == 0) {
      return static_cast<const T*>(lhs)->size == static_cast<const T*>(rhs)->size;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct DDSPerfTest::AckMessage)");
  }
};

template<>
const MetaStruct& getMetaStruct<DDSPerfTest::AckMessage>()
{
  static MetaStructImpl<DDSPerfTest::AckMessage> msi;
  return msi;
}

bool gen_skip_over(Serializer& ser, DDSPerfTest::AckMessage*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<DDSPerfTest::AckMessage>().getValue(ser, "");
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: AckMessage */

/* End MODULE: DDSPerfTest */
