//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCodableCoding.h"
#import "NSSecureCoding.h"

@class INCodableLocalizationTable, INSchema, NSArray, NSDictionary, NSMutableDictionary, NSOrderedSet, NSString;

@interface INCodableDescription : NSObject <NSSecureCoding, INCodableCoding>
{
    NSMutableDictionary *_attributesByName;
    INCodableLocalizationTable *_localizationTable;
    INCodableLocalizationTable *_customLocalizationTable;
    NSString *_attributeKeyPrefix;
    NSString *_attributesKeyPrefix;
    NSString *_attributeMetadataKeyPrefix;
    NSString *_attributePromptDialogKeyPrefix;
    NSString *_attributeRelationshipKeyPrefix;
    NSString *_attributeUnsupportedReasonKeyPrefix;
    NSMutableDictionary *_dictionaryKeysForCacheGroup;
    NSString *_attributeTagKey;
    NSString *_attributeDisplayPriorityKey;
    INSchema *_schema;
    NSString *_intentDefinitionNamespace;
    NSString *_className;
    NSString *_typeName;
    NSDictionary *_attributes;
    NSOrderedSet *_displayOrderedAttributes;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSOrderedSet *displayOrderedAttributes; // @synthesize displayOrderedAttributes=_displayOrderedAttributes;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSString *intentDefinitionNamespace; // @synthesize intentDefinitionNamespace=_intentDefinitionNamespace;
@property(nonatomic) __weak INSchema *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSMutableDictionary *_dictionaryKeysForCacheGroup; // @synthesize _dictionaryKeysForCacheGroup;
@property(copy, nonatomic, setter=_setCustomLocalizationTable:) INCodableLocalizationTable *_customLocalizationTable; // @synthesize _customLocalizationTable;
@property(copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable; // @synthesize _localizationTable;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *referencedCodableEnums;
- (unsigned long long)highestAttributeTag;
- (id)attributeByName:(id)arg1;
- (id)attributeByKeyPath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_updateAttributesByName;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;
- (id)_dictionaryKeyForKeyPath:(id)arg1 object:(id)arg2;
- (id)dictionaryKeyForKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *_attributesKeyPrefix; // @synthesize _attributesKeyPrefix;
@property(readonly, copy, nonatomic) NSString *_attributeUnsupportedReasonKeyPrefix; // @synthesize _attributeUnsupportedReasonKeyPrefix;
@property(readonly, copy, nonatomic) NSString *_attributeRelationshipKeyPrefix; // @synthesize _attributeRelationshipKeyPrefix;
@property(readonly, copy, nonatomic) NSString *_attributePromptDialogKeyPrefix; // @synthesize _attributePromptDialogKeyPrefix;
@property(readonly, copy, nonatomic) NSString *_attributeMetadataKeyPrefix; // @synthesize _attributeMetadataKeyPrefix;
@property(readonly, copy, nonatomic) NSString *_attributeDisplayPriorityKey; // @synthesize _attributeDisplayPriorityKey;
@property(readonly, copy, nonatomic) NSString *_attributeTagKey; // @synthesize _attributeTagKey;
@property(readonly, copy, nonatomic) NSString *_attributeKeyPrefix; // @synthesize _attributeKeyPrefix;
@property(readonly, copy, nonatomic) NSString *keyPrefix;
@property(readonly, copy, nonatomic) NSString *cacheGroup;
- (id)_ignoredAttributeTags;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

