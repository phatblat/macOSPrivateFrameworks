//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSDate, NSString;

@interface PCScheduleSystemWakeOperation : NSOperation
{
    BOOL _scheduleOrCancel;
    BOOL _userVisible;
    NSDate *_wakeDate;
    double _acceptableDelay;
    NSString *_serviceIdentifier;
    void *_unqiueIdentifier;
}

- (void).cxx_destruct;
- (void)main;
- (id)initForScheduledWake:(BOOL)arg1 wakeDate:(id)arg2 acceptableDelay:(double)arg3 userVisible:(BOOL)arg4 serviceIdentifier:(id)arg5 uniqueIdentifier:(void *)arg6;

@end

