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
	{ 0x45bb6277, "param_ops_short" },
	{ 0x5d23a57, "spk_var_store" },
	{ 0x31bd7119, "spk_var_show" },
	{ 0x117787da, "synth_remove" },
	{ 0xa25764dc, "synth_add" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x84dad068, "synth_buffer_getc" },
	{ 0x76d40046, "synth_buffer_skip_nonlatin1" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x41a160e5, "synth_buffer_empty" },
	{ 0xd73a5599, "synth_current" },
	{ 0xb734cb9d, "speakup_event" },
	{ 0xa0e0c9b1, "misc_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xbbd15a51, "speakup_start_ttys" },
	{ 0x92997ed8, "_printk" },
	{ 0xd4c8974a, "misc_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd93829dd, "speakup_info" },
};

MODULE_INFO(depends, "speakup");


MODULE_INFO(srcversion, "42216D8071C39715AF44108");
