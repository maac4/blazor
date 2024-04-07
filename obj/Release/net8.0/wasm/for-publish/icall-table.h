#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
191,
199,
200,
201,
202,
203,
204,
205,
207,
208,
255,
256,
257,
281,
282,
283,
294,
295,
296,
297,
384,
385,
386,
389,
420,
421,
423,
425,
427,
429,
434,
442,
443,
444,
445,
446,
447,
448,
449,
450,
530,
531,
583,
589,
592,
594,
599,
600,
602,
603,
607,
608,
610,
612,
613,
616,
617,
618,
621,
624,
626,
628,
637,
693,
695,
697,
707,
708,
709,
711,
717,
718,
719,
720,
721,
729,
730,
731,
735,
736,
738,
740,
923,
1071,
1072,
6549,
6550,
6552,
6553,
6554,
6555,
6556,
6558,
6560,
6562,
6570,
6572,
6577,
6579,
6581,
6583,
6634,
6635,
6637,
6638,
6639,
6640,
6641,
6643,
6645,
7514,
7518,
7520,
7521,
7522,
7523,
7717,
7718,
7719,
7720,
7736,
7737,
7738,
7740,
7781,
7840,
7842,
7851,
7852,
7853,
7854,
8228,
8232,
8233,
8259,
8276,
8283,
8290,
8301,
8304,
8324,
8395,
8397,
8406,
8408,
8409,
8416,
8430,
8450,
8451,
8459,
8461,
8468,
8469,
8472,
8474,
8479,
8485,
8486,
8493,
8495,
8507,
8510,
8511,
8512,
8523,
8532,
8538,
8539,
8540,
8542,
8543,
8560,
8562,
8576,
8593,
8620,
8645,
8646,
9061,
9144,
9145,
9289,
9290,
9294,
9297,
9359,
9715,
9716,
9932,
9942,
10483,
10504,
10506,
10508,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 191,
ves_icall_System_Array_InternalCreate,
// token 199,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 207,
ves_icall_System_Array_SetValueImpl_raw,
// token 208,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 255,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 256,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 257,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 281,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 282,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 283,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 294,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 295,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 296,
ves_icall_System_Enum_InternalGetCorElementType,
// token 297,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 384,
ves_icall_System_Environment_get_ProcessorCount,
// token 385,
ves_icall_System_Environment_get_TickCount,
// token 386,
ves_icall_System_Environment_get_TickCount64,
// token 389,
ves_icall_System_Environment_FailFast_raw,
// token 420,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 421,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 423,
ves_icall_System_GC_SuppressFinalize_raw,
// token 425,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 427,
ves_icall_System_GC_GetGCMemoryInfo,
// token 429,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 434,
ves_icall_System_Object_MemberwiseClone_raw,
// token 442,
ves_icall_System_Math_Ceiling,
// token 443,
ves_icall_System_Math_Cos,
// token 444,
ves_icall_System_Math_Floor,
// token 445,
ves_icall_System_Math_Log10,
// token 446,
ves_icall_System_Math_Pow,
// token 447,
ves_icall_System_Math_Sin,
// token 448,
ves_icall_System_Math_Sqrt,
// token 449,
ves_icall_System_Math_Tan,
// token 450,
ves_icall_System_Math_ModF,
// token 530,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 531,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 583,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 589,
ves_icall_RuntimeType_make_array_type_raw,
// token 592,
ves_icall_RuntimeType_make_byref_type_raw,
// token 594,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 599,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 600,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 602,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 603,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 607,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 608,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 610,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 612,
ves_icall_System_RuntimeType_getFullName_raw,
// token 613,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 616,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 617,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 618,
ves_icall_RuntimeType_GetFields_native_raw,
// token 621,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 624,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 626,
ves_icall_RuntimeType_GetName_raw,
// token 628,
ves_icall_RuntimeType_GetNamespace_raw,
// token 637,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 693,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 695,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 697,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 707,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 708,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 709,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 711,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 717,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 718,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 719,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 720,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 721,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 729,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 730,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 731,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 735,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 736,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 738,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 740,
ves_icall_System_String_FastAllocateString_raw,
// token 923,
ves_icall_System_Type_internal_from_handle_raw,
// token 1071,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1072,
ves_icall_System_ValueType_Equals_raw,
// token 6549,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6550,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6552,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6553,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6554,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6555,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6556,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6558,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6560,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6562,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6570,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6572,
mono_monitor_exit_icall_raw,
// token 6577,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6579,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6581,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6583,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6634,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6635,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6637,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6638,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6639,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6640,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6641,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6643,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6645,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7514,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7518,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7520,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7521,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7522,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7523,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7717,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7718,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7719,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7720,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7736,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7737,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7738,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7740,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7781,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7840,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7842,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7851,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7852,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7853,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7854,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8228,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8232,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8233,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8259,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8276,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8283,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8290,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8301,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8304,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8324,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8395,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8397,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8406,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8408,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8409,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8416,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8430,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8450,
ves_icall_reflection_get_token_raw,
// token 8451,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8459,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8461,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8468,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8469,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8472,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8474,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8479,
ves_icall_reflection_get_token_raw,
// token 8485,
ves_icall_get_method_info_raw,
// token 8486,
ves_icall_get_method_attributes,
// token 8493,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8495,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8507,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8510,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8511,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8512,
ves_icall_reflection_get_token_raw,
// token 8523,
ves_icall_InternalInvoke_raw,
// token 8532,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8538,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8539,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8540,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8542,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8543,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8560,
ves_icall_InvokeClassConstructor_raw,
// token 8562,
ves_icall_InternalInvoke_raw,
// token 8576,
ves_icall_reflection_get_token_raw,
// token 8593,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8620,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8645,
ves_icall_reflection_get_token_raw,
// token 8646,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9061,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9144,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9145,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9289,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9290,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9294,
ves_icall_ModuleBuilder_getToken_raw,
// token 9297,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9359,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9715,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9716,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9932,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 9942,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10483,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10504,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10506,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10508,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
