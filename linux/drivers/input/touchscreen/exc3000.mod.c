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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb2b9020d, "touchscreen_report_pos" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa6257a2f, "complete" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x41f9c78d, "i2c_match_id" },
	{ 0x350c7015, "devm_device_add_group" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0x55ad7703, "touchscreen_parse_properties" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0x771f85fb, "input_event" },
	{ 0xfa1175cd, "input_mt_sync_frame" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,exc3000");
MODULE_ALIAS("of:N*T*Ceeti,exc3000C*");
MODULE_ALIAS("of:N*T*Ceeti,exc80h60");
MODULE_ALIAS("of:N*T*Ceeti,exc80h60C*");
MODULE_ALIAS("of:N*T*Ceeti,exc80h84");
MODULE_ALIAS("of:N*T*Ceeti,exc80h84C*");
MODULE_ALIAS("i2c:exc3000");
MODULE_ALIAS("i2c:exc80h60");
MODULE_ALIAS("i2c:exc80h84");

MODULE_INFO(srcversion, "6D415A646E017A54B3F704B");
