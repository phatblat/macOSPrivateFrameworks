//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_semaphore>, _CDClientContext, _CDContextualChangeRegistration, _CDContextualKeyPath;

@interface SunriseSunsetProvider : NSObject
{
    _CDClientContext *_duetContextStore;
    _CDContextualKeyPath *_duetKeyPath;
    _CDContextualChangeRegistration *_duetRegistration;
    NSDictionary *_duetInfo;
    NSObject<OS_dispatch_semaphore> *_duetDispatchSemaphore;
    BOOL _sunriseSunsetNotificationEnabled;
    CDUnknownBlockType _callbackBlock;
    int _logLevel;
}

@property int logLevel; // @synthesize logLevel=_logLevel;
- (void)updateSunriseSunsetInfo;
- (id)copySunriseSunsetInfo:(int)arg1;
- (void)dealloc;
- (void)cancel;
- (void)unregisterNotification;
- (void)unregisterBlock;
- (void)registerBlock:(CDUnknownBlockType)arg1;
- (id)initWithCallback:(CDUnknownBlockType)arg1;
- (id)copySunsetSunriseInfoFromContext;

@end

