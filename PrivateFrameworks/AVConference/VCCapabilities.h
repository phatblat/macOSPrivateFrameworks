//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface VCCapabilities : NSObject <NSCoding>
{
    BOOL isAudioEnabled;
    BOOL isAudioPausedToStart;
    BOOL isVideoEnabled;
    BOOL isVideoPausedToStart;
    BOOL isVideoSourceScreen;
    BOOL isDuplexAudioOnly;
    BOOL isDuplexVideoOnly;
    BOOL isHalfDuplexAudio;
    BOOL isKeyExchangeEnabled;
    BOOL isRelayEnabled;
    BOOL isRelayForced;
    BOOL requiresWifi;
    BOOL isDTLSEnabled;
    unsigned int preferredAudioCodec;
    unsigned int actualAudioCodec;
    unsigned int preferredVideoCodec;
    unsigned int actualVideoCodec;
    int deviceRole;
}

+ (id)screenSharingVCCapabilities;
+ (id)VideoOnlyVCCapabilities;
+ (id)AudioOnlyVCCapabilities;
+ (id)DataOnlyVCCapabilities;
@property BOOL isHalfDuplexAudio; // @synthesize isHalfDuplexAudio;
@property int deviceRole; // @synthesize deviceRole;
@property BOOL isDTLSEnabled; // @synthesize isDTLSEnabled;
@property BOOL requiresWifi; // @synthesize requiresWifi;
@property BOOL isRelayForced; // @synthesize isRelayForced;
@property BOOL isRelayEnabled; // @synthesize isRelayEnabled;
@property BOOL isVideoPausedToStart; // @synthesize isVideoPausedToStart;
@property BOOL isAudioPausedToStart; // @synthesize isAudioPausedToStart;
@property unsigned int actualVideoCodec; // @synthesize actualVideoCodec;
@property unsigned int preferredVideoCodec; // @synthesize preferredVideoCodec;
@property unsigned int actualAudioCodec; // @synthesize actualAudioCodec;
@property unsigned int preferredAudioCodec; // @synthesize preferredAudioCodec;
@property BOOL isKeyExchangeEnabled; // @synthesize isKeyExchangeEnabled;
@property BOOL isDuplexAudioOnly; // @synthesize isDuplexAudioOnly;
@property BOOL isDuplexVideoOnly; // @synthesize isDuplexVideoOnly;
@property BOOL isVideoSourceScreen; // @synthesize isVideoSourceScreen;
@property BOOL isVideoEnabled; // @synthesize isVideoEnabled;
@property BOOL isAudioEnabled; // @synthesize isAudioEnabled;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)newEncodedDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithEncodedDictionary:(id)arg1;
- (id)init;

@end

