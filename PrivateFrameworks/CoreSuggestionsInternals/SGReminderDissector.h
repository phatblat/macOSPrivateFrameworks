//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class NSMutableDictionary, RTRoutineManager;

@interface SGReminderDissector : SGPipelineDissector
{
    NSMutableDictionary *_conversations;
    RTRoutineManager *_rtRoutineManager;
}

+ (id)enrichedTaggedCharacterRangesFromEntity:(id)arg1 forMessage:(id)arg2;
+ (id)enrichedTaggedCharacterRangesFromTaggedCharacterRanges:(id)arg1 messageIsSent:(BOOL)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)fetchLocationOfInterestByType:(long long)arg1 name:(id)arg2;
- (id)storageLocationFromDueLocation:(id)arg1;
- (id)_reminderEnrichmentWithTitle:(id)arg1 dueDateComponents:(id)arg2 dueLocationType:(unsigned char)arg3 dueLocation:(id)arg4 dueLocationTrigger:(unsigned char)arg5 sourceURL:(id)arg6 reminderStatus:(unsigned char)arg7 parentEntity:(id)arg8 allDay:(BOOL)arg9;
- (id)_testReminder:(id)arg1 entity:(id)arg2;
- (BOOL)_isTestMessage:(id)arg1;
- (id)conversations;
- (id)defaultDueDateComponentsFromMessages:(id)arg1;
- (id)dueLocationFromMessages:(id)arg1;
- (id)dueDateComponentsFromMessages:(id)arg1;
- (id)reminderTitleFromMessages:(id)arg1;
- (BOOL)mailAddressIsAccountOwner:(id)arg1;
- (id)processingLanguageForContent:(id)arg1;
- (BOOL)isValidTextMessageForProcessing:(id)arg1;
- (id)extractReminderFromEntity:(id)arg1;
- (id)reminderTitleForContent:(id)arg1;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)initWithConversations:(id)arg1 rtRoutineManager:(id)arg2;
- (id)init;

@end
