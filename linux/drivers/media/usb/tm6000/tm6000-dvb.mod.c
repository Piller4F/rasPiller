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
	{ 0xa16a2fff, "tm6000_unregister_extension" },
	{ 0x8227e9a0, "tm6000_register_extension" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdff8e89d, "tm6000_tuner_callback" },
	{ 0x4f2473b2, "dvb_dmxdev_init" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x51892333, "dvb_register_frontend" },
	{ 0x2309a6d6, "tm6000_xc5000_callback" },
	{ 0xabcce634, "dvb_register_adapter" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xc8f4b8f8, "usb_clear_halt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xef83d51e, "tm6000_init_digital_mode" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7fec7234, "dvb_unregister_adapter" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x929100b5, "dvb_dmxdev_release" },
	{ 0xa202ed06, "dvb_frontend_detach" },
	{ 0x80e8f56c, "dvb_unregister_frontend" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x92997ed8, "_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x89b611dd, "tm6000_debug" },
};

MODULE_INFO(depends, "tm6000,dvb-core");


MODULE_INFO(srcversion, "53ADC1FD13167FC21E55BA7");
