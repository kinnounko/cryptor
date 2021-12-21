/*    Copyright (c) 2021-2022, Vaino Kauppila
 *    All rights reserved
 *
 *    This file is part of the programme "c-pass" and use in source and
 *    binary forms, with or without modification, are permitted exclusively
 *    under the terms of the ######### license. You should have received
 *    a copy of the license with this file. If not, please or visit:
 *    ###############.com.
 */

#define CHUNK_SIZE 4096
#define SHRED_RNG_PASSES 4

int shred(const char *fname);

int encrypt_file(const char *filename, const char *password, const char *filename_out);

int decrypt_file(const char *filename_in, const char *password, const char *filename_out);

unsigned char * decrypt_mem(const char *filename, const char *password);

int sodium_init();
