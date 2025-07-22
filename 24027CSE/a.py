import sys, os

# replace jnz check with jz
FIRST_JNZ_CHECK =  0x22265cb+1
SECOND_JNZ_CHECK = 0x2226920+1

if len(sys.argv) == 2:
	# file must exists
	fild = os.open(sys.argv[1], os.O_WRONLY)
	assert fild != -1

	# open file from file descriptor
	cisco_binary = os.fdopen(fild, 'wb')

	# write first jz byte
	cisco_binary.seek(FIRST_JNZ_CHECK)
	cisco_binary.write(b"\x84")

	# write second jz byte
	cisco_binary.seek(SECOND_JNZ_CHECK)
	cisco_binary.write(b"\x84")

	# binary patched lets close it.
	cisco_binary.close()