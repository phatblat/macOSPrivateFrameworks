//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AFAudioPlaybackRequest;

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isDeviceInSetupFlow;
    BOOL _isDeviceInCarDNDMode;
    AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest; // @synthesize twoShotAudioPlaybackRequest=_twoShotAudioPlaybackRequest;
@property(readonly, copy, nonatomic) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest; // @synthesize tapToSiriAudioPlaybackRequest=_tapToSiriAudioPlaybackRequest;
@property(readonly, nonatomic) BOOL isDeviceInCarDNDMode; // @synthesize isDeviceInCarDNDMode=_isDeviceInCarDNDMode;
@property(readonly, nonatomic) BOOL isDeviceInSetupFlow; // @synthesize isDeviceInSetupFlow=_isDeviceInSetupFlow;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithIsDeviceInSetupFlow:(BOOL)arg1 isDeviceInCarDNDMode:(BOOL)arg2 tapToSiriAudioPlaybackRequest:(id)arg3 twoShotAudioPlaybackRequest:(id)arg4;
- (id)builder;

@end
