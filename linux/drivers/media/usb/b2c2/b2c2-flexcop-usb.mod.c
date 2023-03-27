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
	{ 0x27339f09, "param_ops_int" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xed8c98f9, "flexcop_device_initialize" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6e3d8fd0, "flexcop_device_kfree" },
	{ 0x31086434, "flexcop_sram_ctrl" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xec2127dd, "flexcop_device_kmalloc" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xc7fec540, "flexcop_sram_set_dest" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xa5c5d000, "flexcop_pass_dmx_packets" },
	{ 0x29574b43, "flexcop_wan_set_speed" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x84fcd2b2, "flexcop_device_exit" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "77001A9A4C10DA71BF4D7CE");
