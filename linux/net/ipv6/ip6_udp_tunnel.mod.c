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
	{ 0xe1f7f753, "release_sock" },
	{ 0x4ebd5d06, "udp6_set_csum" },
	{ 0x1877807f, "sock_bindtoindex" },
	{ 0x7b261aab, "sock_release" },
	{ 0xae721402, "sock_create_kern" },
	{ 0xbe1e211c, "kernel_connect" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x50e9eb95, "kernel_sock_shutdown" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x8ce9945b, "kernel_bind" },
	{ 0xf7cd832d, "ip6_local_out" },
	{ 0xf229424a, "preempt_count_add" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F50A9632EDFF8B1C88BAE3");
