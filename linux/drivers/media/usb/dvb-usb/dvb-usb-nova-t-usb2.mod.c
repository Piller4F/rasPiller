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
	{ 0xf0ac7de, "dibusb_read_eeprom_byte" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xd6c3cbd0, "dvb_usb_device_exit" },
	{ 0x4843fe94, "dvb_usb_device_init" },
	{ 0xa7624834, "dibusb_pid_filter" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xd3e26061, "dibusb2_0_power_ctrl" },
	{ 0xb69b780e, "dibusb_dib3000mc_frontend_attach" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xf4cd5a0c, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x769ea644, "dibusb_dib3000mc_tuner_attach" },
	{ 0x6500ae9c, "dibusb2_0_streaming_ctrl" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x38362998, "dibusb_i2c_algo" },
	{ 0xf00acb5a, "dibusb_pid_filter_ctrl" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dvb-usb,dvb-usb-dibusb-mc-common");

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "68B6A847C4A739FA3E9CB84");
