//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FPXEnumeratorObserver.h"

@class FPItem, NSString;

__attribute__((visibility("hidden")))
@interface _FPChildrenEnumerator : NSObject <FPXEnumeratorObserver>
{
    FPItem *_parentItem;
    id <FPXEnumerator> _enumerator;
    CDUnknownBlockType _enumerationCallback;
    CDUnknownBlockType _enumerationCompletionHandler;
}

+ (void)enumerateChildrenOfItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 enumerationCallback:(CDUnknownBlockType)arg2;
- (void)enumerateFromPage:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)didUpdateItem:(id)arg1;
- (void)finishWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

