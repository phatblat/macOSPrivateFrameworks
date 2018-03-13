//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<SMCopyEngineDelegate>, NSProgress, NSString, NSURL, SMMigrationRequest, SMSystem_Daemon, SMUIDGIDTranslator;

@interface SMCopyEngine : NSObject
{
    BOOL _fileErrorEncountered;
    BOOL _shoveWhenDone;
    BOOL _haltEngineOnFailure;
    BOOL _publishProgress;
    BOOL _encounteredErrors;
    BOOL _delegateRespondsToErrorSelector;
    BOOL _delegateRespondsToShouldContinueSelector;
    BOOL _delegateRespondsToShoveSelector;
    BOOL _hasDiscreteSizes;
    SMSystem_Daemon *_sourceSystem;
    SMSystem_Daemon *_targetSystem;
    NSURL *_sourceSystemPath;
    NSURL *_destinationSystemPath;
    NSString *_errorString;
    NSString *_progressString;
    unsigned long long _state;
    unsigned long long _completedSize;
    NSProgress *_progress;
    SMMigrationRequest *_migrationRequest;
    SMUIDGIDTranslator *_uidGidTranslator;
    unsigned long long _size;
    NSMutableArray *_copiers;
    NSMutableArray *_copiersToShove;
    NSMutableArray *_copierProgress;
    NSObject<SMCopyEngineDelegate> *_delegate;
    long long _throttleSizeUpdate;
    unsigned long long _sandboxUse;
    NSMutableArray *_transferRateHistory;
    unsigned long long _shovePromptlyUse;
    double _transferRateAtStart;
}

@property double transferRateAtStart; // @synthesize transferRateAtStart=_transferRateAtStart;
@property BOOL hasDiscreteSizes; // @synthesize hasDiscreteSizes=_hasDiscreteSizes;
@property unsigned long long shovePromptlyUse; // @synthesize shovePromptlyUse=_shovePromptlyUse;
@property(retain) NSMutableArray *transferRateHistory; // @synthesize transferRateHistory=_transferRateHistory;
@property unsigned long long sandboxUse; // @synthesize sandboxUse=_sandboxUse;
@property BOOL delegateRespondsToShoveSelector; // @synthesize delegateRespondsToShoveSelector=_delegateRespondsToShoveSelector;
@property BOOL delegateRespondsToShouldContinueSelector; // @synthesize delegateRespondsToShouldContinueSelector=_delegateRespondsToShouldContinueSelector;
@property BOOL delegateRespondsToErrorSelector; // @synthesize delegateRespondsToErrorSelector=_delegateRespondsToErrorSelector;
@property long long throttleSizeUpdate; // @synthesize throttleSizeUpdate=_throttleSizeUpdate;
@property(nonatomic) __weak NSObject<SMCopyEngineDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *copierProgress; // @synthesize copierProgress=_copierProgress;
@property BOOL encounteredErrors; // @synthesize encounteredErrors=_encounteredErrors;
@property(retain) NSMutableArray *copiersToShove; // @synthesize copiersToShove=_copiersToShove;
@property(retain) NSMutableArray *copiers; // @synthesize copiers=_copiers;
@property unsigned long long size; // @synthesize size=_size;
@property BOOL publishProgress; // @synthesize publishProgress=_publishProgress;
@property BOOL haltEngineOnFailure; // @synthesize haltEngineOnFailure=_haltEngineOnFailure;
@property BOOL shoveWhenDone; // @synthesize shoveWhenDone=_shoveWhenDone;
@property(retain) SMUIDGIDTranslator *uidGidTranslator; // @synthesize uidGidTranslator=_uidGidTranslator;
@property(retain) SMMigrationRequest *migrationRequest; // @synthesize migrationRequest=_migrationRequest;
@property BOOL fileErrorEncountered; // @synthesize fileErrorEncountered=_fileErrorEncountered;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property unsigned long long completedSize; // @synthesize completedSize=_completedSize;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) NSString *progressString; // @synthesize progressString=_progressString;
@property(retain) NSString *errorString; // @synthesize errorString=_errorString;
@property(retain) NSURL *destinationSystemPath; // @synthesize destinationSystemPath=_destinationSystemPath;
@property(retain) NSURL *sourceSystemPath; // @synthesize sourceSystemPath=_sourceSystemPath;
@property __weak SMSystem_Daemon *targetSystem; // @synthesize targetSystem=_targetSystem;
@property __weak SMSystem_Daemon *sourceSystem; // @synthesize sourceSystem=_sourceSystem;
- (void).cxx_destruct;
- (void)errorForFileAtPath:(id)arg1;
- (void)finishedFileAtPath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)shove;
- (BOOL)coordinatedShoveWithError:(id *)arg1;
- (void)recordTransferRate:(double)arg1;
- (double)transferRateForSystem:(id)arg1;
- (double)baseTransferRate;
- (double)transferRate;
- (double)estimatedTimeRemaining;
- (double)estimatedTimeToComplete;
- (id)targetPaths;
- (id)sourcePaths;
- (BOOL)willShove;
- (BOOL)shouldContinue;
@property(readonly) BOOL shovePromptly;
- (void)setCopySize:(unsigned long long)arg1;
- (unsigned long long)copySize;
- (void)setShovePromptly:(BOOL)arg1;
@property(readonly) BOOL useSandbox;
- (void)setUseSandbox:(BOOL)arg1;
- (void)cancel;
- (BOOL)run;
- (BOOL)runWithCopier:(id)arg1;
- (void)addCopiers:(id)arg1;
- (void)addCopier:(id)arg1;
- (void)reset;
- (id)description;
- (id)initWithMigrationRequest:(id)arg1;
- (id)initWithSourceSystem:(id)arg1 andDestinationSystem:(id)arg2;
- (id)init;

@end

