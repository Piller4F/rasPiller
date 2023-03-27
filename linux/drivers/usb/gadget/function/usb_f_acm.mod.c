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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x2f02ed5c, "gserial_resume" },
	{ 0xc93bdc96, "usb_gstrings_attach" },
	{ 0x90ad01fd, "usb_free_all_descriptors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf30ca8c8, "gserial_connect" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7975d757, "usb_function_unregister" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0x6340127e, "usb_ep_autoconfig" },
	{ 0x2f4e1852, "gserial_disconnect" },
	{ 0x3c291dd0, "gserial_suspend" },
	{ 0x4a3df9d0, "gs_alloc_req" },
	{ 0x5516e238, "config_group_init_type_name" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0x910bc89d, "usb_function_register" },
	{ 0xdc965b3, "config_ep_by_speed" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0xe6e5a1bd, "usb_assign_descriptors" },
	{ 0x529c1749, "usb_interface_id" },
	{ 0x60ea48a0, "gs_free_req" },
};

MODULE_INFO(depends, "u_serial,libcomposite");


MODULE_INFO(srcversion, "B4C17A8AD715C8CA24C0169");
