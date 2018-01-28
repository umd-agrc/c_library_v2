/** @file
 *    @brief MAVLink comm protocol testsuite generated from agrc.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef AGRC_TESTSUITE_H
#define AGRC_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_agrc(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_agrc(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_vision_linear_velocity_estimate(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_VISION_LINEAR_VELOCITY_ESTIMATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_vision_linear_velocity_estimate_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0
    };
    mavlink_vision_linear_velocity_estimate_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.usec = packet_in.usec;
        packet1.vx = packet_in.vx;
        packet1.vy = packet_in.vy;
        packet1.vz = packet_in.vz;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_VISION_LINEAR_VELOCITY_ESTIMATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_VISION_LINEAR_VELOCITY_ESTIMATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vision_linear_velocity_estimate_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_vision_linear_velocity_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vision_linear_velocity_estimate_pack(system_id, component_id, &msg , packet1.usec , packet1.vx , packet1.vy , packet1.vz );
    mavlink_msg_vision_linear_velocity_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vision_linear_velocity_estimate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.usec , packet1.vx , packet1.vy , packet1.vz );
    mavlink_msg_vision_linear_velocity_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_vision_linear_velocity_estimate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vision_linear_velocity_estimate_send(MAVLINK_COMM_1 , packet1.usec , packet1.vx , packet1.vy , packet1.vz );
    mavlink_msg_vision_linear_velocity_estimate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_vision_angular_velocity_estimate(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_vision_angular_velocity_estimate_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0
    };
    mavlink_vision_angular_velocity_estimate_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.usec = packet_in.usec;
        packet1.rollspeed = packet_in.rollspeed;
        packet1.pitchspeed = packet_in.pitchspeed;
        packet1.yawspeed = packet_in.yawspeed;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_VISION_ANGULAR_VELOCITY_ESTIMATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vision_angular_velocity_estimate_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_vision_angular_velocity_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vision_angular_velocity_estimate_pack(system_id, component_id, &msg , packet1.usec , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed );
    mavlink_msg_vision_angular_velocity_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vision_angular_velocity_estimate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.usec , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed );
    mavlink_msg_vision_angular_velocity_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_vision_angular_velocity_estimate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vision_angular_velocity_estimate_send(MAVLINK_COMM_1 , packet1.usec , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed );
    mavlink_msg_vision_angular_velocity_estimate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_agrc(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_vision_linear_velocity_estimate(system_id, component_id, last_msg);
    mavlink_test_vision_angular_velocity_estimate(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // AGRC_TESTSUITE_H
