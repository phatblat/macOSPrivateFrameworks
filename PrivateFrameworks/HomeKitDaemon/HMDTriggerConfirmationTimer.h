//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFTimer.h"

@class NSUUID;

@interface HMDTriggerConfirmationTimer : HMFTimer
{
    NSUUID *_executionSessionID;
}

@property(readonly, nonatomic) NSUUID *executionSessionID; // @synthesize executionSessionID=_executionSessionID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithExecutionSessionID:(id)arg1 timeoutInterval:(double)arg2;

@end

