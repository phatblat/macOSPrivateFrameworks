//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSURL;

@protocol CSAudioAlertProviding <NSObject>
- (void)configureAlertBehavior:(NSDictionary *)arg1;
- (unsigned long long)alertStartTime;
- (BOOL)playRecordStartingAlertAndResetEndpointer;
- (BOOL)playAlertSoundForType:(long long)arg1;
- (BOOL)setAlertSoundFromURL:(NSURL *)arg1 forType:(long long)arg2;
- (void)setAudioAlertDelegate:(id <CSAudioAlertProvidingDelegate>)arg1;
@end

