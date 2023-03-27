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
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x36043ee3, "spi_write_then_read" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2715240, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x4f2473b2, "dvb_dmxdev_init" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x51892333, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xabcce634, "dvb_register_adapter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0x7fec7234, "dvb_unregister_adapter" },
	{ 0xa202ed06, "dvb_frontend_detach" },
	{ 0x80e8f56c, "dvb_unregister_frontend" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x929100b5, "dvb_dmxdev_release" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("spi:cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880C*");

MODULE_INFO(srcversion, "ECF62DA5F50DAE0FDA24EBD");
