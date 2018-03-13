//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSItemType.h>

@class EWSOccurrenceInfoType, EWSRecurrenceType, EWSSingleRecipientType, EWSTimeZoneType, NSArray, NSDateComponents, NSString;

@interface EWSCalendarItemType : EWSItemType
{
    BOOL _IsAllDayEvent;
    BOOL _IsAllDayEventSpecified;
    BOOL _IsMeeting;
    BOOL _IsMeetingSpecified;
    BOOL _IsCancelled;
    BOOL _IsCancelledSpecified;
    BOOL _IsRecurring;
    BOOL _IsRecurringSpecified;
    BOOL _MeetingRequestWasSent;
    BOOL _MeetingRequestWasSentSpecified;
    BOOL _IsResponseRequested;
    BOOL _IsResponseRequestedSpecified;
    BOOL _ConflictingMeetingCountSpecified;
    BOOL _AdjacentMeetingCountSpecified;
    BOOL _AppointmentSequenceNumberSpecified;
    BOOL _AppointmentStateSpecified;
    BOOL _ConferenceTypeSpecified;
    BOOL _AllowNewTimeProposal;
    BOOL _AllowNewTimeProposalSpecified;
    BOOL _IsOnlineMeeting;
    BOOL _IsOnlineMeetingSpecified;
    BOOL _IsAssociated;
    BOOL _IsAssociatedSpecified;
    NSString *_UID;
    NSDateComponents *_RecurrenceId;
    NSDateComponents *_DateTimeStamp;
    NSDateComponents *_Start;
    NSDateComponents *_End;
    NSDateComponents *_OriginalStart;
    long long _LegacyFreeBusyStatus;
    NSString *_Location;
    NSString *_When;
    long long _CalendarItemType;
    long long _MyResponseType;
    EWSSingleRecipientType *_Organizer;
    NSArray *_RequiredAttendees;
    NSArray *_OptionalAttendees;
    NSArray *_Resources;
    long long _ConflictingMeetingCount;
    long long _AdjacentMeetingCount;
    NSArray *_ConflictingMeetings;
    NSArray *_AdjacentMeetings;
    NSString *_Duration;
    NSString *_TimeZone;
    NSDateComponents *_AppointmentReplyTime;
    long long _AppointmentSequenceNumber;
    long long _AppointmentState;
    EWSRecurrenceType *_Recurrence;
    EWSOccurrenceInfoType *_FirstOccurrence;
    EWSOccurrenceInfoType *_LastOccurrence;
    NSArray *_ModifiedOccurrences;
    NSArray *_DeletedOccurrences;
    EWSTimeZoneType *_MeetingTimeZone;
    long long _ConferenceType;
    NSString *_MeetingWorkspaceUrl;
    NSString *_NetShowUrl;
}

+ (id)definition;
@property(nonatomic) BOOL IsAssociatedSpecified; // @synthesize IsAssociatedSpecified=_IsAssociatedSpecified;
@property(nonatomic) BOOL IsAssociated; // @synthesize IsAssociated=_IsAssociated;
@property(copy, nonatomic) NSString *NetShowUrl; // @synthesize NetShowUrl=_NetShowUrl;
@property(copy, nonatomic) NSString *MeetingWorkspaceUrl; // @synthesize MeetingWorkspaceUrl=_MeetingWorkspaceUrl;
@property(nonatomic) BOOL IsOnlineMeetingSpecified; // @synthesize IsOnlineMeetingSpecified=_IsOnlineMeetingSpecified;
@property(nonatomic) BOOL IsOnlineMeeting; // @synthesize IsOnlineMeeting=_IsOnlineMeeting;
@property(nonatomic) BOOL AllowNewTimeProposalSpecified; // @synthesize AllowNewTimeProposalSpecified=_AllowNewTimeProposalSpecified;
@property(nonatomic) BOOL AllowNewTimeProposal; // @synthesize AllowNewTimeProposal=_AllowNewTimeProposal;
@property(nonatomic) BOOL ConferenceTypeSpecified; // @synthesize ConferenceTypeSpecified=_ConferenceTypeSpecified;
@property(nonatomic) long long ConferenceType; // @synthesize ConferenceType=_ConferenceType;
@property(retain, nonatomic) EWSTimeZoneType *MeetingTimeZone; // @synthesize MeetingTimeZone=_MeetingTimeZone;
@property(copy, nonatomic) NSArray *DeletedOccurrences; // @synthesize DeletedOccurrences=_DeletedOccurrences;
@property(copy, nonatomic) NSArray *ModifiedOccurrences; // @synthesize ModifiedOccurrences=_ModifiedOccurrences;
@property(retain, nonatomic) EWSOccurrenceInfoType *LastOccurrence; // @synthesize LastOccurrence=_LastOccurrence;
@property(retain, nonatomic) EWSOccurrenceInfoType *FirstOccurrence; // @synthesize FirstOccurrence=_FirstOccurrence;
@property(retain, nonatomic) EWSRecurrenceType *Recurrence; // @synthesize Recurrence=_Recurrence;
@property(nonatomic) BOOL AppointmentStateSpecified; // @synthesize AppointmentStateSpecified=_AppointmentStateSpecified;
@property(nonatomic) long long AppointmentState; // @synthesize AppointmentState=_AppointmentState;
@property(nonatomic) BOOL AppointmentSequenceNumberSpecified; // @synthesize AppointmentSequenceNumberSpecified=_AppointmentSequenceNumberSpecified;
@property(nonatomic) long long AppointmentSequenceNumber; // @synthesize AppointmentSequenceNumber=_AppointmentSequenceNumber;
@property(retain, nonatomic) NSDateComponents *AppointmentReplyTime; // @synthesize AppointmentReplyTime=_AppointmentReplyTime;
@property(copy, nonatomic) NSString *TimeZone; // @synthesize TimeZone=_TimeZone;
@property(copy, nonatomic) NSString *Duration; // @synthesize Duration=_Duration;
@property(copy, nonatomic) NSArray *AdjacentMeetings; // @synthesize AdjacentMeetings=_AdjacentMeetings;
@property(copy, nonatomic) NSArray *ConflictingMeetings; // @synthesize ConflictingMeetings=_ConflictingMeetings;
@property(nonatomic) BOOL AdjacentMeetingCountSpecified; // @synthesize AdjacentMeetingCountSpecified=_AdjacentMeetingCountSpecified;
@property(nonatomic) long long AdjacentMeetingCount; // @synthesize AdjacentMeetingCount=_AdjacentMeetingCount;
@property(nonatomic) BOOL ConflictingMeetingCountSpecified; // @synthesize ConflictingMeetingCountSpecified=_ConflictingMeetingCountSpecified;
@property(nonatomic) long long ConflictingMeetingCount; // @synthesize ConflictingMeetingCount=_ConflictingMeetingCount;
@property(copy, nonatomic) NSArray *Resources; // @synthesize Resources=_Resources;
@property(copy, nonatomic) NSArray *OptionalAttendees; // @synthesize OptionalAttendees=_OptionalAttendees;
@property(copy, nonatomic) NSArray *RequiredAttendees; // @synthesize RequiredAttendees=_RequiredAttendees;
@property(retain, nonatomic) EWSSingleRecipientType *Organizer; // @synthesize Organizer=_Organizer;
@property(nonatomic) long long MyResponseType; // @synthesize MyResponseType=_MyResponseType;
@property(nonatomic) long long CalendarItemType; // @synthesize CalendarItemType=_CalendarItemType;
@property(nonatomic) BOOL IsResponseRequestedSpecified; // @synthesize IsResponseRequestedSpecified=_IsResponseRequestedSpecified;
@property(nonatomic) BOOL IsResponseRequested; // @synthesize IsResponseRequested=_IsResponseRequested;
@property(nonatomic) BOOL MeetingRequestWasSentSpecified; // @synthesize MeetingRequestWasSentSpecified=_MeetingRequestWasSentSpecified;
@property(nonatomic) BOOL MeetingRequestWasSent; // @synthesize MeetingRequestWasSent=_MeetingRequestWasSent;
@property(nonatomic) BOOL IsRecurringSpecified; // @synthesize IsRecurringSpecified=_IsRecurringSpecified;
@property(nonatomic) BOOL IsRecurring; // @synthesize IsRecurring=_IsRecurring;
@property(nonatomic) BOOL IsCancelledSpecified; // @synthesize IsCancelledSpecified=_IsCancelledSpecified;
@property(nonatomic) BOOL IsCancelled; // @synthesize IsCancelled=_IsCancelled;
@property(nonatomic) BOOL IsMeetingSpecified; // @synthesize IsMeetingSpecified=_IsMeetingSpecified;
@property(nonatomic) BOOL IsMeeting; // @synthesize IsMeeting=_IsMeeting;
@property(copy, nonatomic) NSString *When; // @synthesize When=_When;
@property(copy, nonatomic) NSString *Location; // @synthesize Location=_Location;
@property(nonatomic) long long LegacyFreeBusyStatus; // @synthesize LegacyFreeBusyStatus=_LegacyFreeBusyStatus;
@property(nonatomic) BOOL IsAllDayEventSpecified; // @synthesize IsAllDayEventSpecified=_IsAllDayEventSpecified;
@property(nonatomic) BOOL IsAllDayEvent; // @synthesize IsAllDayEvent=_IsAllDayEvent;
@property(retain, nonatomic) NSDateComponents *OriginalStart; // @synthesize OriginalStart=_OriginalStart;
@property(retain, nonatomic) NSDateComponents *End; // @synthesize End=_End;
@property(retain, nonatomic) NSDateComponents *Start; // @synthesize Start=_Start;
@property(retain, nonatomic) NSDateComponents *DateTimeStamp; // @synthesize DateTimeStamp=_DateTimeStamp;
@property(retain, nonatomic) NSDateComponents *RecurrenceId; // @synthesize RecurrenceId=_RecurrenceId;
@property(copy, nonatomic) NSString *UID; // @synthesize UID=_UID;
- (void).cxx_destruct;

@end

