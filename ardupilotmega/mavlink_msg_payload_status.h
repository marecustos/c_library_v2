#pragma once
// MESSAGE PAYLOAD_STATUS PACKING

#define MAVLINK_MSG_ID_PAYLOAD_STATUS 12002


typedef struct __mavlink_payload_status_t {
 uint32_t pos_x; /*<  x position */
 uint32_t pos_y; /*<  y position */
 uint32_t pos_z; /*<  z position */
 uint32_t linear_velocity_x; /*<  Linear Velocity x*/
 uint32_t linear_velocity_y; /*<  Linear Velocity y*/
 uint32_t linear_velocity_z; /*<  Linear Velocity z */
 uint32_t angular_velocity_x; /*<  Angular Velocity x*/
 uint32_t angular_velocity_y; /*<  Angular Velocity y*/
 uint32_t angular_velocity_z; /*<  Angular Velocity z */
 char payload_additional_info[16]; /*<  Additional informations if needed*/
} mavlink_payload_status_t;

#define MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN 52
#define MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN 52
#define MAVLINK_MSG_ID_12002_LEN 52
#define MAVLINK_MSG_ID_12002_MIN_LEN 52

#define MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC 148
#define MAVLINK_MSG_ID_12002_CRC 148

#define MAVLINK_MSG_PAYLOAD_STATUS_FIELD_PAYLOAD_ADDITIONAL_INFO_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PAYLOAD_STATUS { \
    12002, \
    "PAYLOAD_STATUS", \
    10, \
    {  { "pos_x", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_payload_status_t, pos_x) }, \
         { "pos_y", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_payload_status_t, pos_y) }, \
         { "pos_z", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_payload_status_t, pos_z) }, \
         { "linear_velocity_x", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_payload_status_t, linear_velocity_x) }, \
         { "linear_velocity_y", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_payload_status_t, linear_velocity_y) }, \
         { "linear_velocity_z", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_payload_status_t, linear_velocity_z) }, \
         { "angular_velocity_x", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_payload_status_t, angular_velocity_x) }, \
         { "angular_velocity_y", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_payload_status_t, angular_velocity_y) }, \
         { "angular_velocity_z", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_payload_status_t, angular_velocity_z) }, \
         { "payload_additional_info", NULL, MAVLINK_TYPE_CHAR, 16, 36, offsetof(mavlink_payload_status_t, payload_additional_info) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PAYLOAD_STATUS { \
    "PAYLOAD_STATUS", \
    10, \
    {  { "pos_x", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_payload_status_t, pos_x) }, \
         { "pos_y", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_payload_status_t, pos_y) }, \
         { "pos_z", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_payload_status_t, pos_z) }, \
         { "linear_velocity_x", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_payload_status_t, linear_velocity_x) }, \
         { "linear_velocity_y", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_payload_status_t, linear_velocity_y) }, \
         { "linear_velocity_z", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_payload_status_t, linear_velocity_z) }, \
         { "angular_velocity_x", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_payload_status_t, angular_velocity_x) }, \
         { "angular_velocity_y", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_payload_status_t, angular_velocity_y) }, \
         { "angular_velocity_z", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_payload_status_t, angular_velocity_z) }, \
         { "payload_additional_info", NULL, MAVLINK_TYPE_CHAR, 16, 36, offsetof(mavlink_payload_status_t, payload_additional_info) }, \
         } \
}
#endif

/**
 * @brief Pack a payload_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pos_x  x position 
 * @param pos_y  y position 
 * @param pos_z  z position 
 * @param linear_velocity_x  Linear Velocity x
 * @param linear_velocity_y  Linear Velocity y
 * @param linear_velocity_z  Linear Velocity z 
 * @param angular_velocity_x  Angular Velocity x
 * @param angular_velocity_y  Angular Velocity y
 * @param angular_velocity_z  Angular Velocity z 
 * @param payload_additional_info  Additional informations if needed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t pos_x, uint32_t pos_y, uint32_t pos_z, uint32_t linear_velocity_x, uint32_t linear_velocity_y, uint32_t linear_velocity_z, uint32_t angular_velocity_x, uint32_t angular_velocity_y, uint32_t angular_velocity_z, const char *payload_additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, pos_x);
    _mav_put_uint32_t(buf, 4, pos_y);
    _mav_put_uint32_t(buf, 8, pos_z);
    _mav_put_uint32_t(buf, 12, linear_velocity_x);
    _mav_put_uint32_t(buf, 16, linear_velocity_y);
    _mav_put_uint32_t(buf, 20, linear_velocity_z);
    _mav_put_uint32_t(buf, 24, angular_velocity_x);
    _mav_put_uint32_t(buf, 28, angular_velocity_y);
    _mav_put_uint32_t(buf, 32, angular_velocity_z);
    _mav_put_char_array(buf, 36, payload_additional_info, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#else
    mavlink_payload_status_t packet;
    packet.pos_x = pos_x;
    packet.pos_y = pos_y;
    packet.pos_z = pos_z;
    packet.linear_velocity_x = linear_velocity_x;
    packet.linear_velocity_y = linear_velocity_y;
    packet.linear_velocity_z = linear_velocity_z;
    packet.angular_velocity_x = angular_velocity_x;
    packet.angular_velocity_y = angular_velocity_y;
    packet.angular_velocity_z = angular_velocity_z;
    mav_array_memcpy(packet.payload_additional_info, payload_additional_info, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
}

/**
 * @brief Pack a payload_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pos_x  x position 
 * @param pos_y  y position 
 * @param pos_z  z position 
 * @param linear_velocity_x  Linear Velocity x
 * @param linear_velocity_y  Linear Velocity y
 * @param linear_velocity_z  Linear Velocity z 
 * @param angular_velocity_x  Angular Velocity x
 * @param angular_velocity_y  Angular Velocity y
 * @param angular_velocity_z  Angular Velocity z 
 * @param payload_additional_info  Additional informations if needed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t pos_x,uint32_t pos_y,uint32_t pos_z,uint32_t linear_velocity_x,uint32_t linear_velocity_y,uint32_t linear_velocity_z,uint32_t angular_velocity_x,uint32_t angular_velocity_y,uint32_t angular_velocity_z,const char *payload_additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, pos_x);
    _mav_put_uint32_t(buf, 4, pos_y);
    _mav_put_uint32_t(buf, 8, pos_z);
    _mav_put_uint32_t(buf, 12, linear_velocity_x);
    _mav_put_uint32_t(buf, 16, linear_velocity_y);
    _mav_put_uint32_t(buf, 20, linear_velocity_z);
    _mav_put_uint32_t(buf, 24, angular_velocity_x);
    _mav_put_uint32_t(buf, 28, angular_velocity_y);
    _mav_put_uint32_t(buf, 32, angular_velocity_z);
    _mav_put_char_array(buf, 36, payload_additional_info, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#else
    mavlink_payload_status_t packet;
    packet.pos_x = pos_x;
    packet.pos_y = pos_y;
    packet.pos_z = pos_z;
    packet.linear_velocity_x = linear_velocity_x;
    packet.linear_velocity_y = linear_velocity_y;
    packet.linear_velocity_z = linear_velocity_z;
    packet.angular_velocity_x = angular_velocity_x;
    packet.angular_velocity_y = angular_velocity_y;
    packet.angular_velocity_z = angular_velocity_z;
    mav_array_memcpy(packet.payload_additional_info, payload_additional_info, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
}

/**
 * @brief Encode a payload_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param payload_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_payload_status_t* payload_status)
{
    return mavlink_msg_payload_status_pack(system_id, component_id, msg, payload_status->pos_x, payload_status->pos_y, payload_status->pos_z, payload_status->linear_velocity_x, payload_status->linear_velocity_y, payload_status->linear_velocity_z, payload_status->angular_velocity_x, payload_status->angular_velocity_y, payload_status->angular_velocity_z, payload_status->payload_additional_info);
}

/**
 * @brief Encode a payload_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_payload_status_t* payload_status)
{
    return mavlink_msg_payload_status_pack_chan(system_id, component_id, chan, msg, payload_status->pos_x, payload_status->pos_y, payload_status->pos_z, payload_status->linear_velocity_x, payload_status->linear_velocity_y, payload_status->linear_velocity_z, payload_status->angular_velocity_x, payload_status->angular_velocity_y, payload_status->angular_velocity_z, payload_status->payload_additional_info);
}

/**
 * @brief Send a payload_status message
 * @param chan MAVLink channel to send the message
 *
 * @param pos_x  x position 
 * @param pos_y  y position 
 * @param pos_z  z position 
 * @param linear_velocity_x  Linear Velocity x
 * @param linear_velocity_y  Linear Velocity y
 * @param linear_velocity_z  Linear Velocity z 
 * @param angular_velocity_x  Angular Velocity x
 * @param angular_velocity_y  Angular Velocity y
 * @param angular_velocity_z  Angular Velocity z 
 * @param payload_additional_info  Additional informations if needed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_payload_status_send(mavlink_channel_t chan, uint32_t pos_x, uint32_t pos_y, uint32_t pos_z, uint32_t linear_velocity_x, uint32_t linear_velocity_y, uint32_t linear_velocity_z, uint32_t angular_velocity_x, uint32_t angular_velocity_y, uint32_t angular_velocity_z, const char *payload_additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, pos_x);
    _mav_put_uint32_t(buf, 4, pos_y);
    _mav_put_uint32_t(buf, 8, pos_z);
    _mav_put_uint32_t(buf, 12, linear_velocity_x);
    _mav_put_uint32_t(buf, 16, linear_velocity_y);
    _mav_put_uint32_t(buf, 20, linear_velocity_z);
    _mav_put_uint32_t(buf, 24, angular_velocity_x);
    _mav_put_uint32_t(buf, 28, angular_velocity_y);
    _mav_put_uint32_t(buf, 32, angular_velocity_z);
    _mav_put_char_array(buf, 36, payload_additional_info, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_STATUS, buf, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#else
    mavlink_payload_status_t packet;
    packet.pos_x = pos_x;
    packet.pos_y = pos_y;
    packet.pos_z = pos_z;
    packet.linear_velocity_x = linear_velocity_x;
    packet.linear_velocity_y = linear_velocity_y;
    packet.linear_velocity_z = linear_velocity_z;
    packet.angular_velocity_x = angular_velocity_x;
    packet.angular_velocity_y = angular_velocity_y;
    packet.angular_velocity_z = angular_velocity_z;
    mav_array_memcpy(packet.payload_additional_info, payload_additional_info, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_STATUS, (const char *)&packet, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#endif
}

/**
 * @brief Send a payload_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_payload_status_send_struct(mavlink_channel_t chan, const mavlink_payload_status_t* payload_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_payload_status_send(chan, payload_status->pos_x, payload_status->pos_y, payload_status->pos_z, payload_status->linear_velocity_x, payload_status->linear_velocity_y, payload_status->linear_velocity_z, payload_status->angular_velocity_x, payload_status->angular_velocity_y, payload_status->angular_velocity_z, payload_status->payload_additional_info);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_STATUS, (const char *)payload_status, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_payload_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t pos_x, uint32_t pos_y, uint32_t pos_z, uint32_t linear_velocity_x, uint32_t linear_velocity_y, uint32_t linear_velocity_z, uint32_t angular_velocity_x, uint32_t angular_velocity_y, uint32_t angular_velocity_z, const char *payload_additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, pos_x);
    _mav_put_uint32_t(buf, 4, pos_y);
    _mav_put_uint32_t(buf, 8, pos_z);
    _mav_put_uint32_t(buf, 12, linear_velocity_x);
    _mav_put_uint32_t(buf, 16, linear_velocity_y);
    _mav_put_uint32_t(buf, 20, linear_velocity_z);
    _mav_put_uint32_t(buf, 24, angular_velocity_x);
    _mav_put_uint32_t(buf, 28, angular_velocity_y);
    _mav_put_uint32_t(buf, 32, angular_velocity_z);
    _mav_put_char_array(buf, 36, payload_additional_info, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_STATUS, buf, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#else
    mavlink_payload_status_t *packet = (mavlink_payload_status_t *)msgbuf;
    packet->pos_x = pos_x;
    packet->pos_y = pos_y;
    packet->pos_z = pos_z;
    packet->linear_velocity_x = linear_velocity_x;
    packet->linear_velocity_y = linear_velocity_y;
    packet->linear_velocity_z = linear_velocity_z;
    packet->angular_velocity_x = angular_velocity_x;
    packet->angular_velocity_y = angular_velocity_y;
    packet->angular_velocity_z = angular_velocity_z;
    mav_array_memcpy(packet->payload_additional_info, payload_additional_info, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_STATUS, (const char *)packet, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE PAYLOAD_STATUS UNPACKING


/**
 * @brief Get field pos_x from payload_status message
 *
 * @return  x position 
 */
static inline uint32_t mavlink_msg_payload_status_get_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field pos_y from payload_status message
 *
 * @return  y position 
 */
static inline uint32_t mavlink_msg_payload_status_get_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field pos_z from payload_status message
 *
 * @return  z position 
 */
static inline uint32_t mavlink_msg_payload_status_get_pos_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field linear_velocity_x from payload_status message
 *
 * @return  Linear Velocity x
 */
static inline uint32_t mavlink_msg_payload_status_get_linear_velocity_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field linear_velocity_y from payload_status message
 *
 * @return  Linear Velocity y
 */
static inline uint32_t mavlink_msg_payload_status_get_linear_velocity_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field linear_velocity_z from payload_status message
 *
 * @return  Linear Velocity z 
 */
static inline uint32_t mavlink_msg_payload_status_get_linear_velocity_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field angular_velocity_x from payload_status message
 *
 * @return  Angular Velocity x
 */
static inline uint32_t mavlink_msg_payload_status_get_angular_velocity_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field angular_velocity_y from payload_status message
 *
 * @return  Angular Velocity y
 */
static inline uint32_t mavlink_msg_payload_status_get_angular_velocity_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  28);
}

/**
 * @brief Get field angular_velocity_z from payload_status message
 *
 * @return  Angular Velocity z 
 */
static inline uint32_t mavlink_msg_payload_status_get_angular_velocity_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  32);
}

/**
 * @brief Get field payload_additional_info from payload_status message
 *
 * @return  Additional informations if needed
 */
static inline uint16_t mavlink_msg_payload_status_get_payload_additional_info(const mavlink_message_t* msg, char *payload_additional_info)
{
    return _MAV_RETURN_char_array(msg, payload_additional_info, 16,  36);
}

/**
 * @brief Decode a payload_status message into a struct
 *
 * @param msg The message to decode
 * @param payload_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_payload_status_decode(const mavlink_message_t* msg, mavlink_payload_status_t* payload_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    payload_status->pos_x = mavlink_msg_payload_status_get_pos_x(msg);
    payload_status->pos_y = mavlink_msg_payload_status_get_pos_y(msg);
    payload_status->pos_z = mavlink_msg_payload_status_get_pos_z(msg);
    payload_status->linear_velocity_x = mavlink_msg_payload_status_get_linear_velocity_x(msg);
    payload_status->linear_velocity_y = mavlink_msg_payload_status_get_linear_velocity_y(msg);
    payload_status->linear_velocity_z = mavlink_msg_payload_status_get_linear_velocity_z(msg);
    payload_status->angular_velocity_x = mavlink_msg_payload_status_get_angular_velocity_x(msg);
    payload_status->angular_velocity_y = mavlink_msg_payload_status_get_angular_velocity_y(msg);
    payload_status->angular_velocity_z = mavlink_msg_payload_status_get_angular_velocity_z(msg);
    mavlink_msg_payload_status_get_payload_additional_info(msg, payload_status->payload_additional_info);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN? msg->len : MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN;
        memset(payload_status, 0, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
    memcpy(payload_status, _MAV_PAYLOAD(msg), len);
#endif
}
