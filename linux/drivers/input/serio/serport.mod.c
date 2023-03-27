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
	{ 0x8c9e446, "tty_unregister_ldisc" },
	{ 0x9be07d44, "tty_register_ldisc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x59ca8c44, "serio_unregister_port" },
	{ 0x92997ed8, "_printk" },
	{ 0xe5ca6621, "__serio_register_port" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92d6394, "tty_name" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf80a612, "serio_interrupt" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "serio");


MODULE_INFO(srcversion, "4622B26EF6E839103320C88");
