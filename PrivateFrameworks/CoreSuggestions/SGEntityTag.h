//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SGEntityTag : NSObject <NSCopying>
{
    BOOL _indexed;
    BOOL _stored;
    BOOL _tracked;
    NSString *_name;
}

+ (id)testTag:(int)arg1;
+ (id)allTags;
+ (id)eventHash:(id)arg1;
+ (id)domain:(id)arg1;
+ (id)extractedFromTemplateWithName:(id)arg1;
+ (id)extractedFromTemplateWithShortName:(id)arg1;
+ (id)messageWithEmailKey:(id)arg1;
+ (id)messageWithMailMessageKey:(id)arg1;
+ (id)messageWithMessageId:(id)arg1 fromSource:(id)arg2;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)extraKey:(id)arg1;
+ (id)identity:(id)arg1;
+ (id)interactionContactIdentifier:(id)arg1;
+ (id)contactDetail:(id)arg1;
+ (id)mailingListId:(id)arg1;
+ (id)url:(id)arg1;
+ (id)tagForPrefix:(id)arg1 value:(id)arg2;
+ (id)fullyDissected;
+ (id)isPartiallyDownloaded;
+ (id)fromReply;
+ (id)fromForwardedMessage;
+ (id)defaultDuration;
+ (id)templateException;
+ (id)titleGeneratedFromSubject;
+ (id)titleGeneratedFromTemplate;
+ (id)significantSender;
+ (id)isSent;
+ (id)fromSync;
+ (id)fromTextMessage;
+ (id)eventMetadata:(id)arg1;
+ (id)schemaOrg:(id)arg1;
+ (id)messagesAppUsageLevel:(unsigned char)arg1;
+ (id)mailAppUsageLevel:(unsigned char)arg1;
+ (id)calendarAppUsageLevel:(float)arg1;
+ (id)usedBubblesCount:(unsigned char)arg1;
+ (id)participantCount:(unsigned char)arg1;
+ (id)confidenceScore:(float)arg1;
+ (id)naturalLanguageEventAttributes:(unsigned long long)arg1;
+ (id)naturalLanguageEventLanguageID:(id)arg1;
+ (id)naturalLanguageEventTypeIdentifier:(id)arg1;
+ (id)interactionBundleId:(id)arg1;
+ (id)interactionGroupId:(id)arg1;
+ (id)interactionId:(id)arg1;
+ (id)fromInteraction;
+ (id)timezoneIdentifier:(id)arg1;
+ (id)textCalendarAttachment:(id)arg1;
+ (id)fromCalendarAttachment;
+ (id)naturalLanguageEvent;
+ (id)hardName;
+ (id)human;
+ (id)inhuman;
+ (id)allDay;
+ (id)extractedEventCancellation;
+ (id)fromExtractedDomain;
+ (id)categoryTagWithCategoryType:(unsigned long long)arg1;
+ (id)extractedSocial;
+ (id)extractedFood;
+ (id)extractedMovie;
+ (id)extractedTicket;
+ (id)extractedCarRental;
+ (id)extractedHotel;
+ (id)extractedTrain;
+ (id)extractedBus;
+ (id)extractedFlight;
+ (id)extractedEvent;
+ (id)resolveName:(id)arg1;
+ (void)initialize;
+ (void)tombstonePrefix:(id)arg1;
+ (void)rememberPrefix:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4;
+ (id)remember:(id)arg1;
@property(readonly, nonatomic) BOOL tracked; // @synthesize tracked=_tracked;
@property(readonly, nonatomic) BOOL stored; // @synthesize stored=_stored;
@property(readonly, nonatomic) BOOL indexed; // @synthesize indexed=_indexed;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isExtractedEventCategory;
- (BOOL)isEventHash;
- (BOOL)isDomain;
- (BOOL)isTemplateName;
- (BOOL)isTemplateShortName;
- (id)eventMetadata;
- (BOOL)isEventMetadata;
- (BOOL)isSchemaOrg;
- (BOOL)isMessagesAppUsageLevel;
- (BOOL)isMailAppUsageLevel;
- (BOOL)isCalendarAppUsageLevel;
- (BOOL)isUsedBubblesCount;
- (BOOL)isParticipantCount;
- (BOOL)isConfidenceScore;
- (BOOL)isNaturalLanguageEventLanguageID;
- (BOOL)isNaturalLanguageEventAttributes;
- (BOOL)isNaturalLanguageEventTypeIdentifier;
- (BOOL)isExtraKey;
- (BOOL)isInteractionContactIdentifier;
- (BOOL)isContactDetail;
- (BOOL)isMailingListId;
- (BOOL)isUrl;
- (id)description;
- (id)value;
- (BOOL)isEqualToEntityTag:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

