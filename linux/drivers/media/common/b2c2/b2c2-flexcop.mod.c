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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe6b476e3, "s5h1420_get_tuner_i2c_adapter" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x7fec7234, "dvb_unregister_adapter" },
	{ 0x3fec6089, "cx24113_agc_callback" },
	{ 0x51892333, "dvb_register_frontend" },
	{ 0x684e30d, "cx24123_get_tuner_i2c_adapter" },
	{ 0x80e8f56c, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3457e2a1, "dvb_net_release" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0xa202ed06, "dvb_frontend_detach" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x929100b5, "dvb_dmxdev_release" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x3fe65da2, "dvb_net_init" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xeb8454c4, "i2c_del_adapter" },
	{ 0x18acd31f, "dvb_dmx_swfilter_packets" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xabcce634, "dvb_register_adapter" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x4f2473b2, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "s5h1420,dvb-core,cx24113,cx24123");


MODULE_INFO(srcversion, "5444C835A282E86592E8C27");
