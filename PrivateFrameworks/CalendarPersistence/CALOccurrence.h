//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALDate, CALOccurrableEntity, NSMutableDictionary, NSString;

@interface CALOccurrence : NSObject
{
    CALDate *_initialStartDate;
    CALDate *_startDate;
    CALOccurrableEntity *_realEntity;
    CALOccurrableEntity *_parentEntity;
    NSMutableDictionary *_clientData;
    NSString *_occurrenceID;
    BOOL _discard;
}

- (void).cxx_destruct;
- (BOOL)ableToMoveToCalendar:(id)arg1;
- (BOOL)ableToMovePreservingAttendeesToCalendar:(id)arg1;
- (BOOL)isAddressMe:(id)arg1;
- (void)dealloc;
- (id)makeEntityFromOccurrence;
- (long long)compare:(id)arg1;
- (id)occurrenceID;
- (BOOL)isEqualToOccurrence:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFirstOccurence;
- (BOOL)isMainOccurrence;
- (BOOL)isOrganizerMeAndEditable;
- (BOOL)isOrganizerMe;
- (id)entity;
- (void)setStartDateAndTimeZone:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)initialStartDate;
- (id)clientData;
- (id)startDate;
- (void)resetOccurrenceID;
- (void)reset;
- (BOOL)isDiscarded;
- (void)discard;
- (id)initWithOccurrableEntity:(id)arg1 withStartDate:(id)arg2;
- (id)description;
- (id)alarmBaseDate;
- (id)textRepresentation;
- (void)makeExchangeCompatible;
- (BOOL)shouldWarnUserOnMoveToExchangeCalendar:(id)arg1;
- (BOOL)shouldWarnUserOnMoveToExchangeRepository:(id)arg1;
- (BOOL)isExchangeCompatible;
- (BOOL)hasExchangeRepository;
- (BOOL)hasCalDAVRepository;
- (BOOL)hasInvitedAttendeesIncludingChildren;
- (BOOL)hasInvitedAttendees;
- (BOOL)hasSendableAttendees;
- (void)forceNeedsActionOnNoneAttendees;
- (void)resetParticipationStatus;
- (BOOL)isCancelledInvitation;
- (id)occurrenceDateID;
- (void)forceRSVPTo:(BOOL)arg1;
- (void)handleMeCaseInAttendees;
- (BOOL)myRSVPStatus;
- (int)myParticipationStatus;
- (int)invitationMode;
- (int)invitationModeIncludingChildren;
- (BOOL)isAnInvitation;
- (void)setMyParticipationStatus:(int)arg1;
- (void)setMyRSVPStatus:(BOOL)arg1;
- (void)setRSVPNeeded:(BOOL)arg1;
- (BOOL)rsvpNeeded;
- (void)setAlreadySentMarker:(BOOL)arg1;
- (BOOL)alreadySentMarker;
- (void)setDirtyParticipationStatus:(BOOL)arg1;
- (BOOL)myStatusHasChanged;
- (id)searchMetaData;
- (id)alarmWithSignature:(id)arg1;
- (void)setSingleRecurrenceRule:(id)arg1;
- (void)setFullDayEvent:(BOOL)arg1;
- (void)moveToRepository:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)setMainRecurrenceRule:(id)arg1;
- (id)mainRecurrenceRule;
- (void)setStructuredLocation:(id)arg1;
- (void)setLocations:(id)arg1;
- (BOOL)hasChildren;
- (id)templateData;
- (BOOL)isFullDayEvent;
- (BOOL)hasRecurrenceData;
- (BOOL)needsDetachCheck;
- (BOOL)hasRecurrenceOrIsDetached;
- (id)entityUID;
- (BOOL)dirty;
- (id)masterEntity;
- (id)recurID;
- (id)structuredLocation;
- (id)locationString;
- (id)locations;
- (void)deleteFromRepositoryInManagedObjectContext:(id)arg1;
- (id)repository;
- (id)HACKentity;
- (id)parentEntity;
- (id)originEntity;
- (BOOL)isDetachedEntity;
- (BOOL)_ITipNeedsUpd;
- (BOOL)invitationStatusPending;
- (void)setDropBoxLocation:(id)arg1;
- (id)dropBoxLocation;
- (void)setHasDropBox:(BOOL)arg1;
- (BOOL)hasDropBox;
- (void)setAttendees:(id)arg1;
- (void)removeAllCategories;
- (void)removeAllAttachments;
- (void)removeAllAttendees;
- (void)removeAllAlarms;
- (void)removeAttendeeSimilarToAttendee:(id)arg1;
- (void)removeAttendee:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (BOOL)hasAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)removeOrUninviteAttendee:(id)arg1;
- (void)addAttachment:(id)arg1;
- (BOOL)hasAlarms;
- (BOOL)hasOrganizer;
- (BOOL)hasAttendeesOtherThanOrganizer;
- (BOOL)hasAttendees;
- (id)attendees;
- (id)alarmsExcludingNone;
- (id)alarms;
- (id)attachment;
- (id)attachments;
- (id)categories;
- (void)setURL:(id)arg1;
- (id)URL;
- (id)url;
- (void)setOrganizer:(id)arg1;
- (id)organizer;
- (void)setClassification:(int)arg1;
- (int)classification;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)setEntityStartDate:(id)arg1;
- (id)entityStartDate;
- (void)setComment:(id)arg1;
- (id)comment;
- (void)setDesc:(id)arg1;
- (id)desc;
- (void)setPrivateComment:(id)arg1;
- (id)privateComment;
- (void)setCalendarServerAccess:(id)arg1;
- (id)calendarServerAccess;
- (BOOL)isPrivate;
- (BOOL)isPrivateAndDelegateOrCalendarSharedToMe;
- (BOOL)isEditable;
- (BOOL)isEditableIgnoringInvitationStatus:(BOOL)arg1;
- (BOOL)needsServerConfirmation;
- (void)setNeedsServerConfirmation:(BOOL)arg1;
- (unsigned long long)permission;
- (void)setPermission:(unsigned long long)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;
- (id)signature;
- (id)objectForKey:(id)arg1;
- (void)setOccurrableEntity:(id)arg1;

@end

