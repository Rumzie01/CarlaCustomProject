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
 * @file Odometry.cpp
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

#include "Odometry.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define geometry_msgs_msg_TwistWithCovariance_max_cdr_typesize 336ULL;
#define geometry_msgs_msg_Vector3_max_cdr_typesize 24ULL;
#define geometry_msgs_msg_Pose_max_cdr_typesize 56ULL;
#define std_msgs_msg_Time_max_cdr_typesize 8ULL;
#define nav_msgs_msg_Odometry_max_cdr_typesize 1208ULL;
#define geometry_msgs_msg_Twist_max_cdr_typesize 48ULL;
#define geometry_msgs_msg_Point_max_cdr_typesize 24ULL;
#define geometry_msgs_msg_PoseWithCovariance_max_cdr_typesize 344ULL;
#define geometry_msgs_msg_Quaternion_max_cdr_typesize 32ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;


#define geometry_msgs_msg_TwistWithCovariance_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Vector3_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Pose_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Time_max_key_cdr_typesize 0ULL;
#define nav_msgs_msg_Odometry_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Twist_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Point_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_PoseWithCovariance_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Quaternion_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;



nav_msgs::msg::Odometry::Odometry()
{
    // std_msgs::msg::Header m_header

    // string m_child_frame_id
    m_child_frame_id ="";
    // geometry_msgs::msg::PoseWithCovariance m_pose

    // geometry_msgs::msg::TwistWithCovariance m_twist


}

nav_msgs::msg::Odometry::~Odometry()
{




}

nav_msgs::msg::Odometry::Odometry(
        const Odometry& x)
{
    m_header = x.m_header;
    m_child_frame_id = x.m_child_frame_id;
    m_pose = x.m_pose;
    m_twist = x.m_twist;
}

nav_msgs::msg::Odometry::Odometry(
        Odometry&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_child_frame_id = std::move(x.m_child_frame_id);
    m_pose = std::move(x.m_pose);
    m_twist = std::move(x.m_twist);
}

nav_msgs::msg::Odometry& nav_msgs::msg::Odometry::operator =(
        const Odometry& x)
{

    m_header = x.m_header;
    m_child_frame_id = x.m_child_frame_id;
    m_pose = x.m_pose;
    m_twist = x.m_twist;

    return *this;
}

nav_msgs::msg::Odometry& nav_msgs::msg::Odometry::operator =(
        Odometry&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_child_frame_id = std::move(x.m_child_frame_id);
    m_pose = std::move(x.m_pose);
    m_twist = std::move(x.m_twist);

    return *this;
}

bool nav_msgs::msg::Odometry::operator ==(
        const Odometry& x) const
{

    return (m_header == x.m_header && m_child_frame_id == x.m_child_frame_id && m_pose == x.m_pose && m_twist == x.m_twist);
}

bool nav_msgs::msg::Odometry::operator !=(
        const Odometry& x) const
{
    return !(*this == x);
}

size_t nav_msgs::msg::Odometry::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return nav_msgs_msg_Odometry_max_cdr_typesize;
}

size_t nav_msgs::msg::Odometry::getCdrSerializedSize(
        const nav_msgs::msg::Odometry& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.child_frame_id().size() + 1;

    current_alignment += geometry_msgs::msg::PoseWithCovariance::getCdrSerializedSize(data.pose(), current_alignment);
    current_alignment += geometry_msgs::msg::TwistWithCovariance::getCdrSerializedSize(data.twist(), current_alignment);

    return current_alignment - initial_alignment;
}

void nav_msgs::msg::Odometry::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_child_frame_id.c_str();
    scdr << m_pose;
    scdr << m_twist;

}

void nav_msgs::msg::Odometry::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_child_frame_id;
    dcdr >> m_pose;
    dcdr >> m_twist;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void nav_msgs::msg::Odometry::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void nav_msgs::msg::Odometry::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& nav_msgs::msg::Odometry::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& nav_msgs::msg::Odometry::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member child_frame_id
 * @param _child_frame_id New value to be copied in member child_frame_id
 */
void nav_msgs::msg::Odometry::child_frame_id(
        const std::string& _child_frame_id)
{
    m_child_frame_id = _child_frame_id;
}

/*!
 * @brief This function moves the value in member child_frame_id
 * @param _child_frame_id New value to be moved in member child_frame_id
 */
void nav_msgs::msg::Odometry::child_frame_id(
        std::string&& _child_frame_id)
{
    m_child_frame_id = std::move(_child_frame_id);
}

/*!
 * @brief This function returns a constant reference to member child_frame_id
 * @return Constant reference to member child_frame_id
 */
const std::string& nav_msgs::msg::Odometry::child_frame_id() const
{
    return m_child_frame_id;
}

/*!
 * @brief This function returns a reference to member child_frame_id
 * @return Reference to member child_frame_id
 */
std::string& nav_msgs::msg::Odometry::child_frame_id()
{
    return m_child_frame_id;
}
/*!
 * @brief This function copies the value in member pose
 * @param _pose New value to be copied in member pose
 */
void nav_msgs::msg::Odometry::pose(
        const geometry_msgs::msg::PoseWithCovariance& _pose)
{
    m_pose = _pose;
}

/*!
 * @brief This function moves the value in member pose
 * @param _pose New value to be moved in member pose
 */
void nav_msgs::msg::Odometry::pose(
        geometry_msgs::msg::PoseWithCovariance&& _pose)
{
    m_pose = std::move(_pose);
}

/*!
 * @brief This function returns a constant reference to member pose
 * @return Constant reference to member pose
 */
const geometry_msgs::msg::PoseWithCovariance& nav_msgs::msg::Odometry::pose() const
{
    return m_pose;
}

/*!
 * @brief This function returns a reference to member pose
 * @return Reference to member pose
 */
geometry_msgs::msg::PoseWithCovariance& nav_msgs::msg::Odometry::pose()
{
    return m_pose;
}
/*!
 * @brief This function copies the value in member twist
 * @param _twist New value to be copied in member twist
 */
void nav_msgs::msg::Odometry::twist(
        const geometry_msgs::msg::TwistWithCovariance& _twist)
{
    m_twist = _twist;
}

/*!
 * @brief This function moves the value in member twist
 * @param _twist New value to be moved in member twist
 */
void nav_msgs::msg::Odometry::twist(
        geometry_msgs::msg::TwistWithCovariance&& _twist)
{
    m_twist = std::move(_twist);
}

/*!
 * @brief This function returns a constant reference to member twist
 * @return Constant reference to member twist
 */
const geometry_msgs::msg::TwistWithCovariance& nav_msgs::msg::Odometry::twist() const
{
    return m_twist;
}

/*!
 * @brief This function returns a reference to member twist
 * @return Reference to member twist
 */
geometry_msgs::msg::TwistWithCovariance& nav_msgs::msg::Odometry::twist()
{
    return m_twist;
}


size_t nav_msgs::msg::Odometry::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return nav_msgs_msg_Odometry_max_key_cdr_typesize;
}

bool nav_msgs::msg::Odometry::isKeyDefined()
{
    return false;
}

void nav_msgs::msg::Odometry::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


