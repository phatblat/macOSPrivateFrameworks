//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isVoiceTrigger;
    BOOL _isDucking;
    BOOL _isTwoShot;
    long long _style;
    NSString *_languageCode;
    long long _gender;
    NSString *_recordRoute;
    unsigned long long _speechEndHostTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long speechEndHostTime; // @synthesize speechEndHostTime=_speechEndHostTime;
@property(readonly, nonatomic) BOOL isTwoShot; // @synthesize isTwoShot=_isTwoShot;
@property(readonly, nonatomic) BOOL isDucking; // @synthesize isDucking=_isDucking;
@property(readonly, nonatomic) BOOL isVoiceTrigger; // @synthesize isVoiceTrigger=_isVoiceTrigger;
@property(readonly, copy, nonatomic) NSString *recordRoute; // @synthesize recordRoute=_recordRoute;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithStyle:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 recordRoute:(id)arg4 isVoiceTrigger:(BOOL)arg5 isDucking:(BOOL)arg6 isTwoShot:(BOOL)arg7 speechEndHostTime:(unsigned long long)arg8;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

