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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x852978c3, "put_pid" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4558a487, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xe373d6e1, "proc_symlink" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0x12fcc5c0, "sound_class" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x62e68f09, "devres_find" },
	{ 0xd21af1ee, "pid_vnr" },
	{ 0x68bae379, "single_release" },
	{ 0x8d1f6bc1, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbec33c93, "kobject_set_name" },
	{ 0x845319c9, "__register_chrdev" },
	{ 0x57815298, "proc_set_size" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcf25530, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x440cc275, "proc_remove" },
	{ 0x771f85fb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd06eabd1, "PDE_DATA" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x5a0baca8, "proc_mkdir" },
	{ 0xa5a62d7e, "device_del" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0xdec0b49c, "fasync_helper" },
	{ 0x70b03a70, "__devres_alloc_node" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x292268, "noop_llseek" },
	{ 0x8a5178ed, "init_uts_ns" },
	{ 0xbc41d96d, "device_add" },
	{ 0xce807a25, "up_write" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x61651be, "strcat" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x1acd7981, "module_put" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0x3f202026, "register_sound_special_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xd6011851, "input_free_device" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x6ab350d0, "single_open_size" },
	{ 0x12d5b817, "devres_add" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb18f4e29, "get_device" },
	{ 0xddef0f6d, "devm_remove_action" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd81baef0, "proc_create_data" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x3055489f, "device_initialize" },
	{ 0xc756f4aa, "proc_mkdir_mode" },
	{ 0x96848186, "scnprintf" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0xf6db38dd, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x68173019, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6f140995, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BF4F7A140B23868C2D0F69A");
