cmd_lib/lz4/modules.order := {   echo lib/lz4/lz4_compress.ko; :; } | awk '!x[$$0]++' - > lib/lz4/modules.order
