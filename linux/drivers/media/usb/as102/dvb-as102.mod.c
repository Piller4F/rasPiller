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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x7fec7234, "dvb_unregister_adapter" },
	{ 0x51892333, "dvb_register_frontend" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xe352600b, "usb_deregister_dev" },
	{ 0x80e8f56c, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa202ed06, "dvb_frontend_detach" },
	{ 0xdcb764ad, "memset" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x11089ac7, "_ctype" },
	{ 0x929100b5, "dvb_dmxdev_release" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xd1b727f9, "usb_register_dev" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0x894117f3, "usb_find_interface" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xabcce634, "dvb_register_adapter" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x4f2473b2, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("usb:v1BA6p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0246d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B89p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2137p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E1A54E9122FD60B5EBAB117");
