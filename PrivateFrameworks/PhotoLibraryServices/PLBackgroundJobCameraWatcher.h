//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLBackgroundJobCameraWatcher : NSObject
{
    BOOL _isCameraRunning;
    id <PLBackgroundJobCameraWatcherDelegate> _delegate;
}

@property(readonly) __weak id <PLBackgroundJobCameraWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isCameraRunning;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;

@end
