//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableAttributeMetadata.h>

@class NSNumber;

@interface INCodableNumberAttributeMetadata : INCodableAttributeMetadata
{
    long long _type;
    NSNumber *_defaultValue;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) NSNumber *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_localizedDialogTokensForLanguage:(id)arg1;
@property(readonly, nonatomic) BOOL supportsNegativeNumbers;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
