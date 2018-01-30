#pragma once
// MESSAGE VISION_VELOCITY_ESTIMATE PACKING

#define MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE 224

MAVPACKED(
typedef struct __mavlink_vision_velocity_estimate_t {
 uint64_t usec; /*< Timestamp (microseconds, synced to UNIX time or since system boot)*/
 float vx; /*< Global X speed*/
 float vy; /*< Global Y speed*/
 float vz; /*< Global Z speed*/
 float rollspeed; /*< Global roll speed*/
 float pitchspeed; /*< Global pitch speed*/
 float yawspeed; /*< Global yaw speed*/
}) mavlink_vision_velocity_estimate_t;

#define MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN 32
#define MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_MIN_LEN 32
#define MAVLINK_MSG_ID_224_LEN 32
#define MAVLINK_MSG_ID_224_MIN_LEN 32

#define MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_CRC 83
#define MAVLINK_MSG_ID_224_CRC 83



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VISION_VELOCITY_ESTIMATE { \
    224, \
    "VISION_VELOCITY_ESTIMATE", \
    7, \
    {  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_vision_velocity_estimate_t, usec) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vision_velocity_estimate_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_vision_velocity_estimate_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_vision_velocity_estimate_t, vz) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_vision_velocity_estimate_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_vision_velocity_estimate_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_vision_velocity_estimate_t, yawspeed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VISION_VELOCITY_ESTIMATE { \
    "VISION_VELOCITY_ESTIMATE", \
    7, \
    {  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_vision_velocity_estimate_t, usec) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vision_velocity_estimate_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_vision_velocity_estimate_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_vision_velocity_estimate_t, vz) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_vision_velocity_estimate_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_vision_velocity_estimate_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_vision_velocity_estimate_t, yawspeed) }, \
         } \
}
#endif

/**
 * @brief Pack a vision_velocity_estimate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param vx Global X speed
 * @param vy Global Y speed
 * @param vz Global Z speed
 * @param rollspeed Global roll speed
 * @param pitchspeed Global pitch speed
 * @param yawspeed Global yaw speed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vision_velocity_estimate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t usec, float vx, float vy, float vz, float rollspeed, float pitchspeed, float yawspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN];
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, vx);
    _mav_put_float(buf, 12, vy);
    _mav_put_float(buf, 16, vz);
    _mav_put_float(buf, 20, rollspeed);
    _mav_put_float(buf, 24, pitchspeed);
    _mav_put_float(buf, 28, yawspeed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN);
#else
    mavlink_vision_velocity_estimate_t packet;
    packet.usec = usec;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_CRC);
}

/**
 * @brief Pack a vision_velocity_estimate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param vx Global X speed
 * @param vy Global Y speed
 * @param vz Global Z speed
 * @param rollspeed Global roll speed
 * @param pitchspeed Global pitch speed
 * @param yawspeed Global yaw speed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vision_velocity_estimate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t usec,float vx,float vy,float vz,float rollspeed,float pitchspeed,float yawspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN];
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, vx);
    _mav_put_float(buf, 12, vy);
    _mav_put_float(buf, 16, vz);
    _mav_put_float(buf, 20, rollspeed);
    _mav_put_float(buf, 24, pitchspeed);
    _mav_put_float(buf, 28, yawspeed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN);
#else
    mavlink_vision_velocity_estimate_t packet;
    packet.usec = usec;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_CRC);
}

/**
 * @brief Encode a vision_velocity_estimate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vision_velocity_estimate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vision_velocity_estimate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vision_velocity_estimate_t* vision_velocity_estimate)
{
    return mavlink_msg_vision_velocity_estimate_pack(system_id, component_id, msg, vision_velocity_estimate->usec, vision_velocity_estimate->vx, vision_velocity_estimate->vy, vision_velocity_estimate->vz, vision_velocity_estimate->rollspeed, vision_velocity_estimate->pitchspeed, vision_velocity_estimate->yawspeed);
}

/**
 * @brief Encode a vision_velocity_estimate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vision_velocity_estimate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vision_velocity_estimate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vision_velocity_estimate_t* vision_velocity_estimate)
{
    return mavlink_msg_vision_velocity_estimate_pack_chan(system_id, component_id, chan, msg, vision_velocity_estimate->usec, vision_velocity_estimate->vx, vision_velocity_estimate->vy, vision_velocity_estimate->vz, vision_velocity_estimate->rollspeed, vision_velocity_estimate->pitchspeed, vision_velocity_estimate->yawspeed);
}

/**
 * @brief Send a vision_velocity_estimate message
 * @param chan MAVLink channel to send the message
 *
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param vx Global X speed
 * @param vy Global Y speed
 * @param vz Global Z speed
 * @param rollspeed Global roll speed
 * @param pitchspeed Global pitch speed
 * @param yawspeed Global yaw speed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vision_velocity_estimate_send(mavlink_channel_t chan, uint64_t usec, float vx, float vy, float vz, float rollspeed, float pitchspeed, float yawspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN];
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, vx);
    _mav_put_float(buf, 12, vy);
    _mav_put_float(buf, 16, vz);
    _mav_put_float(buf, 20, rollspeed);
    _mav_put_float(buf, 24, pitchspeed);
    _mav_put_float(buf, 28, yawspeed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE, buf, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_CRC);
#else
    mavlink_vision_velocity_estimate_t packet;
    packet.usec = usec;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE, (const char *)&packet, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_CRC);
#endif
}

/**
 * @brief Send a vision_velocity_estimate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vision_velocity_estimate_send_struct(mavlink_channel_t chan, const mavlink_vision_velocity_estimate_t* vision_velocity_estimate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vision_velocity_estimate_send(chan, vision_velocity_estimate->usec, vision_velocity_estimate->vx, vision_velocity_estimate->vy, vision_velocity_estimate->vz, vision_velocity_estimate->rollspeed, vision_velocity_estimate->pitchspeed, vision_velocity_estimate->yawspeed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE, (const char *)vision_velocity_estimate, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vision_velocity_estimate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t usec, float vx, float vy, float vz, float rollspeed, float pitchspeed, float yawspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, vx);
    _mav_put_float(buf, 12, vy);
    _mav_put_float(buf, 16, vz);
    _mav_put_float(buf, 20, rollspeed);
    _mav_put_float(buf, 24, pitchspeed);
    _mav_put_float(buf, 28, yawspeed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE, buf, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_CRC);
#else
    mavlink_vision_velocity_estimate_t *packet = (mavlink_vision_velocity_estimate_t *)msgbuf;
    packet->usec = usec;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->rollspeed = rollspeed;
    packet->pitchspeed = pitchspeed;
    packet->yawspeed = yawspeed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE, (const char *)packet, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_CRC);
#endif
}
#endif

#endif

// MESSAGE VISION_VELOCITY_ESTIMATE UNPACKING


/**
 * @brief Get field usec from vision_velocity_estimate message
 *
 * @return Timestamp (microseconds, synced to UNIX time or since system boot)
 */
static inline uint64_t mavlink_msg_vision_velocity_estimate_get_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field vx from vision_velocity_estimate message
 *
 * @return Global X speed
 */
static inline float mavlink_msg_vision_velocity_estimate_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field vy from vision_velocity_estimate message
 *
 * @return Global Y speed
 */
static inline float mavlink_msg_vision_velocity_estimate_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field vz from vision_velocity_estimate message
 *
 * @return Global Z speed
 */
static inline float mavlink_msg_vision_velocity_estimate_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field rollspeed from vision_velocity_estimate message
 *
 * @return Global roll speed
 */
static inline float mavlink_msg_vision_velocity_estimate_get_rollspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field pitchspeed from vision_velocity_estimate message
 *
 * @return Global pitch speed
 */
static inline float mavlink_msg_vision_velocity_estimate_get_pitchspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field yawspeed from vision_velocity_estimate message
 *
 * @return Global yaw speed
 */
static inline float mavlink_msg_vision_velocity_estimate_get_yawspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a vision_velocity_estimate message into a struct
 *
 * @param msg The message to decode
 * @param vision_velocity_estimate C-struct to decode the message contents into
 */
static inline void mavlink_msg_vision_velocity_estimate_decode(const mavlink_message_t* msg, mavlink_vision_velocity_estimate_t* vision_velocity_estimate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vision_velocity_estimate->usec = mavlink_msg_vision_velocity_estimate_get_usec(msg);
    vision_velocity_estimate->vx = mavlink_msg_vision_velocity_estimate_get_vx(msg);
    vision_velocity_estimate->vy = mavlink_msg_vision_velocity_estimate_get_vy(msg);
    vision_velocity_estimate->vz = mavlink_msg_vision_velocity_estimate_get_vz(msg);
    vision_velocity_estimate->rollspeed = mavlink_msg_vision_velocity_estimate_get_rollspeed(msg);
    vision_velocity_estimate->pitchspeed = mavlink_msg_vision_velocity_estimate_get_pitchspeed(msg);
    vision_velocity_estimate->yawspeed = mavlink_msg_vision_velocity_estimate_get_yawspeed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN? msg->len : MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN;
        memset(vision_velocity_estimate, 0, MAVLINK_MSG_ID_VISION_VELOCITY_ESTIMATE_LEN);
    memcpy(vision_velocity_estimate, _MAV_PAYLOAD(msg), len);
#endif
}
