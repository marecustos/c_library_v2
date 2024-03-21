#pragma once
// MESSAGE KEYBOARD_COMMAND_PAYLOAD PACKING

#define MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD 12001


typedef struct __mavlink_keyboard_command_payload_t {
 int16_t key_number; /*<  Pressed key number*/
} mavlink_keyboard_command_payload_t;

#define MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN 2
#define MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_MIN_LEN 2
#define MAVLINK_MSG_ID_12001_LEN 2
#define MAVLINK_MSG_ID_12001_MIN_LEN 2

#define MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_CRC 99
#define MAVLINK_MSG_ID_12001_CRC 99



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_KEYBOARD_COMMAND_PAYLOAD { \
    12001, \
    "KEYBOARD_COMMAND_PAYLOAD", \
    1, \
    {  { "key_number", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_keyboard_command_payload_t, key_number) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_KEYBOARD_COMMAND_PAYLOAD { \
    "KEYBOARD_COMMAND_PAYLOAD", \
    1, \
    {  { "key_number", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_keyboard_command_payload_t, key_number) }, \
         } \
}
#endif

/**
 * @brief Pack a keyboard_command_payload message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param key_number  Pressed key number
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_keyboard_command_payload_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t key_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN];
    _mav_put_int16_t(buf, 0, key_number);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN);
#else
    mavlink_keyboard_command_payload_t packet;
    packet.key_number = key_number;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_MIN_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_CRC);
}

/**
 * @brief Pack a keyboard_command_payload message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param key_number  Pressed key number
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_keyboard_command_payload_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t key_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN];
    _mav_put_int16_t(buf, 0, key_number);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN);
#else
    mavlink_keyboard_command_payload_t packet;
    packet.key_number = key_number;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_MIN_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_MIN_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN);
#endif
}

/**
 * @brief Pack a keyboard_command_payload message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param key_number  Pressed key number
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_keyboard_command_payload_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t key_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN];
    _mav_put_int16_t(buf, 0, key_number);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN);
#else
    mavlink_keyboard_command_payload_t packet;
    packet.key_number = key_number;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_MIN_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_CRC);
}

/**
 * @brief Encode a keyboard_command_payload struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param keyboard_command_payload C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_keyboard_command_payload_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_keyboard_command_payload_t* keyboard_command_payload)
{
    return mavlink_msg_keyboard_command_payload_pack(system_id, component_id, msg, keyboard_command_payload->key_number);
}

/**
 * @brief Encode a keyboard_command_payload struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param keyboard_command_payload C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_keyboard_command_payload_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_keyboard_command_payload_t* keyboard_command_payload)
{
    return mavlink_msg_keyboard_command_payload_pack_chan(system_id, component_id, chan, msg, keyboard_command_payload->key_number);
}

/**
 * @brief Encode a keyboard_command_payload struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param keyboard_command_payload C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_keyboard_command_payload_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_keyboard_command_payload_t* keyboard_command_payload)
{
    return mavlink_msg_keyboard_command_payload_pack_status(system_id, component_id, _status, msg,  keyboard_command_payload->key_number);
}

/**
 * @brief Send a keyboard_command_payload message
 * @param chan MAVLink channel to send the message
 *
 * @param key_number  Pressed key number
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_keyboard_command_payload_send(mavlink_channel_t chan, int16_t key_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN];
    _mav_put_int16_t(buf, 0, key_number);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD, buf, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_MIN_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_CRC);
#else
    mavlink_keyboard_command_payload_t packet;
    packet.key_number = key_number;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD, (const char *)&packet, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_MIN_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_CRC);
#endif
}

/**
 * @brief Send a keyboard_command_payload message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_keyboard_command_payload_send_struct(mavlink_channel_t chan, const mavlink_keyboard_command_payload_t* keyboard_command_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_keyboard_command_payload_send(chan, keyboard_command_payload->key_number);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD, (const char *)keyboard_command_payload, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_MIN_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_CRC);
#endif
}

#if MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_keyboard_command_payload_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t key_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, key_number);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD, buf, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_MIN_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_CRC);
#else
    mavlink_keyboard_command_payload_t *packet = (mavlink_keyboard_command_payload_t *)msgbuf;
    packet->key_number = key_number;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD, (const char *)packet, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_MIN_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_CRC);
#endif
}
#endif

#endif

// MESSAGE KEYBOARD_COMMAND_PAYLOAD UNPACKING


/**
 * @brief Get field key_number from keyboard_command_payload message
 *
 * @return  Pressed key number
 */
static inline int16_t mavlink_msg_keyboard_command_payload_get_key_number(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Decode a keyboard_command_payload message into a struct
 *
 * @param msg The message to decode
 * @param keyboard_command_payload C-struct to decode the message contents into
 */
static inline void mavlink_msg_keyboard_command_payload_decode(const mavlink_message_t* msg, mavlink_keyboard_command_payload_t* keyboard_command_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    keyboard_command_payload->key_number = mavlink_msg_keyboard_command_payload_get_key_number(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN? msg->len : MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN;
        memset(keyboard_command_payload, 0, MAVLINK_MSG_ID_KEYBOARD_COMMAND_PAYLOAD_LEN);
    memcpy(keyboard_command_payload, _MAV_PAYLOAD(msg), len);
#endif
}
