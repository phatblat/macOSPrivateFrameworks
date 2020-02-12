//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface DSFileUbiquityObserver : NSObject
{
    struct TNSRef<NSMetadataQuery, void> _query;
    struct TNodePtr fParentNode;
    _Bool fSelfObserving;
    struct TKeyValueObserver _resultsObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resultsChanged:(id)arg1 kind:(unsigned long long)arg2;
- (void)updateNodes:(id)arg1;
- (void)updateNodesFromResults;
- (void)stopObserving;
- (void)startObserving:(id)arg1;

@end

