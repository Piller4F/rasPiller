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
	{ 0xd103296d, "kobject_put" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xca2da281, "gpiod_direction_output" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x73b71578, "spi_setup" },
	{ 0xdf6afddc, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe5413c79, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe0f91e74, "kobject_create_and_add" },
	{ 0xd50f1f4, "snd_pcm_hw_constraint_mask64" },
	{ 0xdcb764ad, "memset" },
	{ 0x293ea448, "snd_pcm_hw_constraint_list" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0xfbedeccc, "snd_rawmidi_transmit_peek" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf28855b, "gpiod_direction_input" },
	{ 0xd2a0ee67, "spi_bus_type" },
	{ 0xd0f9583a, "snd_soc_unregister_card" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2aa6adfe, "bus_find_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2715240, "spi_sync" },
	{ 0xf3ab8ce8, "snd_soc_dai_set_bclk_ratio" },
	{ 0x4ae883db, "snd_rawmidi_transmit_ack" },
	{ 0x4ff13a59, "gpiod_unexport" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8809e6c, "snd_ctl_new1" },
	{ 0xaf18e39b, "gpiod_get_value" },
	{ 0xad5924cd, "kernel_kobj" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x2de97a18, "gpiod_export" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0xe556a9c5, "snd_pcm_hw_constraint_minmax" },
	{ 0xc1746659, "gpiod_get_index" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb87de145, "snd_ctl_add" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0x30f8c3c, "snd_soc_register_card" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x82395752, "gpiod_put" },
	{ 0xcb7ef78c, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-pcm,snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Cblokaslabs,pisound");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisoundC*");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spi");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spiC*");

MODULE_INFO(srcversion, "B1A595C9C0585BE8E5246F6");
