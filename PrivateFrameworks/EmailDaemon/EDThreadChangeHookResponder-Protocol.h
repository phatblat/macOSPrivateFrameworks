//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDPersistenceDatabaseGenerationWindow, EMThreadObjectID, EMThreadScope, NSArray;

@protocol EDThreadChangeHookResponder <NSObject>

@optional
- (void)persistenceCanResetThreadScope:(EMThreadScope *)arg1 replyBlock:(void (^)(BOOL))arg2;
- (void)persistenceDidFinishThreadUpdates;
- (void)persistenceIsDeletingThreadWithObjectID:(EMThreadObjectID *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsChangingThreadWithObjectID:(EMThreadObjectID *)arg1 changedKeyPaths:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsMarkingThreadAsJournaledWithObjectID:(EMThreadObjectID *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsAddingThreadWithObjectID:(EMThreadObjectID *)arg1 journaled:(BOOL)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
@end
