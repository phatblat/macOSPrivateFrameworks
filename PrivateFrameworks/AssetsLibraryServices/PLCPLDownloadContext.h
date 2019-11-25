//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface PLCPLDownloadContext : NSObject
{
    BOOL _completed;
    NSString *_taskIdentifier;
    NSString *_resourceTypeDescription;
    double _progress;
    NSError *_error;
    double _updateLastQueuedTime;
}

@property double updateLastQueuedTime; // @synthesize updateLastQueuedTime=_updateLastQueuedTime;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL completed; // @synthesize completed=_completed;
@property double progress; // @synthesize progress=_progress;
@property(retain) NSString *resourceTypeDescription; // @synthesize resourceTypeDescription=_resourceTypeDescription;
@property(retain) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void).cxx_destruct;
- (void)updateFromDownloadStatusUserInfo:(id)arg1;
- (id)description;

@end

