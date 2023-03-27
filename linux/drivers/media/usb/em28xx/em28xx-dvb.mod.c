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
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0xe7a5d416, "em28xx_unregister_extension" },
	{ 0x1b8a30d0, "em28xx_register_extension" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0x88b09182, "em28xx_init_usb_xfer" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x28537419, "usb_set_interface" },
	{ 0x3457e2a1, "dvb_net_release" },
	{ 0x52ef1333, "dvb_create_media_graph" },
	{ 0x3fe65da2, "dvb_net_init" },
	{ 0x929100b5, "dvb_dmxdev_release" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x4f2473b2, "dvb_dmxdev_init" },
	{ 0x80e8f56c, "dvb_unregister_frontend" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x7fec7234, "dvb_unregister_adapter" },
	{ 0x51892333, "dvb_register_frontend" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x984d234f, "em28xx_write_reg" },
	{ 0xae06f865, "em28xx_gpio_set" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xabcce634, "dvb_register_adapter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x28fbe3a0, "em28xx_uninit_usb_xfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xd45d0b3a, "em28xx_alloc_urbs" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa202ed06, "dvb_frontend_detach" },
	{ 0x92997ed8, "_printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xcb8a4942, "em28xx_setup_xc3028" },
	{ 0xacd66670, "dvb_frontend_suspend" },
	{ 0x1ff97ca9, "dvb_frontend_resume" },
	{ 0x44239691, "_dev_info" },
	{ 0x626f2826, "em28xx_stop_urbs" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8a4e0154, "em28xx_write_reg_bits" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc4015a7, "dvb_module_release" },
	{ 0xb692785d, "dvb_module_probe" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x2de27375, "em28xx_set_mode" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "em28xx,dvb-core");


MODULE_INFO(srcversion, "D17C419ABFAB7AEDDA476D1");
