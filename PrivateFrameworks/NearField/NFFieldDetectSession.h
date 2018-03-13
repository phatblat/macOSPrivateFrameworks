//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NearField/NFSession.h>

#import "NFFieldDetectSessionCallbacks.h"

@class NFWeakReference, NSString;

@interface NFFieldDetectSession : NFSession <NFFieldDetectSessionCallbacks>
{
    NFWeakReference *_delegate;
}

- (void)didEndUnexpectedly;
- (void)didDetectTechnology:(id)arg1;
- (void)didDetectField:(BOOL)arg1;
@property id <NFFieldDetectSessionDelegate> delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

