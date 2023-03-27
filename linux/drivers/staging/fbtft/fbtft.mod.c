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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xec38999a, "devm_gpiod_get_index_optional" },
	{ 0x98cf60b3, "strlen" },
	{ 0xfdf2e6db, "framebuffer_release" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xfaa4e9a8, "fb_sys_read" },
	{ 0x825e7cc5, "backlight_device_register" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0xe959efc0, "sys_copyarea" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9679f83b, "register_framebuffer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5926a33b, "device_property_read_string" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x26559349, "of_match_device" },
	{ 0x2715240, "spi_sync" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x44239691, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0xc36f103a, "sys_fillrect" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4aecd2c9, "sys_imageblit" },
	{ 0x653fa646, "fb_sys_write" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xaf18e39b, "gpiod_get_value" },
	{ 0xae6e839b, "framebuffer_alloc" },
	{ 0x90e76313, "fb_deferred_io_cleanup" },
	{ 0xfd718ca0, "fb_deferred_io_init" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0x96848186, "scnprintf" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x24f393f0, "backlight_device_unregister" },
	{ 0x12b13c2c, "param_ops_ulong" },
	{ 0xa387f57e, "device_property_present" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x4aae3e5d, "unregister_framebuffer" },
};

MODULE_INFO(depends, "fb_sys_fops,backlight,syscopyarea,sysfillrect,sysimgblt");


MODULE_INFO(srcversion, "C6037DEDCEC5109D679E6D2");
