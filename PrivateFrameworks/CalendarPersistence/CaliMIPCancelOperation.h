//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CaliMIPPersistDetailsOperation.h>

@class NSArray;

@interface CaliMIPCancelOperation : CaliMIPPersistDetailsOperation
{
    NSArray *_attendeeEmails;
}

+ (int)icsMethod;
+ (BOOL)iMIPSchedulingWillResultFromChangesToManagedEvent:(id)arg1 ignoreiMIPSuppression:(BOOL)arg2;
@property(retain) NSArray *attendeeEmails; // @synthesize attendeeEmails=_attendeeEmails;
- (void).cxx_destruct;
- (id)emailSubjectInContext:(id)arg1;
- (id)emailRecipientsInContext:(id)arg1;
- (id)emailBodyInContext:(id)arg1;
- (id)attachmentName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedAttendees:(id)arg1;

@end
