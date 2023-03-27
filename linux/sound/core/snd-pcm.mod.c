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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x852978c3, "put_pid" },
	{ 0x53b954a2, "up_read" },
	{ 0xe416fa7, "snd_register_device" },
	{ 0xe894be6b, "snd_device_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2cd20d01, "remap_vmalloc_range" },
	{ 0xea124bd1, "gcd" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xcbc173d4, "snd_card_file_remove" },
	{ 0x3ea30038, "snd_device_free" },
	{ 0xd21af1ee, "pid_vnr" },
	{ 0x5041bb32, "dma_mmap_attrs" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe0cb719c, "snd_power_wait" },
	{ 0x9fb41e49, "snd_device_initialize" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x18fcb916, "no_llseek" },
	{ 0xa555731f, "snd_info_create_card_entry" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2fe6c939, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3fa60579, "of_gen_pool_get" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3918325d, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0xdf3309c5, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdcb764ad, "memset" },
	{ 0x53ddc622, "snd_device_new" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbb064564, "snd_timer_new" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x803e4486, "snd_unregister_device" },
	{ 0xdec0b49c, "fasync_helper" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x70b03a70, "__devres_alloc_node" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xce807a25, "up_write" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe3056e58, "fput" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x1acd7981, "module_put" },
	{ 0x42fb5312, "snd_card_file_add" },
	{ 0x4d502c9b, "snd_ctl_register_ioctl" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x8809e6c, "snd_ctl_new1" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x12d5b817, "devres_add" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x96d0a463, "snd_ctl_remove" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xdf0ca3f4, "cpu_latency_qos_request_active" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x69d7d62c, "remap_pfn_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6865d6fe, "snd_info_free_entry" },
	{ 0x9dabda76, "snd_timer_interrupt" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xf6db38dd, "kill_fasync" },
	{ 0xada31e57, "gen_pool_dma_alloc_align" },
	{ 0x383947ca, "snd_ctl_get_preferred_subdevice" },
	{ 0x5b4ab116, "snd_timer_notify" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xd9edceee, "vmalloc_to_page" },
	{ 0xb87de145, "snd_ctl_add" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x12b13c2c, "param_ops_ulong" },
	{ 0xc2b6ebe4, "snd_ctl_unregister_ioctl_compat" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaa74c2e8, "snd_info_create_module_entry" },
	{ 0x93e8e2dc, "snd_info_register" },
	{ 0x68173019, "try_module_get" },
	{ 0x36a440, "dma_can_mmap" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
};

MODULE_INFO(depends, "snd,snd-timer");


MODULE_INFO(srcversion, "B2D7044DF3A0690EA39E977");
