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
	{ 0xd6d05ecd, "v4l2_ctrl_cluster" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x18d8da38, "v4l2_ctrl_g_ctrl" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdbb86f02, "v4l2_ctrl_activate" },
	{ 0xdd64e639, "strscpy" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0xfd4a38e0, "__v4l2_ctrl_grab" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0x92997ed8, "_printk" },
	{ 0x89e3897d, "v4l2_ctrl_query_fill" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "9B7366CAD416EC72424DA74");
