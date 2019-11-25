//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OCDDelayedNodeContext.h"

@class EBReaderSheetState, NSString;

__attribute__((visibility("hidden")))
@interface EBSheetContext : NSObject <OCDDelayedNodeContext>
{
    EBReaderSheetState *mSheetState;
    unsigned int mSheetIndex;
}

- (void).cxx_destruct;
- (_Bool)loadDelayedNode:(id)arg1;
- (id)initWithSheetIndex:(unsigned int)arg1 state:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

