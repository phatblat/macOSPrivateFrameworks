//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableDescription.h>

@class NSString;

@interface INTypeCodableDescription : INCodableDescription
{
    NSString *_attributeKeyPrefix;
    NSString *_attributesKeyPrefix;
    NSString *_displayName;
    NSString *_displayNameLocID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *displayNameLocID; // @synthesize displayNameLocID=_displayNameLocID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)_attributesKeyPrefix;
- (id)_attributeKeyPrefix;
- (id)keyPrefix;
- (id)localizedDisplayNameForLanguage:(id)arg1;
@property(readonly, copy) NSString *localizedDisplayName;

@end

