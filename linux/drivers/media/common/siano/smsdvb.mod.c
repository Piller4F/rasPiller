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
	{ 0x5e64657a, "smscore_register_hotplug" },
	{ 0xce212dc, "smscore_get_board_id" },
	{ 0x151c607e, "sms_board_setup" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x7fec7234, "dvb_unregister_adapter" },
	{ 0x52ef1333, "dvb_create_media_graph" },
	{ 0x45c1303f, "sms_board_event" },
	{ 0x51892333, "dvb_register_frontend" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0x80e8f56c, "dvb_unregister_frontend" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x99a81ab3, "smsclient_sendrequest" },
	{ 0x929100b5, "dvb_dmxdev_release" },
	{ 0x6463d071, "sms_board_lna_control" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x584b9050, "smscore_putbuffer" },
	{ 0xdab46c84, "media_device_cleanup" },
	{ 0x402464ad, "smscore_unregister_hotplug" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x844539ae, "sms_get_board" },
	{ 0xabcce634, "dvb_register_adapter" },
	{ 0xc74f3b9f, "sms_board_power" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x4a1b85ce, "sms_board_led_feedback" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x9ce430e6, "smscore_register_client" },
	{ 0xd3cb01c4, "smscore_get_device_mode" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x88c7a2f5, "media_device_unregister" },
	{ 0x4f2473b2, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "smsmdtv,dvb-core,mc");


MODULE_INFO(srcversion, "34C47E0A8177107A0B14B32");
