//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSMessageType.h>

@class EWSItemIdType, NSDateComponents, NSString;

@interface EWSMeetingMessageType : EWSMessageType
{
    BOOL _IsDelegated;
    BOOL _IsOutOfDate;
    BOOL _HasBeenProcessed;
    EWSItemIdType *_AssociatedCalendarItemId;
    long long _ResponseType;
    NSString *_UID;
    NSDateComponents *_RecurrenceId;
    NSDateComponents *_DateTimeStamp;
    NSDateComponents *_ProposedStart;
    NSDateComponents *_ProposedEnd;
}

+ (id)definition;
@property(retain, nonatomic) NSDateComponents *ProposedEnd; // @synthesize ProposedEnd=_ProposedEnd;
@property(retain, nonatomic) NSDateComponents *ProposedStart; // @synthesize ProposedStart=_ProposedStart;
@property(retain, nonatomic) NSDateComponents *DateTimeStamp; // @synthesize DateTimeStamp=_DateTimeStamp;
@property(retain, nonatomic) NSDateComponents *RecurrenceId; // @synthesize RecurrenceId=_RecurrenceId;
@property(copy, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property(nonatomic) long long ResponseType; // @synthesize ResponseType=_ResponseType;
@property(nonatomic) BOOL HasBeenProcessed; // @synthesize HasBeenProcessed=_HasBeenProcessed;
@property(nonatomic) BOOL IsOutOfDate; // @synthesize IsOutOfDate=_IsOutOfDate;
@property(nonatomic) BOOL IsDelegated; // @synthesize IsDelegated=_IsDelegated;
@property(retain, nonatomic) EWSItemIdType *AssociatedCalendarItemId; // @synthesize AssociatedCalendarItemId=_AssociatedCalendarItemId;
- (void).cxx_destruct;

@end

