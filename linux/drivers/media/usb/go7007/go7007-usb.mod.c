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
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x44239691, "_dev_info" },
	{ 0xb0ed614f, "go7007_read_addr" },
	{ 0xd8214ff2, "go7007_update_board" },
	{ 0x37a20e4e, "i2c_smbus_xfer" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xce12217e, "go7007_register_encoder" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7eaa55a8, "go7007_boot_encoder" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb3c3093, "go7007_alloc" },
	{ 0xa8466da4, "go7007_read_interrupt" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0x60581647, "go7007_parse_video_stream" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xd845019, "go7007_snd_remove" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "go7007,videodev");

MODULE_ALIAS("usb:v0EB1p7007d0200dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0202dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0204dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0205dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0208dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0209dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA102d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA104d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDpDE00d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2250d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0709d0204dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E7D5434367730EDA9386E50");
