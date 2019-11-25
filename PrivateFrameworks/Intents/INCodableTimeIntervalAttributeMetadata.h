//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableAttributeMetadata.h>

@class NSNumber;

@interface INCodableTimeIntervalAttributeMetadata : INCodableAttributeMetadata
{
    long long _defaultUnit;
    long long _minimumUnit;
    long long _maximumUnit;
    NSNumber *_defaultValue;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) NSNumber *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) long long maximumUnit; // @synthesize maximumUnit=_maximumUnit;
@property(nonatomic) long long minimumUnit; // @synthesize minimumUnit=_minimumUnit;
@property(nonatomic) long long defaultUnit; // @synthesize defaultUnit=_defaultUnit;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

