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
	{ 0xfb3e1afa, "cx231xx_unregister_extension" },
	{ 0x2e92d1f7, "cx231xx_register_extension" },
	{ 0x15ce8036, "cx231xx_init_isoc" },
	{ 0x87471052, "cx231xx_init_bulk" },
	{ 0x684e3f11, "cx231xx_set_alt_setting" },
	{ 0xe1ad70b8, "cx231xx_uninit_isoc" },
	{ 0x267b08b5, "cx231xx_uninit_bulk" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x92997ed8, "_printk" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb692785d, "dvb_module_probe" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x44239691, "_dev_info" },
	{ 0x52ef1333, "dvb_create_media_graph" },
	{ 0x3fe65da2, "dvb_net_init" },
	{ 0x4f2473b2, "dvb_dmxdev_init" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x51892333, "dvb_register_frontend" },
	{ 0xabcce634, "dvb_register_adapter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x969ecdea, "cx231xx_demod_reset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3d562f72, "cx231xx_get_i2c_adap" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4015a7, "dvb_module_release" },
	{ 0x7fec7234, "dvb_unregister_adapter" },
	{ 0xa202ed06, "dvb_frontend_detach" },
	{ 0x80e8f56c, "dvb_unregister_frontend" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x929100b5, "dvb_dmxdev_release" },
	{ 0x3457e2a1, "dvb_net_release" },
	{ 0xa187a227, "cx231xx_set_mode" },
	{ 0x8da6585d, "__stack_chk_fail" },
};

MODULE_INFO(depends, "cx231xx,dvb-core");


MODULE_INFO(srcversion, "5D49D43B2223CCECF35A0D9");
