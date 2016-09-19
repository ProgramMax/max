; Copyright 2016, Chris Blume. All rights reserved.
; Use of this source code is governed by a BSD-style license that can be
; found in the LICENSE file.

.code

max_Hardware_CPU_X64AssemblyIsCPUIDAvailablePolicies_IsCPUIDAvailable PROC



uint32_t AlteredEFLAGS = UINT32_C( 0 );

		__asm {
			; Get the current EFLAGS register and set the ID bit

			pushfd                   ; Save the current EFLAGS register onto the stack
			pop    eax               ; Put the EFLAGS value in EAX
			mov    ebx, eax          ; Save the value so we can later restore it
			xor    eax, 0x200000     ; Set the ID bit
			push   eax               ; Put the altered EFLAGS value back onto the stack
			popfd                    ; Restore the altered EFLAGS register

			; Check if the altered EFLAGS register stuck

			pushfd                    ; Save the new (possibly altered) EFLAGS register onto the stack
			pop    eax                ; Put the new EFLAGS value in EAX
			mov    AlteredEFLAGS, eax ; Store the EFLAGS value in our C++ variable
			push   ebx                ; Put the original, unaltered EFLAGS back on the stack
			popfd                     ; Put the original, unaltered EFLAGS back into the EFLAGS register
		}

		return ( AlteredEFLAGS & 0x200000 ) == 0x200000;







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

max_Hardware_CPU_X64AssemblyIsCPUIDAvailablePolicies_IsCPUIDAvailable ENDP

END