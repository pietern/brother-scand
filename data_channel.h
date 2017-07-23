/*
 * Copyright (c) 2017 Dariusz Stojaczyk. All Rights Reserved.
 * The following source code is released under an MIT-style license,
 * that can be found in the LICENSE file.
 */

#ifndef BROTHER_DATA_CHANNEL_H
#define BROTHER_DATA_CHANNEL_H

struct data_channel *data_channel_create(const char *dest_ip, uint16_t port);

#endif //BROTHER_DATA_CHANNEL_H
