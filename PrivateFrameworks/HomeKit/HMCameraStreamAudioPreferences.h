//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSSet;

@interface HMCameraStreamAudioPreferences : NSObject <NSSecureCoding>
{
    NSNumber *_volume;
    NSSet *_codecs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSSet *codecs; // @synthesize codecs=_codecs;
@property(readonly, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVolume:(id)arg1 codecs:(id)arg2;

@end

