/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file telemetry_status.msg */


#include <cinttypes>
#include <cstdio>
#include <px4_defines.h>
#include <uORB/topics/telemetry_status.h>
#include <drivers/drv_hrt.h>

constexpr char __orb_telemetry_status_fields[] = "uint64_t timestamp;uint64_t heartbeat_time;uint64_t telem_time;uint16_t rxerrors;uint16_t fixed;uint8_t type;uint8_t rssi;uint8_t remote_rssi;uint8_t noise;uint8_t remote_noise;uint8_t txbuf;uint8_t system_id;uint8_t component_id;uint8_t[4] _padding0;";

ORB_DEFINE(telemetry_status, struct telemetry_status_s, 36, __orb_telemetry_status_fields);


void print_message(const telemetry_status_s& message)
{
	printf(" telemetry_status_s\n");
	printf("\ttimestamp: %" PRIu64, message.timestamp);
	if (message.timestamp != 0) {
		printf(" (%.6f seconds ago)\n", hrt_elapsed_time(&message.timestamp) / 1e6);
	} else {
		printf("\n");
	}
	printf("\theartbeat_time: %" PRIu64 "\n", message.heartbeat_time);
	printf("\ttelem_time: %" PRIu64 "\n", message.telem_time);
	printf("\trxerrors: %u\n", message.rxerrors);
	printf("\tfixed: %u\n", message.fixed);
	printf("\ttype: %u\n", message.type);
	printf("\trssi: %u\n", message.rssi);
	printf("\tremote_rssi: %u\n", message.remote_rssi);
	printf("\tnoise: %u\n", message.noise);
	printf("\tremote_noise: %u\n", message.remote_noise);
	printf("\ttxbuf: %u\n", message.txbuf);
	printf("\tsystem_id: %u\n", message.system_id);
	printf("\tcomponent_id: %u\n", message.component_id);
	}