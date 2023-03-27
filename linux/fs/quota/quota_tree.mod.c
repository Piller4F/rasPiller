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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0xb880495f, "make_kgid" },
	{ 0x33c8503a, "__quota_error" },
	{ 0xdcb764ad, "memset" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x9f31d3a7, "dqstats" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd159560d, "make_kprojid" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe9006b5c, "mark_info_dirty" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AFB44D328511AC588DDA044");
