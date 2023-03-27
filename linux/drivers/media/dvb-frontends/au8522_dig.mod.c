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
	{ 0x55f20e6d, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x83416960, "au8522_led_ctrl" },
	{ 0xf58088f0, "au8522_writereg" },
	{ 0x8e604e58, "au8522_readreg" },
	{ 0x1a28e668, "au8522_i2c_gate_ctrl" },
	{ 0xdcbe169, "au8522_sleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x66a1ea50, "au8522_analog_i2c_gate_ctrl" },
	{ 0xc89e8515, "au8522_get_state" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf7eb1923, "au8522_init" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "9046C5BFE26DA6555A7C336");
