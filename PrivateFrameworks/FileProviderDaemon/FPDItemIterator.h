//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProviderDaemon/FPDIterator.h>

#import "FPDLifetimeExtender.h"
#import "FPXEnumeratorObserver.h"

@class FPDDomain, FPDExtension, FPItem, NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface FPDItemIterator : FPDIterator <FPXEnumeratorObserver, FPDLifetimeExtender>
{
    NSObject<OS_dispatch_queue> *_queue;
    FPItem *_current;
    unsigned long long _numFoldersPoped;
    BOOL _done;
    NSError *_error;
    NSMutableArray *_enumeratorByDepth;
    NSMutableArray *_remainingItemsByDepth;
    FPDExtension *_provider;
    FPDDomain *_domain;
}

- (void).cxx_destruct;
@property(readonly) NSString *prettyDescription;
@property(readonly) int requestEffectivePID;
- (void)didUpdateItem:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)dealloc;
- (unsigned long long)numFoldersPopped;
- (BOOL)done;
- (void)_invalidateWithError:(id)arg1;
- (id)error;
- (id)nextWithError:(id *)arg1;
- (void)_next;
- (BOOL)_shouldTraverseSubTree:(id)arg1;
- (void)_decorateItem:(id)arg1;
- (BOOL)_enumerateMoreItems;
- (BOOL)_createEnumerator;
- (id)_popItem;
- (void)_pushFolder:(id)arg1;
- (void)_popFolder;
- (id)initWithItem:(id)arg1 provider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
