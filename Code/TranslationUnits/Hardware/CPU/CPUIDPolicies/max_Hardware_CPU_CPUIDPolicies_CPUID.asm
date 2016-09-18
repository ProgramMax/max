; Copyright 2016, Chris Blume. All rights reserved.
; Use of this source code is governed by a BSD-style license that can be
; found in the LICENSE file.

.code

max_Hardware_CPU_CPUIDPolicies_CPUID PROC

	; The parameters are: CPUIDSubleafResult & Registers, uint32_t Leaf
	; The x64 calling convention specifies the parameters will be in rcx and edx, respectively.

	; rbx is considered non-volatile in x64.
	; It must be saved and restored inside the function, since we plan to use rbx.
	; We can use the shadow space, since we do not need it otherwise.
	mov   qword ptr [rsp + 8],   rbx


	; Save the Registers pointer so we can later populate its members
	mov   r9,    rcx ; Registers


	; Set the leaf & subleaf parameters and call cpuid
	mov   eax,   edx ; Leaf
	mov   ecx,   0
	cpuid


	; Save the cpuid results in the Registers members
	mov   dword ptr [r9],        eax
	mov   dword ptr [r9 + 4],    ebx
	mov   dword ptr [r9 + 8],    ecx
	mov   dword ptr [r9 + 12],   edx


	; restore RBX
	mov   rbx,   qword ptr [rsp + 8]


	ret

max_Hardware_CPU_CPUIDPolicies_CPUID ENDP

END