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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x871b3c7f, "snd_devm_card_new" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x21012113, "platform_device_register_full" },
	{ 0xdf6afddc, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe5413c79, "snd_rawmidi_new" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0xdcb764ad, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfbedeccc, "snd_rawmidi_transmit_peek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0x4ae883db, "snd_rawmidi_transmit_ack" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8d8d9457, "__devm_request_region" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x4e42530f, "param_ops_long" },
	{ 0xb8714612, "snd_card_register" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xaf1119c3, "snd_rawmidi_transmit" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xcb7ef78c, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd,snd-rawmidi");


MODULE_INFO(srcversion, "293B20A5A6B828A1CFE87AE");
