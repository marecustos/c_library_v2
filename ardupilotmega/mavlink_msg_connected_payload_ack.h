#pragma once
// MESSAGE CONNECTED_PAYLOAD_ACK PACKING

#define MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK 12005


typedef struct __mavlink_connected_payload_ack_t {
 int16_t payload_id; /*<  ID of the payload*/
 char payload_name[32]; /*<  name of the payload*/
 char payload_state[32]; /*<  state of the payload*/
 uint8_t result; /*<  1: payload info well received 0 otherwise*/
} mavlink_connected_payload_ack_t;

#define MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN 67
#define MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_MIN_LEN 67
#define MAVLINK_MSG_ID_12005_LEN 67
#define MAVLINK_MSG_ID_12005_MIN_LEN 67

#define MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_CRC 178
#define MAVLINK_MSG_ID_12005_CRC 178

#define MAVLINK_MSG_CONNECTED_PAYLOAD_ACK_FIELD_PAYLOAD_NAME_LEN 32
#define MAVLINK_MSG_CONNECTED_PAYLOAD_ACK_FIELD_PAYLOAD_STATE_LEN 32

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CONNECTED_PAYLOAD_ACK { \
    12005, \
    "CONNECTED_PAYLOAD_ACK", \
    4, \
    {  { "payload_id", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_connected_payload_ack_t, payload_id) }, \
         { "payload_name", NULL, MAVLINK_TYPE_CHAR, 32, 2, offsetof(mavlink_connected_payload_ack_t, payload_name) }, \
         { "payload_state", NULL, MAVLINK_TYPE_CHAR, 32, 34, offsetof(mavlink_connected_payload_ack_t, payload_state) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_connected_payload_ack_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CONNECTED_PAYLOAD_ACK { \
    "CONNECTED_PAYLOAD_ACK", \
    4, \
    {  { "payload_id", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_connected_payload_ack_t, payload_id) }, \
         { "payload_name", NULL, MAVLINK_TYPE_CHAR, 32, 2, offsetof(mavlink_connected_payload_ack_t, payload_name) }, \
         { "payload_state", NULL, MAVLINK_TYPE_CHAR, 32, 34, offsetof(mavlink_connected_payload_ack_t, payload_state) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_connected_payload_ack_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a connected_payload_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param payload_id  ID of the payload
 * @param payload_name  name of the payload
 * @param payload_state  state of the payload
 * @param result  1: payload info well received 0 otherwise
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_connected_payload_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t payload_id, const char *payload_name, const char *payload_state, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN];
    _mav_put_int16_t(buf, 0, payload_id);
    _mav_put_uint8_t(buf, 66, result);
    _mav_put_char_array(buf, 2, payload_name, 32);
    _mav_put_char_array(buf, 34, payload_state, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN);
#else
    mavlink_connected_payload_ack_t packet;
    packet.payload_id = payload_id;
    packet.result = result;
    mav_array_memcpy(packet.payload_name, payload_name, sizeof(char)*32);
    mav_array_memcpy(packet.payload_state, payload_state, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_CRC);
}

/**
 * @brief Pack a connected_payload_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param payload_id  ID of the payload
 * @param payload_name  name of the payload
 * @param payload_state  state of the payload
 * @param result  1: payload info well received 0 otherwise
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_connected_payload_ack_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t payload_id, const char *payload_name, const char *payload_state, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN];
    _mav_put_int16_t(buf, 0, payload_id);
    _mav_put_uint8_t(buf, 66, result);
    _mav_put_char_array(buf, 2, payload_name, 32);
    _mav_put_char_array(buf, 34, payload_state, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN);
#else
    mavlink_connected_payload_ack_t packet;
    packet.payload_id = payload_id;
    packet.result = result;
    mav_array_memcpy(packet.payload_name, payload_name, sizeof(char)*32);
    mav_array_memcpy(packet.payload_state, payload_state, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN);
#endif
}

/**
 * @brief Pack a connected_payload_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload_id  ID of the payload
 * @param payload_name  name of the payload
 * @param payload_state  state of the payload
 * @param result  1: payload info well received 0 otherwise
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_connected_payload_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t payload_id,const char *payload_name,const char *payload_state,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN];
    _mav_put_int16_t(buf, 0, payload_id);
    _mav_put_uint8_t(buf, 66, result);
    _mav_put_char_array(buf, 2, payload_name, 32);
    _mav_put_char_array(buf, 34, payload_state, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN);
#else
    mavlink_connected_payload_ack_t packet;
    packet.payload_id = payload_id;
    packet.result = result;
    mav_array_memcpy(packet.payload_name, payload_name, sizeof(char)*32);
    mav_array_memcpy(packet.payload_state, payload_state, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_CRC);
}

/**
 * @brief Encode a connected_payload_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param connected_payload_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_connected_payload_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_connected_payload_ack_t* connected_payload_ack)
{
    return mavlink_msg_connected_payload_ack_pack(system_id, component_id, msg, connected_payload_ack->payload_id, connected_payload_ack->payload_name, connected_payload_ack->payload_state, connected_payload_ack->result);
}

/**
 * @brief Encode a connected_payload_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param connected_payload_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_connected_payload_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_connected_payload_ack_t* connected_payload_ack)
{
    return mavlink_msg_connected_payload_ack_pack_chan(system_id, component_id, chan, msg, connected_payload_ack->payload_id, connected_payload_ack->payload_name, connected_payload_ack->payload_state, connected_payload_ack->result);
}

/**
 * @brief Encode a connected_payload_ack struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param connected_payload_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_connected_payload_ack_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_connected_payload_ack_t* connected_payload_ack)
{
    return mavlink_msg_connected_payload_ack_pack_status(system_id, component_id, _status, msg,  connected_payload_ack->payload_id, connected_payload_ack->payload_name, connected_payload_ack->payload_state, connected_payload_ack->result);
}

/**
 * @brief Send a connected_payload_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param payload_id  ID of the payload
 * @param payload_name  name of the payload
 * @param payload_state  state of the payload
 * @param result  1: payload info well received 0 otherwise
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_connected_payload_ack_send(mavlink_channel_t chan, int16_t payload_id, const char *payload_name, const char *payload_state, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN];
    _mav_put_int16_t(buf, 0, payload_id);
    _mav_put_uint8_t(buf, 66, result);
    _mav_put_char_array(buf, 2, payload_name, 32);
    _mav_put_char_array(buf, 34, payload_state, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK, buf, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_CRC);
#else
    mavlink_connected_payload_ack_t packet;
    packet.payload_id = payload_id;
    packet.result = result;
    mav_array_memcpy(packet.payload_name, payload_name, sizeof(char)*32);
    mav_array_memcpy(packet.payload_state, payload_state, sizeof(char)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK, (const char *)&packet, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_CRC);
#endif
}

/**
 * @brief Send a connected_payload_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_connected_payload_ack_send_struct(mavlink_channel_t chan, const mavlink_connected_payload_ack_t* connected_payload_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_connected_payload_ack_send(chan, connected_payload_ack->payload_id, connected_payload_ack->payload_name, connected_payload_ack->payload_state, connected_payload_ack->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK, (const char *)connected_payload_ack, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_connected_payload_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t payload_id, const char *payload_name, const char *payload_state, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, payload_id);
    _mav_put_uint8_t(buf, 66, result);
    _mav_put_char_array(buf, 2, payload_name, 32);
    _mav_put_char_array(buf, 34, payload_state, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK, buf, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_CRC);
#else
    mavlink_connected_payload_ack_t *packet = (mavlink_connected_payload_ack_t *)msgbuf;
    packet->payload_id = payload_id;
    packet->result = result;
    mav_array_memcpy(packet->payload_name, payload_name, sizeof(char)*32);
    mav_array_memcpy(packet->payload_state, payload_state, sizeof(char)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK, (const char *)packet, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE CONNECTED_PAYLOAD_ACK UNPACKING


/**
 * @brief Get field payload_id from connected_payload_ack message
 *
 * @return  ID of the payload
 */
static inline int16_t mavlink_msg_connected_payload_ack_get_payload_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field payload_name from connected_payload_ack message
 *
 * @return  name of the payload
 */
static inline uint16_t mavlink_msg_connected_payload_ack_get_payload_name(const mavlink_message_t* msg, char *payload_name)
{
    return _MAV_RETURN_char_array(msg, payload_name, 32,  2);
}

/**
 * @brief Get field payload_state from connected_payload_ack message
 *
 * @return  state of the payload
 */
static inline uint16_t mavlink_msg_connected_payload_ack_get_payload_state(const mavlink_message_t* msg, char *payload_state)
{
    return _MAV_RETURN_char_array(msg, payload_state, 32,  34);
}

/**
 * @brief Get field result from connected_payload_ack message
 *
 * @return  1: payload info well received 0 otherwise
 */
static inline uint8_t mavlink_msg_connected_payload_ack_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  66);
}

/**
 * @brief Decode a connected_payload_ack message into a struct
 *
 * @param msg The message to decode
 * @param connected_payload_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_connected_payload_ack_decode(const mavlink_message_t* msg, mavlink_connected_payload_ack_t* connected_payload_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    connected_payload_ack->payload_id = mavlink_msg_connected_payload_ack_get_payload_id(msg);
    mavlink_msg_connected_payload_ack_get_payload_name(msg, connected_payload_ack->payload_name);
    mavlink_msg_connected_payload_ack_get_payload_state(msg, connected_payload_ack->payload_state);
    connected_payload_ack->result = mavlink_msg_connected_payload_ack_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN? msg->len : MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN;
        memset(connected_payload_ack, 0, MAVLINK_MSG_ID_CONNECTED_PAYLOAD_ACK_LEN);
    memcpy(connected_payload_ack, _MAV_PAYLOAD(msg), len);
#endif
}
