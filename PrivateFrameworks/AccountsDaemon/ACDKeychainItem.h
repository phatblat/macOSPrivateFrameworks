//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface ACDKeychainItem : NSObject
{
    NSMutableDictionary *_properties;
    NSMutableSet *_dirtyProperties;
    const struct __CFData *_persistentRef;
}

@property(readonly, nonatomic) const struct __CFData *persistentRef; // @synthesize persistentRef=_persistentRef;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)_reloadProperties;
- (id)_modifiedProperties;
- (void)_clearDirtyProperties;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
@property(nonatomic) long long version;
- (BOOL)_setMetadata:(id)arg1 withError:(id *)arg2;
@property(copy, nonatomic) NSDictionary *metadata;
@property(nonatomic) BOOL synchronizable;
@property(copy, nonatomic) NSString *accessibility;
@property(copy, nonatomic) NSString *accessGroup;
@property(copy, nonatomic) NSString *service;
@property(copy, nonatomic) NSString *account;
- (id)_metadataWithError:(id *)arg1;
@property(readonly, nonatomic) struct OpaqueSecAccessControlRef *accessControlRef;
- (BOOL)save:(id *)arg1;
- (void)reload;
- (void)dealloc;
- (id)initWithPersistentRef:(const struct __CFData *)arg1 properties:(id)arg2;
- (id)initWithPersistentRef:(const struct __CFData *)arg1;

@end

