//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDUploadStartingLogEvent : HMDLogEvent
{
    NSString *_saveReason;
}

+ (id)uploadReason:(id)arg1;
+ (id)uuid;
@property(readonly, nonatomic) NSString *saveReason; // @synthesize saveReason=_saveReason;
- (void).cxx_destruct;
- (id)initUploadReason:(id)arg1;

@end

