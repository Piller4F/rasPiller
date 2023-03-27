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
	{ 0x1e491d1f, "tpm1_getcap" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xbb80a10a, "tpm2_probe" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0xaebaf481, "tpmm_chip_alloc" },
	{ 0xb8abf380, "tpm_get_timeouts" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd9fa357a, "tpm_chip_stop" },
	{ 0xd5d83827, "tpm_chip_register" },
	{ 0x44239691, "_dev_info" },
	{ 0xaefb2a4c, "devm_free_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xef33983, "tpm_calc_ordinal_duration" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc9b3daf0, "tpm2_get_tpm_pt" },
	{ 0xedc03953, "iounmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8999d30a, "tpm_chip_start" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "tpm");


MODULE_INFO(srcversion, "FA8F7EE789279CEC788F527");
