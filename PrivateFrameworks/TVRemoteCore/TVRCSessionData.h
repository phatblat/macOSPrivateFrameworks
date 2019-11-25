//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface TVRCSessionData : NSObject
{
    BOOL _usedRTI;
    BOOL _usedSiri;
    BOOL _requiredPairing;
    BOOL _directionalControlsEnabled;
    NSDate *_sessionStartTime;
    NSString *_launchContextDesc;
}

@property(copy, nonatomic) NSString *launchContextDesc; // @synthesize launchContextDesc=_launchContextDesc;
@property(nonatomic) BOOL directionalControlsEnabled; // @synthesize directionalControlsEnabled=_directionalControlsEnabled;
@property(nonatomic) BOOL requiredPairing; // @synthesize requiredPairing=_requiredPairing;
@property(nonatomic) BOOL usedSiri; // @synthesize usedSiri=_usedSiri;
@property(nonatomic) BOOL usedRTI; // @synthesize usedRTI=_usedRTI;
@property(retain, nonatomic) NSDate *sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
- (void).cxx_destruct;

@end

