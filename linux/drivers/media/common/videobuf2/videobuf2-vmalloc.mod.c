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
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0x2cd20d01, "remap_vmalloc_range" },
	{ 0xffa0eccb, "dma_unmap_sg_attrs" },
	{ 0x159a005a, "set_page_dirty_lock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5cfccb, "dma_map_sgtable" },
	{ 0x999e8297, "vfree" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0xa492c871, "dma_buf_vunmap" },
	{ 0xafbc8e32, "vm_map_ram" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x33571a94, "dma_buf_export" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x7581525a, "vb2_common_vm_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xd9edceee, "vmalloc_to_page" },
	{ 0x5a18d882, "dma_buf_vmap" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "videobuf2-common,videobuf2-memops");


MODULE_INFO(srcversion, "6D9EEB3CC71A469FFB720A3");
