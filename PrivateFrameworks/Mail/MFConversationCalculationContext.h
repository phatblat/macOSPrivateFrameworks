//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFLibraryMessage, MFPreparedStatement, MFSqliteHandle, NSData, NSHashTable, NSMutableDictionary, NSMutableSet;

@interface MFConversationCalculationContext : NSObject
{
    NSHashTable *_participants;
    BOOL _hasReferences;
    BOOL _messageType;
    BOOL _didTearDown;
    BOOL _conversationsWereReset;
    BOOL _recordConversationCalculationPerformanceMetrics;
    BOOL _logConversationCalculationTrace;
    int _rootStatus;
    int _dateReceived;
    int _automatedConversationType;
    long long _rowID;
    MFLibraryMessage *_message;
    long long _subjectID;
    unsigned long long _subjectLength;
    NSData *_messageIDHeader;
    long long _conversationID;
    long long _mailbox;
    long long _senderID;
    MFSqliteHandle *_handle;
    struct sqlite3 *_db;
    NSMutableSet *_addedConversations;
    NSMutableSet *_removedConversations;
    NSMutableSet *_updatedConversations;
    NSMutableDictionary *_oldConversationIDByMessage;
    NSMutableDictionary *_currentConversationIDByMessage;
    MFPreparedStatement *_addMessageToConversationStatement;
    MFPreparedStatement *_maxConversationIDStatement;
    MFPreparedStatement *_messagesMissingConversationPositionStatement;
    MFPreparedStatement *_updateConversationPositionStatement;
    double _messageHasReferencesTime;
    double _messageHasMessageIDTime;
    double _conversationIDOfCloneTime;
    double _conversationIDOfClosestAncestorTime;
    double _descendantsOfMessagesTime;
    double _peersOfMessagesTime;
    double _fuzzyDescendantsToSplitTime;
    double _conversationIDOfFuzzyAncestorTime;
    double _descendantsOfMessageToSplitTime;
    double _createNewConversationFromMessageTime;
    double _addMessageToConversationTime;
    double _mergeConversationsTime;
    double _calculateConversationForMessageTotalTime;
    double _conversationIDOfAutomatedMessageWithReferencesTime;
    double _conversationIDOfAutomatedMessageWithoutReferencesTime;
    double _fixupConversationPositionsTime;
    unsigned long long _cloneCount;
    unsigned long long _closestAncestorCount;
    unsigned long long _descendantsFoundCount;
    unsigned long long _peersFoundCount;
    unsigned long long _fuzzyDescendantsToSplitCount;
    unsigned long long _fuzzyAncestorCount;
    unsigned long long _descendantsToSplitCount;
    unsigned long long _newConversationCount;
    unsigned long long _addMessageToConversationCount;
    unsigned long long _conversationsSplitCount;
    unsigned long long _conversationsMergeCount;
    unsigned long long _messagesMergedCount;
    unsigned long long _fuzzyMatchesCacheHits;
    unsigned long long _fuzzyMatchesCacheMisses;
    unsigned long long _automatedMessagesWithReferencesCount;
    unsigned long long _automatedMessagesWithoutReferencesCount;
    unsigned long long _conversationPositionInvalidRangeCount;
    unsigned long long _conversationPositionInsertionPointUnavailableCount;
    unsigned long long _conversationPositionRangeNormalCount;
    unsigned long long _conversationPositionAdjustedForAncestorCount;
    unsigned long long _conversationPositionAdjustedForDescendantCount;
    MFPreparedStatement *_messageHasReferencesStatement;
    MFPreparedStatement *_messageHasMessageIDStatement;
    MFPreparedStatement *_conversationIDOfCloneStatement;
    MFPreparedStatement *_conversationIDOfAutomatedAncestorWithReferencesStatement;
    MFPreparedStatement *_conversationIDOfAutomatedPeerWithReferencesStatement;
    MFPreparedStatement *_conversationIDOfAutomatedMessageWithoutReferencesStatement;
    MFPreparedStatement *_conversationIDOfClosestAncestorStatement;
    MFPreparedStatement *_peersOfMessageStatement;
    MFPreparedStatement *_messagesInConversationStatement;
    MFPreparedStatement *_descendantsToSplitFromConversationStatement;
    MFPreparedStatement *_descendantsOfMessageStatement;
    MFPreparedStatement *_descendantBelongsToSameConversationAsAncestorStatement;
    MFPreparedStatement *_peersToSplitFromConversationStatement;
    MFPreparedStatement *_fuzzyMessagesWithSameSubjectStatement;
    MFPreparedStatement *_candidateMessagesForFuzzyMatchingStatement;
    MFPreparedStatement *_fuzzyMessagesToSplitFromConversationStatement;
    MFPreparedStatement *_recipientsForRowIDStatement;
    MFPreparedStatement *_dateReceivedForRowIDStatement;
    MFPreparedStatement *_senderForRowIDStatement;
    MFPreparedStatement *_conversationIDForRowIDStatement;
    MFPreparedStatement *_setFuzzyAncestorForRowIDStatement;
    MFPreparedStatement *_subjectForRowIDStatement;
    MFPreparedStatement *_automatedConversationTypeForRowIDStatement;
    MFPreparedStatement *_clonesForRowIDStatement;
    MFPreparedStatement *_countOfDistinctAutomatedConversationTypesForConversationIDStatement;
    MFPreparedStatement *_conversationPositionOfClosestDescendantStatement;
    MFPreparedStatement *_conversationPositionOfClosestAncestorStatement;
}

+ (void)addMessagesInDictionary:(id)arg1 toDictionary:(id)arg2;
@property(retain, nonatomic) MFPreparedStatement *conversationPositionOfClosestAncestorStatement; // @synthesize conversationPositionOfClosestAncestorStatement=_conversationPositionOfClosestAncestorStatement;
@property(retain, nonatomic) MFPreparedStatement *conversationPositionOfClosestDescendantStatement; // @synthesize conversationPositionOfClosestDescendantStatement=_conversationPositionOfClosestDescendantStatement;
@property(retain, nonatomic) MFPreparedStatement *countOfDistinctAutomatedConversationTypesForConversationIDStatement; // @synthesize countOfDistinctAutomatedConversationTypesForConversationIDStatement=_countOfDistinctAutomatedConversationTypesForConversationIDStatement;
@property(retain, nonatomic) MFPreparedStatement *clonesForRowIDStatement; // @synthesize clonesForRowIDStatement=_clonesForRowIDStatement;
@property(retain, nonatomic) MFPreparedStatement *automatedConversationTypeForRowIDStatement; // @synthesize automatedConversationTypeForRowIDStatement=_automatedConversationTypeForRowIDStatement;
@property(retain, nonatomic) MFPreparedStatement *subjectForRowIDStatement; // @synthesize subjectForRowIDStatement=_subjectForRowIDStatement;
@property(retain, nonatomic) MFPreparedStatement *setFuzzyAncestorForRowIDStatement; // @synthesize setFuzzyAncestorForRowIDStatement=_setFuzzyAncestorForRowIDStatement;
@property(retain, nonatomic) MFPreparedStatement *conversationIDForRowIDStatement; // @synthesize conversationIDForRowIDStatement=_conversationIDForRowIDStatement;
@property(retain, nonatomic) MFPreparedStatement *senderForRowIDStatement; // @synthesize senderForRowIDStatement=_senderForRowIDStatement;
@property(retain, nonatomic) MFPreparedStatement *dateReceivedForRowIDStatement; // @synthesize dateReceivedForRowIDStatement=_dateReceivedForRowIDStatement;
@property(retain, nonatomic) MFPreparedStatement *recipientsForRowIDStatement; // @synthesize recipientsForRowIDStatement=_recipientsForRowIDStatement;
@property(retain, nonatomic) MFPreparedStatement *fuzzyMessagesToSplitFromConversationStatement; // @synthesize fuzzyMessagesToSplitFromConversationStatement=_fuzzyMessagesToSplitFromConversationStatement;
@property(retain, nonatomic) MFPreparedStatement *candidateMessagesForFuzzyMatchingStatement; // @synthesize candidateMessagesForFuzzyMatchingStatement=_candidateMessagesForFuzzyMatchingStatement;
@property(retain, nonatomic) MFPreparedStatement *fuzzyMessagesWithSameSubjectStatement; // @synthesize fuzzyMessagesWithSameSubjectStatement=_fuzzyMessagesWithSameSubjectStatement;
@property(retain, nonatomic) MFPreparedStatement *peersToSplitFromConversationStatement; // @synthesize peersToSplitFromConversationStatement=_peersToSplitFromConversationStatement;
@property(retain, nonatomic) MFPreparedStatement *descendantBelongsToSameConversationAsAncestorStatement; // @synthesize descendantBelongsToSameConversationAsAncestorStatement=_descendantBelongsToSameConversationAsAncestorStatement;
@property(retain, nonatomic) MFPreparedStatement *descendantsOfMessageStatement; // @synthesize descendantsOfMessageStatement=_descendantsOfMessageStatement;
@property(retain, nonatomic) MFPreparedStatement *descendantsToSplitFromConversationStatement; // @synthesize descendantsToSplitFromConversationStatement=_descendantsToSplitFromConversationStatement;
@property(retain, nonatomic) MFPreparedStatement *messagesInConversationStatement; // @synthesize messagesInConversationStatement=_messagesInConversationStatement;
@property(retain, nonatomic) MFPreparedStatement *peersOfMessageStatement; // @synthesize peersOfMessageStatement=_peersOfMessageStatement;
@property(retain, nonatomic) MFPreparedStatement *conversationIDOfClosestAncestorStatement; // @synthesize conversationIDOfClosestAncestorStatement=_conversationIDOfClosestAncestorStatement;
@property(retain, nonatomic) MFPreparedStatement *conversationIDOfAutomatedMessageWithoutReferencesStatement; // @synthesize conversationIDOfAutomatedMessageWithoutReferencesStatement=_conversationIDOfAutomatedMessageWithoutReferencesStatement;
@property(retain, nonatomic) MFPreparedStatement *conversationIDOfAutomatedPeerWithReferencesStatement; // @synthesize conversationIDOfAutomatedPeerWithReferencesStatement=_conversationIDOfAutomatedPeerWithReferencesStatement;
@property(retain, nonatomic) MFPreparedStatement *conversationIDOfAutomatedAncestorWithReferencesStatement; // @synthesize conversationIDOfAutomatedAncestorWithReferencesStatement=_conversationIDOfAutomatedAncestorWithReferencesStatement;
@property(retain, nonatomic) MFPreparedStatement *conversationIDOfCloneStatement; // @synthesize conversationIDOfCloneStatement=_conversationIDOfCloneStatement;
@property(retain, nonatomic) MFPreparedStatement *messageHasMessageIDStatement; // @synthesize messageHasMessageIDStatement=_messageHasMessageIDStatement;
@property(retain, nonatomic) MFPreparedStatement *messageHasReferencesStatement; // @synthesize messageHasReferencesStatement=_messageHasReferencesStatement;
@property(nonatomic) unsigned long long conversationPositionAdjustedForDescendantCount; // @synthesize conversationPositionAdjustedForDescendantCount=_conversationPositionAdjustedForDescendantCount;
@property(nonatomic) unsigned long long conversationPositionAdjustedForAncestorCount; // @synthesize conversationPositionAdjustedForAncestorCount=_conversationPositionAdjustedForAncestorCount;
@property(nonatomic) unsigned long long conversationPositionRangeNormalCount; // @synthesize conversationPositionRangeNormalCount=_conversationPositionRangeNormalCount;
@property(nonatomic) unsigned long long conversationPositionInsertionPointUnavailableCount; // @synthesize conversationPositionInsertionPointUnavailableCount=_conversationPositionInsertionPointUnavailableCount;
@property(nonatomic) unsigned long long conversationPositionInvalidRangeCount; // @synthesize conversationPositionInvalidRangeCount=_conversationPositionInvalidRangeCount;
@property(nonatomic) unsigned long long automatedMessagesWithoutReferencesCount; // @synthesize automatedMessagesWithoutReferencesCount=_automatedMessagesWithoutReferencesCount;
@property(nonatomic) unsigned long long automatedMessagesWithReferencesCount; // @synthesize automatedMessagesWithReferencesCount=_automatedMessagesWithReferencesCount;
@property(nonatomic) unsigned long long fuzzyMatchesCacheMisses; // @synthesize fuzzyMatchesCacheMisses=_fuzzyMatchesCacheMisses;
@property(nonatomic) unsigned long long fuzzyMatchesCacheHits; // @synthesize fuzzyMatchesCacheHits=_fuzzyMatchesCacheHits;
@property(nonatomic) unsigned long long messagesMergedCount; // @synthesize messagesMergedCount=_messagesMergedCount;
@property(nonatomic) unsigned long long conversationsMergeCount; // @synthesize conversationsMergeCount=_conversationsMergeCount;
@property(nonatomic) unsigned long long conversationsSplitCount; // @synthesize conversationsSplitCount=_conversationsSplitCount;
@property(nonatomic) unsigned long long addMessageToConversationCount; // @synthesize addMessageToConversationCount=_addMessageToConversationCount;
@property(nonatomic) unsigned long long newConversationCount; // @synthesize newConversationCount=_newConversationCount;
@property(nonatomic) unsigned long long descendantsToSplitCount; // @synthesize descendantsToSplitCount=_descendantsToSplitCount;
@property(nonatomic) unsigned long long fuzzyAncestorCount; // @synthesize fuzzyAncestorCount=_fuzzyAncestorCount;
@property(nonatomic) unsigned long long fuzzyDescendantsToSplitCount; // @synthesize fuzzyDescendantsToSplitCount=_fuzzyDescendantsToSplitCount;
@property(nonatomic) unsigned long long peersFoundCount; // @synthesize peersFoundCount=_peersFoundCount;
@property(nonatomic) unsigned long long descendantsFoundCount; // @synthesize descendantsFoundCount=_descendantsFoundCount;
@property(nonatomic) unsigned long long closestAncestorCount; // @synthesize closestAncestorCount=_closestAncestorCount;
@property(nonatomic) unsigned long long cloneCount; // @synthesize cloneCount=_cloneCount;
@property(nonatomic) double fixupConversationPositionsTime; // @synthesize fixupConversationPositionsTime=_fixupConversationPositionsTime;
@property(nonatomic) double conversationIDOfAutomatedMessageWithoutReferencesTime; // @synthesize conversationIDOfAutomatedMessageWithoutReferencesTime=_conversationIDOfAutomatedMessageWithoutReferencesTime;
@property(nonatomic) double conversationIDOfAutomatedMessageWithReferencesTime; // @synthesize conversationIDOfAutomatedMessageWithReferencesTime=_conversationIDOfAutomatedMessageWithReferencesTime;
@property(nonatomic) double calculateConversationForMessageTotalTime; // @synthesize calculateConversationForMessageTotalTime=_calculateConversationForMessageTotalTime;
@property(nonatomic) double mergeConversationsTime; // @synthesize mergeConversationsTime=_mergeConversationsTime;
@property(nonatomic) double addMessageToConversationTime; // @synthesize addMessageToConversationTime=_addMessageToConversationTime;
@property(nonatomic) double createNewConversationFromMessageTime; // @synthesize createNewConversationFromMessageTime=_createNewConversationFromMessageTime;
@property(nonatomic) double descendantsOfMessageToSplitTime; // @synthesize descendantsOfMessageToSplitTime=_descendantsOfMessageToSplitTime;
@property(nonatomic) double conversationIDOfFuzzyAncestorTime; // @synthesize conversationIDOfFuzzyAncestorTime=_conversationIDOfFuzzyAncestorTime;
@property(nonatomic) double fuzzyDescendantsToSplitTime; // @synthesize fuzzyDescendantsToSplitTime=_fuzzyDescendantsToSplitTime;
@property(nonatomic) double peersOfMessagesTime; // @synthesize peersOfMessagesTime=_peersOfMessagesTime;
@property(nonatomic) double descendantsOfMessagesTime; // @synthesize descendantsOfMessagesTime=_descendantsOfMessagesTime;
@property(nonatomic) double conversationIDOfClosestAncestorTime; // @synthesize conversationIDOfClosestAncestorTime=_conversationIDOfClosestAncestorTime;
@property(nonatomic) double conversationIDOfCloneTime; // @synthesize conversationIDOfCloneTime=_conversationIDOfCloneTime;
@property(nonatomic) double messageHasMessageIDTime; // @synthesize messageHasMessageIDTime=_messageHasMessageIDTime;
@property(nonatomic) double messageHasReferencesTime; // @synthesize messageHasReferencesTime=_messageHasReferencesTime;
@property(retain, nonatomic) MFPreparedStatement *updateConversationPositionStatement; // @synthesize updateConversationPositionStatement=_updateConversationPositionStatement;
@property(retain, nonatomic) MFPreparedStatement *messagesMissingConversationPositionStatement; // @synthesize messagesMissingConversationPositionStatement=_messagesMissingConversationPositionStatement;
@property(retain, nonatomic) MFPreparedStatement *maxConversationIDStatement; // @synthesize maxConversationIDStatement=_maxConversationIDStatement;
@property(retain, nonatomic) MFPreparedStatement *addMessageToConversationStatement; // @synthesize addMessageToConversationStatement=_addMessageToConversationStatement;
@property(retain, nonatomic) NSMutableDictionary *currentConversationIDByMessage; // @synthesize currentConversationIDByMessage=_currentConversationIDByMessage;
@property(retain, nonatomic) NSMutableDictionary *oldConversationIDByMessage; // @synthesize oldConversationIDByMessage=_oldConversationIDByMessage;
@property(retain, nonatomic) NSMutableSet *updatedConversations; // @synthesize updatedConversations=_updatedConversations;
@property(retain, nonatomic) NSMutableSet *removedConversations; // @synthesize removedConversations=_removedConversations;
@property(retain, nonatomic) NSMutableSet *addedConversations; // @synthesize addedConversations=_addedConversations;
@property(nonatomic) BOOL logConversationCalculationTrace; // @synthesize logConversationCalculationTrace=_logConversationCalculationTrace;
@property(nonatomic) BOOL recordConversationCalculationPerformanceMetrics; // @synthesize recordConversationCalculationPerformanceMetrics=_recordConversationCalculationPerformanceMetrics;
@property(nonatomic) BOOL conversationsWereReset; // @synthesize conversationsWereReset=_conversationsWereReset;
@property(readonly, nonatomic) BOOL didTearDown; // @synthesize didTearDown=_didTearDown;
@property(readonly, nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(readonly, nonatomic) MFSqliteHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) int automatedConversationType; // @synthesize automatedConversationType=_automatedConversationType;
@property(nonatomic) int dateReceived; // @synthesize dateReceived=_dateReceived;
@property(nonatomic) long long senderID; // @synthesize senderID=_senderID;
@property(nonatomic) long long mailbox; // @synthesize mailbox=_mailbox;
@property(nonatomic) BOOL messageType; // @synthesize messageType=_messageType;
@property(nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) NSData *messageIDHeader; // @synthesize messageIDHeader=_messageIDHeader;
@property(nonatomic) BOOL hasReferences; // @synthesize hasReferences=_hasReferences;
@property(nonatomic) int rootStatus; // @synthesize rootStatus=_rootStatus;
@property(nonatomic) unsigned long long subjectLength; // @synthesize subjectLength=_subjectLength;
@property(nonatomic) long long subjectID; // @synthesize subjectID=_subjectID;
@property(retain, nonatomic) MFLibraryMessage *message; // @synthesize message=_message;
@property(nonatomic) long long rowID; // @synthesize rowID=_rowID;
- (void).cxx_destruct;
- (id)summaryForConversation:(long long)arg1;
- (BOOL)automatedConversationTypeIsConsistentForConversation:(long long)arg1;
- (int)conversationPositionOfClosestDescendantForRowID:(long long)arg1 inConversation:(long long)arg2;
- (int)conversationPositionOfClosestAncestorForRowID:(long long)arg1 inConversation:(long long)arg2;
- (int)automatedConversationTypeForRowID:(long long)arg1;
- (id)clonesForRowID:(long long)arg1;
@property(retain, nonatomic) NSHashTable *participants;
- (id)_participantsForRowID:(long long)arg1;
- (id)_recipientsForRowID:(long long)arg1;
- (long long)conversationIDForRowID:(long long)arg1;
- (unsigned long long)subjectLengthForRowID:(long long)arg1;
- (long long)_senderForRowID:(long long)arg1;
- (int)_dateReceivedForRowID:(long long)arg1;
- (void)_setFuzzyAncestor:(long long)arg1 forRowID:(long long)arg2;
- (id)_conversationsWithFuzzyDescendantsExcludingConversations:(id)arg1;
- (id)_recursiveDescendantsInConversations:(id)arg1;
- (id)descendantsOfMessageToSplit;
- (BOOL)_descendant:(long long)arg1 belongsToSameConversationAsAncestor:(long long)arg2;
- (long long)conversationIDOfClosestDescendantExcludingConversationID:(long long)arg1;
- (id)descendantsOfMessageExcludingConversationID:(long long)arg1;
- (id)fuzzyDescendantsToSplitExcludingConversationIDs:(id)arg1;
- (unsigned long long)_messagesWithSubject:(long long)arg1 participantsByRowID:(id)arg2 conversationIDByRowID:(id)arg3 dateReceivedByRowID:(id)arg4;
- (long long)_conversationIDUsingFuzzyHeuristicOfRowID:(long long)arg1 withSubject:(long long)arg2 subjectLength:(unsigned long long)arg3 sender:(long long)arg4 rootStatus:(int)arg5 participantsByRowID:(id)arg6 conversationIDByRowID:(id)arg7 dateReceivedByRowID:(id)arg8 resultRowID:(long long *)arg9 abortOnMatchBetterThanRowID:(long long)arg10;
- (long long)_rowIDOfBestFuzzyAncestorForMessage:(long long)arg1 subjectID:(long long)arg2 subjectLength:(unsigned long long)arg3 dateReceived:(int)arg4 senderID:(long long)arg5 rootStatus:(int)arg6 participantsByRowID:(id)arg7 conversationIDByRowID:(id)arg8 dateReceivedByRowID:(id)arg9 currentFuzzyAncestor:(long long)arg10 abortOnMatchBetterThanRowID:(long long)arg11 conversationIDOfBestFuzzyAncestor:(long long *)arg12;
- (id)_messagesInConversations:(id)arg1 count:(unsigned long long *)arg2;
- (id)peersOfMessageExcludingAncestorConversationID:(long long)arg1 descendantConversationID:(long long)arg2;
- (long long)conversationIDOfAutomatedMessageWithReferencesWithRowIDsToConversationType:(id *)arg1;
- (long long)conversationIDOfFuzzyAncestorWithRowID:(long long *)arg1;
- (long long)conversationIDOfClosestAncestorWithRowID:(long long *)arg1;
- (long long)conversationIDOfCloneWithRowID:(long long *)arg1;
@property(readonly, nonatomic) BOOL messageHasMessageID;
@property(readonly, nonatomic) BOOL messageHasReferences;
- (void)conversationWasUpdated:(long long)arg1;
- (void)conversationWasRemoved:(long long)arg1;
- (void)conversationWasAdded:(long long)arg1;
- (id)description;
- (void)dealloc;
- (void)tearDown;
- (void)resetForNewRow;
- (id)init;
- (id)initWithHandle:(id)arg1;

@end

