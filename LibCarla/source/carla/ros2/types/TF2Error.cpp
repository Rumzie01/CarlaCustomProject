// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*!
 * @file TF2Error.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "TF2Error.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define tf2_msgs_msg_TF2Error_max_cdr_typesize 264ULL;
#define tf2_msgs_msg_TF2Error_max_key_cdr_typesize 0ULL;








tf2_msgs::msg::TF2Error::TF2Error()
{
    // octet m_error
    m_error = 0;
    // string m_error_string
    m_error_string ="";

}

tf2_msgs::msg::TF2Error::~TF2Error()
{


}

tf2_msgs::msg::TF2Error::TF2Error(
        const TF2Error& x)
{
    m_error = x.m_error;
    m_error_string = x.m_error_string;
}

tf2_msgs::msg::TF2Error::TF2Error(
        TF2Error&& x) noexcept 
{
    m_error = x.m_error;
    m_error_string = std::move(x.m_error_string);
}

tf2_msgs::msg::TF2Error& tf2_msgs::msg::TF2Error::operator =(
        const TF2Error& x)
{

    m_error = x.m_error;
    m_error_string = x.m_error_string;

    return *this;
}

tf2_msgs::msg::TF2Error& tf2_msgs::msg::TF2Error::operator =(
        TF2Error&& x) noexcept
{

    m_error = x.m_error;
    m_error_string = std::move(x.m_error_string);

    return *this;
}

bool tf2_msgs::msg::TF2Error::operator ==(
        const TF2Error& x) const
{

    return (m_error == x.m_error && m_error_string == x.m_error_string);
}

bool tf2_msgs::msg::TF2Error::operator !=(
        const TF2Error& x) const
{
    return !(*this == x);
}

size_t tf2_msgs::msg::TF2Error::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return tf2_msgs_msg_TF2Error_max_cdr_typesize;
}

size_t tf2_msgs::msg::TF2Error::getCdrSerializedSize(
        const tf2_msgs::msg::TF2Error& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.error_string().size() + 1;


    return current_alignment - initial_alignment;
}

void tf2_msgs::msg::TF2Error::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_error;
    scdr << m_error_string.c_str();

}

void tf2_msgs::msg::TF2Error::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_error;
    dcdr >> m_error_string;
}

/*!
 * @brief This function sets a value in member error
 * @param _error New value for member error
 */
void tf2_msgs::msg::TF2Error::error(
        uint8_t _error)
{
    m_error = _error;
}

/*!
 * @brief This function returns the value of member error
 * @return Value of member error
 */
uint8_t tf2_msgs::msg::TF2Error::error() const
{
    return m_error;
}

/*!
 * @brief This function returns a reference to member error
 * @return Reference to member error
 */
uint8_t& tf2_msgs::msg::TF2Error::error()
{
    return m_error;
}

/*!
 * @brief This function copies the value in member error_string
 * @param _error_string New value to be copied in member error_string
 */
void tf2_msgs::msg::TF2Error::error_string(
        const std::string& _error_string)
{
    m_error_string = _error_string;
}

/*!
 * @brief This function moves the value in member error_string
 * @param _error_string New value to be moved in member error_string
 */
void tf2_msgs::msg::TF2Error::error_string(
        std::string&& _error_string)
{
    m_error_string = std::move(_error_string);
}

/*!
 * @brief This function returns a constant reference to member error_string
 * @return Constant reference to member error_string
 */
const std::string& tf2_msgs::msg::TF2Error::error_string() const
{
    return m_error_string;
}

/*!
 * @brief This function returns a reference to member error_string
 * @return Reference to member error_string
 */
std::string& tf2_msgs::msg::TF2Error::error_string()
{
    return m_error_string;
}


size_t tf2_msgs::msg::TF2Error::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return tf2_msgs_msg_TF2Error_max_key_cdr_typesize;
}

bool tf2_msgs::msg::TF2Error::isKeyDefined()
{
    return false;
}

void tf2_msgs::msg::TF2Error::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


