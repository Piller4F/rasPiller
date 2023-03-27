#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xc5e74216, "release_resource" },
	{ 0x4528c1b8, "input_ff_create" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x771f85fb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xd6011851, "input_free_device" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6f140995, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E4D5E3E97BA2472FBFEC433");
