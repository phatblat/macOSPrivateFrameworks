//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, VMUClassInfo, VMUClassInfoMap, VMUNonOverlappingRangeArray, VMUSwiftRuntimeInfo, VMUTaskMemoryScanner;

@interface VMUObjectIdentifier : NSObject
{
    unsigned int _task;
    struct _CSTypeRef _symbolicator;
    BOOL _needToValidateAddressRange;
    CDUnknownBlockType _memoryReader;
    VMUTaskMemoryScanner *_scanner;
    unsigned int _objcABI;
    struct libSwiftRemoteMirrorWrapper *_swiftMirror;
    NSMutableDictionary *_libSwiftRemoteMirrors;
    VMUSwiftRuntimeInfo *_swiftRuntimeInfoStableABI;
    VMUSwiftRuntimeInfo *_swiftRuntimeInfoPreABI;
    BOOL _debugSwiftRemoteMirror;
    VMUClassInfoMap *_realizedIsaToClassInfo;
    VMUClassInfoMap *_unrealizedClassInfos;
    VMUClassInfoMap *_cfTypeIDToClassInfo;
    NSMutableDictionary *_nonobjectClassInfosDict;
    NSMutableArray *_objCClassStructureClassInfoIndexes;
    unsigned long long _coreFoundationCFTypeIsa;
    unsigned long long _foundationCFTypeIsa;
    unsigned long long _objCClassCount;
    unsigned long long _swiftClassCount;
    unsigned long long _cfClassCount;
    CDUnknownBlockType _isaTranslator;
    BOOL _fragileNonPointerIsas;
    unsigned long long _lastCPlusPlusIsa;
    VMUClassInfo *_lastCPlusPlusClassInfo;
    NSHashTable *_nonObjectIsaHash;
    NSMapTable *_isaToObjectLabelHandlerMap;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    id *_labelStringUniquingMaps;
    id *_stringTypeDescriptions;
    NSMutableSet *_stringUniquingSet;
    NSMutableDictionary *_pidToProcessNameDict;
    VMUNonOverlappingRangeArray *_targetProcessVMranges;
    BOOL _targetProcessContainsMallocStackLoggingLiteZone;
    unsigned long long _cfBooleanTrueAddress;
    unsigned long long _cfBooleanFalseAddress;
    unsigned int _osDispatchMachOffsetInOSXPCConnection;
    unsigned long long _taggedPointerMask;
    unsigned long long _taggedPointerObfuscator;
}

@property(readonly) unsigned int objcABI; // @synthesize objcABI=_objcABI;
@property(readonly, nonatomic) struct _CSTypeRef symbolicator; // @synthesize symbolicator=_symbolicator;
@property(readonly, nonatomic) unsigned long long taggedPointerMask; // @synthesize taggedPointerMask=_taggedPointerMask;
@property(readonly, nonatomic) struct libSwiftRemoteMirrorWrapper *swiftMirror; // @synthesize swiftMirror=_swiftMirror;
@property(readonly, nonatomic) VMUSwiftRuntimeInfo *swiftRuntimeInfoStableABI; // @synthesize swiftRuntimeInfoStableABI=_swiftRuntimeInfoStableABI;
@property(readonly, nonatomic) VMUSwiftRuntimeInfo *swiftRuntimeInfoPreABI; // @synthesize swiftRuntimeInfoPreABI=_swiftRuntimeInfoPreABI;
@property(readonly, nonatomic) VMUClassInfoMap *realizedClasses; // @synthesize realizedClasses=_realizedIsaToClassInfo;
@property(readonly, nonatomic) CDUnknownBlockType memoryReader; // @synthesize memoryReader=_memoryReader;
@property(readonly) BOOL needToValidateAddressRange; // @synthesize needToValidateAddressRange=_needToValidateAddressRange;
- (void).cxx_destruct;
- (id)initWithTask:(unsigned int)arg1;
@property(readonly) BOOL hasSwiftReflection;
@property(readonly) BOOL hasSwiftContent;
- (void)loadSwiftReflectionLibraries;
- (void)_populateSwiftABIVariables;
- (int)_populateSwiftReflectionInfo:(struct SwiftReflectionInteropContext *)arg1;
- (BOOL)_dlopenLibSwiftRemoteMirrorWithSymbolicator:(struct _CSTypeRef)arg1;
- (BOOL)_dlopenLibSwiftRemoteMirrorNearExecutable;
- (BOOL)_dlopenLibSwiftRemoteMirrorNearLibSwiftCoreWithSymbolicator:(struct _CSTypeRef)arg1 avoidSystem:(BOOL)arg2;
- (BOOL)_dlopenLibSwiftRemoteMirrorFromDir:(id)arg1;
- (id)_scanner;
- (struct _CSTypeRef)_symbolicator;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 classInfo:(id)arg4;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 classInfo:(id)arg4 usingHandlerBlock:(CDUnknownBlockType)arg5;
- (id)labelForObjectOfClass:(id)arg1 atOffset:(unsigned int)arg2 ofObject:(void *)arg3;
- (id)labelForMallocBlock:(struct _VMURange)arg1 usingHandlerBlock:(CDUnknownBlockType)arg2;
- (id)labelForMallocBlock:(struct _VMURange)arg1;
- (id)labelForClassStructure:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForClassDataExtRW:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForClassDataRW:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForClassDataRO:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelFor__NSMallocBlock__:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSXPCConnection:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSXPCInterface:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForProtocol:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCActivity:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCConnection:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (void)_findOffsetsInOSXPCConnection:(void *)arg1 length:(unsigned long long)arg2;
- (id)labelFor_NSActivityAssertion:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSTransaction:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCObject:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)noLabelForOSXPCObject:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSLog:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSDispatchQueue:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSDispatchMach:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSInlineData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteMutableData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFSet:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSSet:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteHashTable:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFDictionary:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSDictionary:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSArray:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForItemCount:(long long)arg1;
- (id)labelForNSDate:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSNumber:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSBundle:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForCFBundle:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSPathStore2:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSURL:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteAttributedString:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1 printDetail:(BOOL)arg2;
- (id)labelForNSString:(void *)arg1 mappedSize:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 printDetail:(BOOL)arg4;
- (id)labelForNSString:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(BOOL)arg3;
- (id)classNameForTaggedPointer:(void *)arg1;
- (id)labelForTaggedPointer:(void *)arg1;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)osMajorMinorVersionString;
- (struct _CSTypeRef)symbolForAddress:(unsigned long long)arg1;
- (unsigned long long)addressOfSymbol:(const char *)arg1 inLibrary:(const char *)arg2;
- (struct _VMURange)vmRegionRangeForAddress:(unsigned long long)arg1;
- (unsigned long long)translateIsaPointer:(unsigned long long)arg1;
- (void)setupIsaTranslator;
- (void)findObjCAndSwiftClasses;
- (void)_findObjCAndSwiftClassesFromClass:(unsigned long long)arg1 recursionDepth:(unsigned int)arg2;
- (void)findCFTypes;
- (void)_faultClass:(unsigned long long)arg1 ofType:(unsigned int)arg2;
- (id)_returnFaultedClass:(unsigned long long)arg1 ofType:(unsigned int)arg2;
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)classInfoForNonobjectMemory:(void *)arg1 length:(unsigned long long)arg2;
- (unsigned int)classInfoIndexForObjCClassStructurePointerType:(unsigned int)arg1;
- (void)_generateClassInfosForObjCClassStructurePointerTypes;
- (id)_classInfoWithPthreadType:(id)arg1;
- (id)_classInfoWithNonobjectType:(id)arg1 binaryPath:(id)arg2;
- (BOOL)_isValidInstanceLength:(unsigned long long)arg1 expectedLength:(unsigned long long)arg2;
- (id)classInfoForObjectWithRange:(struct _VMURange)arg1;
- (void)enumerateAllClassInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRealizedClassInfosWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)SwiftClassCount;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)CFTypeCount;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 scanner:(id)arg3;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2;

@end

