//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface EMCollectionItemIDStateCapturer : NSObject
{
    NSObject<OS_dispatch_queue> *_stateCaptureQueue;
    id <EFCancelable> _stateCaptureCancelable;
}

@property(readonly, nonatomic) id <EFCancelable> stateCaptureCancelable; // @synthesize stateCaptureCancelable=_stateCaptureCancelable;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateCaptureQueue; // @synthesize stateCaptureQueue=_stateCaptureQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2;

@end

