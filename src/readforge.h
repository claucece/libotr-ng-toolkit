#include <string.h>

#include <libotr-ng/data_message.h>
#include <libotr-ng/key_management.h>
#include <libotr-ng/random.h>
#include <libotr-ng/shake.h>

#include "decode.h"
#include "helper.h"

#ifndef READFORGE_H
#define READFORGE_H
int readforge(char **plain_text, char **encoded_data_msg, char *raw_ratchet_key,
              char *raw_msg, char *new_txt_msg);
#endif
