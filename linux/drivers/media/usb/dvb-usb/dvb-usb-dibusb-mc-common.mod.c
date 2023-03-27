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
	{ 0xf9a482f9, "msleep" },
	{ 0xf0ac7de, "dibusb_read_eeprom_byte" },
	{ 0x7f1beaef, "dib3000mc_pid_parse" },
	{ 0x52863e63, "dib3000mc_pid_control" },
	{ 0xbac9d60b, "dib3000mc_get_tuner_i2c_master" },
	{ 0x5beeeb59, "dib3000mc_set_config" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x6e9dd606, "__symbol_put" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dib3000mc");


MODULE_INFO(srcversion, "00E8DCD47EF9FD2F5184081");
