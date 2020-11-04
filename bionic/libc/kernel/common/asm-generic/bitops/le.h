/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _ASM_GENERIC_BITOPS_LE_H_
#define _ASM_GENERIC_BITOPS_LE_H_
#include <asm/types.h>
#include <asm/byteorder.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BITOP_WORD(nr) ((nr) / BITS_PER_LONG)
#define BITOP_LE_SWIZZLE ((BITS_PER_LONG-1) & ~0x7)
#ifdef __LITTLE_ENDIAN
#define generic_test_le_bit(nr, addr) test_bit(nr, addr)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define generic___set_le_bit(nr, addr) __set_bit(nr, addr)
#define generic___clear_le_bit(nr, addr) __clear_bit(nr, addr)
#define generic_test_and_set_le_bit(nr, addr) test_and_set_bit(nr, addr)
#define generic_test_and_clear_le_bit(nr, addr) test_and_clear_bit(nr, addr)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define generic___test_and_set_le_bit(nr, addr) __test_and_set_bit(nr, addr)
#define generic___test_and_clear_le_bit(nr, addr) __test_and_clear_bit(nr, addr)
#define generic_find_next_zero_le_bit(addr, size, offset) find_next_zero_bit(addr, size, offset)
#elif defined(__BIG_ENDIAN)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define generic_test_le_bit(nr, addr)   test_bit((nr) ^ BITOP_LE_SWIZZLE, (addr))
#define generic___set_le_bit(nr, addr)   __set_bit((nr) ^ BITOP_LE_SWIZZLE, (addr))
#define generic___clear_le_bit(nr, addr)   __clear_bit((nr) ^ BITOP_LE_SWIZZLE, (addr))
#define generic_test_and_set_le_bit(nr, addr)   test_and_set_bit((nr) ^ BITOP_LE_SWIZZLE, (addr))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define generic_test_and_clear_le_bit(nr, addr)   test_and_clear_bit((nr) ^ BITOP_LE_SWIZZLE, (addr))
#define generic___test_and_set_le_bit(nr, addr)   __test_and_set_bit((nr) ^ BITOP_LE_SWIZZLE, (addr))
#define generic___test_and_clear_le_bit(nr, addr)   __test_and_clear_bit((nr) ^ BITOP_LE_SWIZZLE, (addr))
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#error "Please fix <asm/byteorder.h>"
#endif
#define generic_find_first_zero_le_bit(addr, size)   generic_find_next_zero_le_bit((addr), (size), 0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
