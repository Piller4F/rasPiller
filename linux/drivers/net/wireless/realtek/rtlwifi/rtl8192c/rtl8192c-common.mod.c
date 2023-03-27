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
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x95a8910f, "rtl_dm_diginit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x50465bd6, "rtl_fw_page_write" },
	{ 0x6e8bc51a, "_rtl_dbg_print_data" },
	{ 0xf45cb287, "rtl_cmd_send_packet" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x9d3bacd3, "_rtl_dbg_print" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc94ece83, "rtl_fw_block_write" },
	{ 0x62d17fa5, "skb_put" },
};

MODULE_INFO(depends, "rtlwifi");


MODULE_INFO(srcversion, "816236AA2CE6910E2464939");
