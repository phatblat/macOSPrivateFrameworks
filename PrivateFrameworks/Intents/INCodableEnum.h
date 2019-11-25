//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCodableCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INCodableLocalizationTable, NSArray, NSMutableDictionary, NSString;

@interface INCodableEnum : NSObject <NSSecureCoding, NSCopying, INCodableCoding>
{
    INCodableLocalizationTable *_localizationTable;
    NSString *_enumValueKeyPrefix;
    NSString *_enumValueSynonymKeyPrefix;
    NSMutableDictionary *_dictionaryKeysForCacheGroup;
    NSString *_name;
    NSString *_displayName;
    NSString *_displayNameID;
    NSString *_enumNamespace;
    long long _type;
    NSArray *_values;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic, setter=_setEnumNamespace:) NSString *enumNamespace; // @synthesize enumNamespace=_enumNamespace;
@property(readonly, copy, nonatomic) NSString *displayNameID; // @synthesize displayNameID=_displayNameID;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableDictionary *_dictionaryKeysForCacheGroup; // @synthesize _dictionaryKeysForCacheGroup;
@property(copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable; // @synthesize _localizationTable;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;
- (id)_dictionaryKeyForKeyPath:(id)arg1 object:(id)arg2;
- (id)dictionaryKeyForKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *_enumValueSynonymKeyPrefix; // @synthesize _enumValueSynonymKeyPrefix;
@property(readonly, copy, nonatomic) NSString *_enumValueKeyPrefix; // @synthesize _enumValueKeyPrefix;
@property(readonly, copy, nonatomic) NSString *keyPrefix;
@property(readonly, copy, nonatomic) NSString *cacheGroup;
- (id)localizedDisplayNameForLanguage:(id)arg1;
@property(readonly, copy) NSString *localizedDisplayName;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 displayName:(id)arg2 displayNameID:(id)arg3 enumNamespace:(id)arg4 type:(long long)arg5 values:(id)arg6 localizationTable:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

