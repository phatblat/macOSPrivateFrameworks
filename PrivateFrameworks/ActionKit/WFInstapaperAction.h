//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAction.h"

#import "IKEngineDelegate.h"
#import "WFDynamicEnumerationDataSource.h"

@class IKEngine, NSArray, NSMutableArray, NSString;

@interface WFInstapaperAction : WFAction <WFDynamicEnumerationDataSource, IKEngineDelegate>
{
    BOOL _hasFetchedFolders;
    IKEngine *_engine;
    NSMutableArray *_identifiers;
}

@property(nonatomic) BOOL hasFetchedFolders; // @synthesize hasFetchedFolders=_hasFetchedFolders;
@property(readonly, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)possibleStatesForEnumeration:(id)arg1;
- (void)engine:(id)arg1 connection:(id)arg2 didReceiveFolders:(id)arg3;
- (void)engine:(id)arg1 didFailConnection:(id)arg2 error:(id)arg3;
- (void)engine:(id)arg1 didFinishConnection:(id)arg2;
- (void)engine:(id)arg1 willStartConnection:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1 selectedFolder:(id)arg2;
@property(readonly, nonatomic) BOOL includeSpecialFolders;
@property(readonly, nonatomic) NSArray *connectionTypes;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)finishRunningWithError:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
@property(readonly, nonatomic) IKEngine *engine; // @synthesize engine=_engine;
- (id)folders;
- (void)updateFolders;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)initializeParameters;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

