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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1b30de3c, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x243b0418, "driver_register" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x53ddc622, "snd_device_new" },
	{ 0xa5a62d7e, "device_del" },
	{ 0x20105980, "driver_unregister" },
	{ 0xbc41d96d, "device_add" },
	{ 0x3533cb47, "bus_unregister" },
	{ 0x6ab247a6, "bus_for_each_dev" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c8837e4, "snd_seq_root" },
	{ 0x6865d6fe, "snd_info_free_entry" },
	{ 0x3055489f, "device_initialize" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaa74c2e8, "snd_info_create_module_entry" },
	{ 0x93e8e2dc, "snd_info_register" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "3F6B140A67AC583E7537AB2");
