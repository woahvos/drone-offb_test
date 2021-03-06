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

/* Auto-generated by genmsg_cpp from file sensor_accel.msg */


#include <cinttypes>
#include <cstdio>
#include <px4_defines.h>
#include <uORB/topics/sensor_accel.h>
#include <drivers/drv_hrt.h>

constexpr char __orb_sensor_accel_fields[] = "uint64_t timestamp;uint64_t integral_dt;uint64_t error_count;float x;float y;float z;float x_integral;float y_integral;float z_integral;float temperature;float range_m_s2;float scaling;uint32_t device_id;int16_t x_raw;int16_t y_raw;int16_t z_raw;int16_t temperature_raw;";

ORB_DEFINE(sensor_accel, struct sensor_accel_s, 72, __orb_sensor_accel_fields);


void print_message(const sensor_accel_s& message)
{
	printf(" sensor_accel_s\n");
	printf("\ttimestamp: %" PRIu64, message.timestamp);
	if (message.timestamp != 0) {
		printf(" (%.6f seconds ago)\n", hrt_elapsed_time(&message.timestamp) / 1e6);
	} else {
		printf("\n");
	}
	printf("\tintegral_dt: %" PRIu64 "\n", message.integral_dt);
	printf("\terror_count: %" PRIu64 "\n", message.error_count);
	printf("\tx: %.3f\n", (double)message.x);
	printf("\ty: %.3f\n", (double)message.y);
	printf("\tz: %.3f\n", (double)message.z);
	printf("\tx_integral: %.3f\n", (double)message.x_integral);
	printf("\ty_integral: %.3f\n", (double)message.y_integral);
	printf("\tz_integral: %.3f\n", (double)message.z_integral);
	printf("\ttemperature: %.3f\n", (double)message.temperature);
	printf("\trange_m_s2: %.3f\n", (double)message.range_m_s2);
	printf("\tscaling: %.3f\n", (double)message.scaling);
	printf("\tdevice_id: %" PRIu32 "\n", message.device_id);
	printf("\tx_raw: %d\n", message.x_raw);
	printf("\ty_raw: %d\n", message.y_raw);
	printf("\tz_raw: %d\n", message.z_raw);
	printf("\ttemperature_raw: %d\n", message.temperature_raw);
}