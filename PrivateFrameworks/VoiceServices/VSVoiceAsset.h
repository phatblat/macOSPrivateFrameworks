//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceServices/VSAssetBase.h>

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface VSVoiceAsset : VSAssetBase <NSSecureCoding>
{
    BOOL _isInstalled;
    BOOL _isBuiltInVoice;
    NSString *_name;
    NSArray *_languages;
    long long _gender;
    long long _footprint;
    long long _type;
}

+ (long long)typeFromString:(id)arg1;
+ (id)typeStringFromType:(long long)arg1;
+ (long long)footprintFromString:(id)arg1;
+ (id)footprintStringFromFootprint:(long long)arg1;
+ (long long)genderFromString:(id)arg1;
+ (id)genderStringFromGender:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isBuiltInVoice; // @synthesize isBuiltInVoice=_isBuiltInVoice;
@property(nonatomic) BOOL isInstalled; // @synthesize isInstalled=_isInstalled;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)voiceKey;

@end

