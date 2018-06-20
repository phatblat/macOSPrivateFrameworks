//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFSettingsConnection, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface AFMyriadStereoPairManager : NSObject
{
    BOOL _isPaired;
    BOOL _isListening;
    BOOL _heardPairDeviceWin;
    NSDate *_localPreviousWinTime;
    NSDate *_partnerPreviousWinTime;
    AFSettingsConnection *_settingsConnection;
    NSObject<OS_dispatch_semaphore> *_stereoPairListenSemaphore;
    NSObject<OS_dispatch_queue> *_stereoPairQueue;
}

+ (id)currentManager;
@property(nonatomic) BOOL isListening; // @synthesize isListening=_isListening;
@property(nonatomic) BOOL isPaired; // @synthesize isPaired=_isPaired;
- (void).cxx_destruct;
- (BOOL)shouldActuallyWinAgainstPairedDevice;
- (void)listenForPairedDeviceWin;
- (void)setLocalLastWinTime;
- (void)_updateLocalLastWinTime;
- (void)updateStereoPairedStatus;
- (void)updatePartnerLastWinTime;
- (id)init;

@end

