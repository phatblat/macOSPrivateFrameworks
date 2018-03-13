//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSPContainerPersister : NSObject
{
    id <MSPContainerPersisterDelegate> _delegate;
    long long _duplicatesPolicy;
}

@property(readonly, nonatomic) long long duplicatesPolicy; // @synthesize duplicatesPolicy=_duplicatesPolicy;
@property(nonatomic) __weak id <MSPContainerPersisterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchStateSnapshotWithCompletion:(CDUnknownBlockType)arg1;

@end

