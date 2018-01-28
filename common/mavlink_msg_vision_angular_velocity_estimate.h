#pragma once
// MESSAGE VISION_ANGULAR_VELOCITY_ESTIMATE PACKING

#define MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE 151

MAVPACKED(
typedef struct __mavlink_vision_angular_velocity_estimate_t {
 uint64_t usec; /*< Timestamp (microseconds, synced to UNIX time or since system boot)*/
 float rollspeed; /*< Global roll speed*/
 float pitchspeed; /*< Global pitch speed*/
 float yawspeed; /*< Global yaw speed*/
}) mavlink_vision_angular_velocity_estimate_t;

#define MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN 20
#define MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_MIN_LEN 20
#define MAVLINK_MSG_ID_151_LEN 20
#define MAVLINK_MSG_ID_151_MIN_LEN 20

#define MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_CRC 24
#define MAVLINK_MSG_ID_151_CRC 24



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VISION_ANGULAR_VELOCITY_ESTIMATE { \
    151, \
    "VISION_ANGULAR_VELOCITY_ESTIMATE", \
    4, \
    {  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_vision_angular_velocity_estimate_t, usec) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vision_angular_velocity_estimate_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_vision_angular_velocity_estimate_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_vision_angular_velocity_estimate_t, yawspeed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VISION_ANGULAR_VELOCITY_ESTIMATE { \
    "VISION_ANGULAR_VELOCITY_ESTIMATE", \
    4, \
    {  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_vision_angular_velocity_estimate_t, usec) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vision_angular_velocity_estimate_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_vision_angular_velocity_estimate_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_vision_angular_velocity_estimate_t, yawspeed) }, \
         } \
}
#endif

/**
 * @brief Pack a vision_angular_velocity_estimate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param rollspeed Global roll speed
 * @param pitchspeed Global pitch speed
 * @param yawspeed Global yaw speed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vision_angular_velocity_estimate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t usec, float rollspeed, float pitchspeed, float yawspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN];
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, rollspeed);
    _mav_put_float(buf, 12, pitchspeed);
    _mav_put_float(buf, 16, yawspeed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN);
#else
    mavlink_vision_angular_velocity_estimate_t packet;
    packet.usec = usec;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_CRC);
}

/**
 * @brief Pack a vision_angular_velocity_estimate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param rollspeed Global roll speed
 * @param pitchspeed Global pitch speed
 * @param yawspeed Global yaw speed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vision_angular_velocity_estimate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t usec,float rollspeed,float pitchspeed,float yawspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN];
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, rollspeed);
    _mav_put_float(buf, 12, pitchspeed);
    _mav_put_float(buf, 16, yawspeed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN);
#else
    mavlink_vision_angular_velocity_estimate_t packet;
    packet.usec = usec;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_CRC);
}

/**
 * @brief Encode a vision_angular_velocity_estimate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vision_angular_velocity_estimate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vision_angular_velocity_estimate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vision_angular_velocity_estimate_t* vision_angular_velocity_estimate)
{
    return mavlink_msg_vision_angular_velocity_estimate_pack(system_id, component_id, msg, vision_angular_velocity_estimate->usec, vision_angular_velocity_estimate->rollspeed, vision_angular_velocity_estimate->pitchspeed, vision_angular_velocity_estimate->yawspeed);
}

/**
 * @brief Encode a vision_angular_velocity_estimate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vision_angular_velocity_estimate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vision_angular_velocity_estimate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vision_angular_velocity_estimate_t* vision_angular_velocity_estimate)
{
    return mavlink_msg_vision_angular_velocity_estimate_pack_chan(system_id, component_id, chan, msg, vision_angular_velocity_estimate->usec, vision_angular_velocity_estimate->rollspeed, vision_angular_velocity_estimate->pitchspeed, vision_angular_velocity_estimate->yawspeed);
}

/**
 * @brief Send a vision_angular_velocity_estimate message
 * @param chan MAVLink channel to send the message
 *
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param rollspeed Global roll speed
 * @param pitchspeed Global pitch speed
 * @param yawspeed Global yaw speed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vision_angular_velocity_estimate_send(mavlink_channel_t chan, uint64_t usec, float rollspeed, float pitchspeed, float yawspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN];
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, rollspeed);
    _mav_put_float(buf, 12, pitchspeed);
    _mav_put_float(buf, 16, yawspeed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE, buf, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_CRC);
#else
    mavlink_vision_angular_velocity_estimate_t packet;
    packet.usec = usec;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE, (const char *)&packet, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_CRC);
#endif
}

/**
 * @brief Send a vision_angular_velocity_estimate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vision_angular_velocity_estimate_send_struct(mavlink_channel_t chan, const mavlink_vision_angular_velocity_estimate_t* vision_angular_velocity_estimate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vision_angular_velocity_estimate_send(chan, vision_angular_velocity_estimate->usec, vision_angular_velocity_estimate->rollspeed, vision_angular_velocity_estimate->pitchspeed, vision_angular_velocity_estimate->yawspeed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE, (const char *)vision_angular_velocity_estimate, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vision_angular_velocity_estimate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t usec, float rollspeed, float pitchspeed, float yawspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, rollspeed);
    _mav_put_float(buf, 12, pitchspeed);
    _mav_put_float(buf, 16, yawspeed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE, buf, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_CRC);
#else
    mavlink_vision_angular_velocity_estimate_t *packet = (mavlink_vision_angular_velocity_estimate_t *)msgbuf;
    packet->usec = usec;
    packet->rollspeed = rollspeed;
    packet->pitchspeed = pitchspeed;
    packet->yawspeed = yawspeed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE, (const char *)packet, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_CRC);
#endif
}
#endif

#endif

// MESSAGE VISION_ANGULAR_VELOCITY_ESTIMATE UNPACKING


/**
 * @brief Get field usec from vision_angular_velocity_estimate message
 *
 * @return Timestamp (microseconds, synced to UNIX time or since system boot)
 */
static inline uint64_t mavlink_msg_vision_angular_velocity_estimate_get_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field rollspeed from vision_angular_velocity_estimate message
 *
 * @return Global roll speed
 */
static inline float mavlink_msg_vision_angular_velocity_estimate_get_rollspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pitchspeed from vision_angular_velocity_estimate message
 *
 * @return Global pitch speed
 */
static inline float mavlink_msg_vision_angular_velocity_estimate_get_pitchspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field yawspeed from vision_angular_velocity_estimate message
 *
 * @return Global yaw speed
 */
static inline float mavlink_msg_vision_angular_velocity_estimate_get_yawspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a vision_angular_velocity_estimate message into a struct
 *
 * @param msg The message to decode
 * @param vision_angular_velocity_estimate C-struct to decode the message contents into
 */
static inline void mavlink_msg_vision_angular_velocity_estimate_decode(const mavlink_message_t* msg, mavlink_vision_angular_velocity_estimate_t* vision_angular_velocity_estimate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vision_angular_velocity_estimate->usec = mavlink_msg_vision_angular_velocity_estimate_get_usec(msg);
    vision_angular_velocity_estimate->rollspeed = mavlink_msg_vision_angular_velocity_estimate_get_rollspeed(msg);
    vision_angular_velocity_estimate->pitchspeed = mavlink_msg_vision_angular_velocity_estimate_get_pitchspeed(msg);
    vision_angular_velocity_estimate->yawspeed = mavlink_msg_vision_angular_velocity_estimate_get_yawspeed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN? msg->len : MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN;
        memset(vision_angular_velocity_estimate, 0, MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_LEN);
    memcpy(vision_angular_velocity_estimate, _MAV_PAYLOAD(msg), len);
#endif
}
