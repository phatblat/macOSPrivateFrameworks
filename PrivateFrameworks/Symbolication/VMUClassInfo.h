//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface VMUClassInfo : NSObject
{
    unsigned long long _remoteIsa;
    unsigned int _remotePointerSize;
    unsigned int _ivarCount;
    unsigned int _superclassOffset;
    unsigned int _instanceSize;
    unsigned int _ro_flags;
    unsigned int _rw_flags;
    unsigned int _defaultScanType;
    unsigned int _remoteType;
    id *_localIvarList;
    NSString *_remoteClassName;
    NSString *_displayName;
    NSString *_remoteBinaryPath;
    VMUClassInfo *_superclassLayout;
    VMUClassInfo *_genericLayout;
    NSMutableArray *_variantEvaluators;
    NSMutableArray *_variantActions;
    NSMutableDictionary *_variantCache;
    const char *_weakLayout;
    const char *_strongLayout;
    BOOL _hasSpecificLayout;
    BOOL _hasVariantLayout;
    BOOL _usesSwiftRefcounting;
}

+ (unsigned long long)sizeofClassStructure:(BOOL)arg1;
+ (id)descriptionForTypeEncoding:(const char *)arg1 ivarName:(const char *)arg2;
+ (id)classInfoWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3;
+ (id)_genericBlockByrefInfo;
+ (void)initialize;
@property(readonly, nonatomic) BOOL usesSwiftRefcounting; // @synthesize usesSwiftRefcounting=_usesSwiftRefcounting;
@property(readonly, nonatomic) unsigned int pointerSize; // @synthesize pointerSize=_remotePointerSize;
@property(readonly, nonatomic) VMUClassInfo *superclassInfo; // @synthesize superclassInfo=_superclassLayout;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_remoteClassName;
@property(readonly, nonatomic) NSString *binaryPath; // @synthesize binaryPath=_remoteBinaryPath;
@property(readonly) unsigned long long remoteIsa; // @synthesize remoteIsa=_remoteIsa;
@property(readonly) unsigned int instanceSize; // @synthesize instanceSize=_instanceSize;
- (void).cxx_destruct;
@property(readonly) BOOL hasCppConstructorOrDestructor;
@property(readonly) BOOL isRootClass;
@property(readonly) BOOL isMetaClass;
@property(readonly) BOOL isRealized;
@property(readonly) BOOL isARR;
- (id)description;
- (id)debugDescription;
- (id)scanDescriptionWithSize:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *shortIvarDescription;
@property(readonly, nonatomic) NSString *fullIvarDescription;
@property(readonly) int infoType;
@property(readonly, nonatomic) NSString *typeName;
- (id)type;
@property(readonly, nonatomic) NSString *binaryName;
- (void)_setIsa:(unsigned long long)arg1;
- (void)_addVariantAction:(CDUnknownBlockType)arg1 withEvaluator:(CDUnknownBlockType)arg2;
- (void)_setFields:(id)arg1;
- (void)_replaceField:(id)arg1 withFields:(id)arg2;
- (void)_addFields:(id)arg1;
- (id)firstFieldWithName:(id)arg1;
- (id)fieldAtOrBeforeOffset:(unsigned int)arg1;
- (void)enumerateScanningLocationsForSize:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTypeFieldsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllFieldsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateClassHierarchyWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)_totalIvarCount;
@property(readonly, nonatomic) VMUClassInfo *genericInfo;
- (void)enumerateExternalValuesFromObject:(unsigned long long)arg1 withSize:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (void)enumerateStoredEntriesForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 externalValues:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withScanner:(id)arg3 memoryReader:(CDUnknownBlockType)arg4;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 memoryReader:(CDUnknownBlockType)arg3;
- (void)_applyExtendedLayout:(const char *)arg1 withSize:(unsigned int)arg2;
- (id)_copyWithInstanceSize:(unsigned int)arg1 superclassOffset:(unsigned int)arg2 asVariant:(BOOL)arg3 mutable:(BOOL)arg4;
- (void)enumerateSublayoutsForSize:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_logDescriptionWithSuperclasses:(BOOL)arg1 indentation:(int)arg2 toLogger:(CDUnknownBlockType)arg3;
- (id)_ivarDescription:(unsigned int)arg1 withSpacing:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3;
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned int)arg3;
- (id)mutableCopy;
- (void)dealloc;
- (void)_freeLocalIvarList;
- (id)initWithRealizedClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef)arg3 type:(int)arg4 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper *)arg5 memoryReader:(CDUnknownBlockType)arg6;
- (id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef)arg3 type:(int)arg4 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper *)arg5 memoryReader:(CDUnknownBlockType)arg6;
- (id)_initWithClass:(unsigned long long)arg1 realizedOnly:(BOOL)arg2 infoMap:(id)arg3 symbolicator:(struct _CSTypeRef)arg4 type:(int)arg5 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper *)arg6 memoryReader:(CDUnknownBlockType)arg7;
- (id)initWithClosureContext:(unsigned long long)arg1 typeInfo:(struct swift_typeinfo)arg2 infoMap:(id)arg3 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper *)arg4;
- (id)initWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3;
@property(readonly, nonatomic) BOOL hasSpecificLayout;
@property(readonly, nonatomic) BOOL hasVariantLayout;
@property(readonly, nonatomic) unsigned int defaultScanType;
- (void)_setDefaultScanType:(unsigned int)arg1;
- (void)_setSuperclassInfo:(id)arg1;
- (void)_setBinaryPath:(id)arg1;
- (void)_setDisplayName:(id)arg1;
@property(readonly, nonatomic) NSString *displayName;
- (void)_setClassNameWithAddress:(unsigned long long)arg1 reader:(CDUnknownBlockType)arg2;
- (void)_demangleClassName;
- (void)_parseIvarsAndLayouts;
- (void)_processARRLayout:(const char *)arg1 scanType:(unsigned int)arg2;

@end

