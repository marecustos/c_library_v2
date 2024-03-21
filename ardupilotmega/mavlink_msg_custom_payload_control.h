#pragma once
// MESSAGE CUSTOM_PAYLOAD_CONTROL PACKING

#define MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL 12003


typedef struct __mavlink_custom_payload_control_t {
 int16_t command_value; /*<  Value of the command*/
 char command_target[32]; /*<  specify target to control*/
} mavlink_custom_payload_control_t;

#define MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN 34
#define MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_MIN_LEN 34
#define MAVLINK_MSG_ID_12003_LEN 34
#define MAVLINK_MSG_ID_12003_MIN_LEN 34

#define MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_CRC 77
#define MAVLINK_MSG_ID_12003_CRC 77

#define MAVLINK_MSG_CUSTOM_PAYLOAD_CONTROL_FIELD_COMMAND_TARGET_LEN 32

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CUSTOM_PAYLOAD_CONTROL { \
    12003, \
    "CUSTOM_PAYLOAD_CONTROL", \
    2, \
    {  { "command_target", NULL, MAVLINK_TYPE_CHAR, 32, 2, offsetof(mavlink_custom_payload_control_t, command_target) }, \
         { "command_value", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_custom_payload_control_t, command_value) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CUSTOM_PAYLOAD_CONTROL { \
    "CUSTOM_PAYLOAD_CONTROL", \
    2, \
    {  { "command_target", NULL, MAVLINK_TYPE_CHAR, 32, 2, offsetof(mavlink_custom_payload_control_t, command_target) }, \
         { "command_value", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_custom_payload_control_t, command_value) }, \
         } \
}
#endif

/**
 * @brief Pack a custom_payload_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command_target  specify target to control
 * @param command_value  Value of the command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_custom_payload_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *command_target, int16_t command_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, command_value);
    _mav_put_char_array(buf, 2, command_target, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN);
#else
    mavlink_custom_payload_control_t packet;
    packet.command_value = command_value;
    mav_array_memcpy(packet.command_target, command_target, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_CRC);
}

/**
 * @brief Pack a custom_payload_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param command_target  specify target to control
 * @param command_value  Value of the command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_custom_payload_control_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *command_target, int16_t command_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, command_value);
    _mav_put_char_array(buf, 2, command_target, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN);
#else
    mavlink_custom_payload_control_t packet;
    packet.command_value = command_value;
    mav_array_memcpy(packet.command_target, command_target, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN);
#endif
}

/**
 * @brief Pack a custom_payload_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_target  specify target to control
 * @param command_value  Value of the command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_custom_payload_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *command_target,int16_t command_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, command_value);
    _mav_put_char_array(buf, 2, command_target, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN);
#else
    mavlink_custom_payload_control_t packet;
    packet.command_value = command_value;
    mav_array_memcpy(packet.command_target, command_target, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_CRC);
}

/**
 * @brief Encode a custom_payload_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param custom_payload_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_custom_payload_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_custom_payload_control_t* custom_payload_control)
{
    return mavlink_msg_custom_payload_control_pack(system_id, component_id, msg, custom_payload_control->command_target, custom_payload_control->command_value);
}

/**
 * @brief Encode a custom_payload_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param custom_payload_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_custom_payload_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_custom_payload_control_t* custom_payload_control)
{
    return mavlink_msg_custom_payload_control_pack_chan(system_id, component_id, chan, msg, custom_payload_control->command_target, custom_payload_control->command_value);
}

/**
 * @brief Encode a custom_payload_control struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param custom_payload_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_custom_payload_control_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_custom_payload_control_t* custom_payload_control)
{
    return mavlink_msg_custom_payload_control_pack_status(system_id, component_id, _status, msg,  custom_payload_control->command_target, custom_payload_control->command_value);
}

/**
 * @brief Send a custom_payload_control message
 * @param chan MAVLink channel to send the message
 *
 * @param command_target  specify target to control
 * @param command_value  Value of the command
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_custom_payload_control_send(mavlink_channel_t chan, const char *command_target, int16_t command_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, command_value);
    _mav_put_char_array(buf, 2, command_target, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL, buf, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_CRC);
#else
    mavlink_custom_payload_control_t packet;
    packet.command_value = command_value;
    mav_array_memcpy(packet.command_target, command_target, sizeof(char)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_CRC);
#endif
}

/**
 * @brief Send a custom_payload_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_custom_payload_control_send_struct(mavlink_channel_t chan, const mavlink_custom_payload_control_t* custom_payload_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_custom_payload_control_send(chan, custom_payload_control->command_target, custom_payload_control->command_value);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL, (const char *)custom_payload_control, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_custom_payload_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *command_target, int16_t command_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, command_value);
    _mav_put_char_array(buf, 2, command_target, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL, buf, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_CRC);
#else
    mavlink_custom_payload_control_t *packet = (mavlink_custom_payload_control_t *)msgbuf;
    packet->command_value = command_value;
    mav_array_memcpy(packet->command_target, command_target, sizeof(char)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL, (const char *)packet, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE CUSTOM_PAYLOAD_CONTROL UNPACKING


/**
 * @brief Get field command_target from custom_payload_control message
 *
 * @return  specify target to control
 */
static inline uint16_t mavlink_msg_custom_payload_control_get_command_target(const mavlink_message_t* msg, char *command_target)
{
    return _MAV_RETURN_char_array(msg, command_target, 32,  2);
}

/**
 * @brief Get field command_value from custom_payload_control message
 *
 * @return  Value of the command
 */
static inline int16_t mavlink_msg_custom_payload_control_get_command_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Decode a custom_payload_control message into a struct
 *
 * @param msg The message to decode
 * @param custom_payload_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_custom_payload_control_decode(const mavlink_message_t* msg, mavlink_custom_payload_control_t* custom_payload_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    custom_payload_control->command_value = mavlink_msg_custom_payload_control_get_command_value(msg);
    mavlink_msg_custom_payload_control_get_command_target(msg, custom_payload_control->command_target);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN;
        memset(custom_payload_control, 0, MAVLINK_MSG_ID_CUSTOM_PAYLOAD_CONTROL_LEN);
    memcpy(custom_payload_control, _MAV_PAYLOAD(msg), len);
#endif
}
