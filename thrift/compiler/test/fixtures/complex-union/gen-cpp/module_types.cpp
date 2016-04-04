/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "module_types.h"

#include "module_reflection.h"

#include <algorithm>
#include <string.h>



uint32_t ComplexUnion::read(apache::thrift::protocol::TProtocol* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;
  xfer += iprot->readStructBegin(fname);
  xfer += iprot->readFieldBegin(fname, ftype, fid);
  if (ftype == apache::thrift::protocol::T_STOP) {
    __clear();
  } else {
    switch (fid) {
      case 1: {
        if (ftype == apache::thrift::protocol::T_I64) {
          set_intValue();
          xfer += iprot->readI64(this->value_.intValue);
        } else {
        xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2: {
        if (ftype == apache::thrift::protocol::T_STRING) {
          set_stringValue();
          xfer += iprot->readString(this->value_.stringValue);
        } else {
        xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3: {
        if (ftype == apache::thrift::protocol::T_LIST) {
          set_intListValue();
          {
            this->value_.intListValue.clear();
            uint32_t _size0;
            bool _sizeUnknown1;
            apache::thrift::protocol::TType _etype4;
            xfer += iprot->readListBegin(_etype4, _size0, _sizeUnknown1);
            if (!_sizeUnknown1) {
              this->value_.intListValue.resize(_size0);
              uint32_t _i5;
              for (_i5 = 0; _i5 < _size0; ++_i5)
              {
                xfer += iprot->readI64(this->value_.intListValue[_i5]);
              }
            } else {
              while (iprot->peekList())
              {
                int64_t _elem6;
                xfer += iprot->readI64(_elem6);
                this->value_.intListValue.push_back(_elem6);
              }
            }
            xfer += iprot->readListEnd();
          }
        } else {
        xfer += iprot->skip(ftype);
        }
        break;
      }
      case 4: {
        if (ftype == apache::thrift::protocol::T_LIST) {
          set_stringListValue();
          {
            this->value_.stringListValue.clear();
            uint32_t _size7;
            bool _sizeUnknown8;
            apache::thrift::protocol::TType _etype11;
            xfer += iprot->readListBegin(_etype11, _size7, _sizeUnknown8);
            if (!_sizeUnknown8) {
              this->value_.stringListValue.resize(_size7);
              uint32_t _i12;
              for (_i12 = 0; _i12 < _size7; ++_i12)
              {
                xfer += iprot->readString(this->value_.stringListValue[_i12]);
              }
            } else {
              while (iprot->peekList())
              {
                std::string _elem13;
                xfer += iprot->readString(_elem13);
                this->value_.stringListValue.push_back(_elem13);
              }
            }
            xfer += iprot->readListEnd();
          }
        } else {
        xfer += iprot->skip(ftype);
        }
        break;
      }
      case 5: {
        if (ftype == apache::thrift::protocol::T_STRING) {
          set_stringRef();
          xfer += iprot->readString(this->value_.stringRef);
        } else {
        xfer += iprot->skip(ftype);
        }
        break;
      }
      default: xfer += iprot->skip(ftype); break;
    }
    xfer += iprot->readFieldEnd();
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ComplexUnion::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ComplexUnion");
  switch (type_) {
    case Type::intValue: {
      xfer += oprot->writeFieldBegin("intValue", apache::thrift::protocol::T_I64, 1);
      xfer += oprot->writeI64(this->value_.intValue);
      xfer += oprot->writeFieldEnd();
      break;
    }
    case Type::stringValue: {
      xfer += oprot->writeFieldBegin("stringValue", apache::thrift::protocol::T_STRING, 2);
      xfer += oprot->writeString(this->value_.stringValue);
      xfer += oprot->writeFieldEnd();
      break;
    }
    case Type::intListValue: {
      xfer += oprot->writeFieldBegin("intListValue", apache::thrift::protocol::T_LIST, 3);
      {
        xfer += oprot->writeListBegin(apache::thrift::protocol::T_I64, this->value_.intListValue.size());
        std::vector<int64_t> ::const_iterator _iter14;
        for (_iter14 = this->value_.intListValue.begin(); _iter14 != this->value_.intListValue.end(); ++_iter14)
        {
          xfer += oprot->writeI64((*_iter14));
        }
        xfer += oprot->writeListEnd();
      }
      xfer += oprot->writeFieldEnd();
      break;
    }
    case Type::stringListValue: {
      xfer += oprot->writeFieldBegin("stringListValue", apache::thrift::protocol::T_LIST, 4);
      {
        xfer += oprot->writeListBegin(apache::thrift::protocol::T_STRING, this->value_.stringListValue.size());
        std::vector<std::string> ::const_iterator _iter15;
        for (_iter15 = this->value_.stringListValue.begin(); _iter15 != this->value_.stringListValue.end(); ++_iter15)
        {
          xfer += oprot->writeString((*_iter15));
        }
        xfer += oprot->writeListEnd();
      }
      xfer += oprot->writeFieldEnd();
      break;
    }
    case Type::stringRef: {
      xfer += oprot->writeFieldBegin("stringRef", apache::thrift::protocol::T_STRING, 5);
      xfer += oprot->writeString(this->value_.stringRef);
      xfer += oprot->writeFieldEnd();
      break;
    }
    case Type::__EMPTY__:;
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


