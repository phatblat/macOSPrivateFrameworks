//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, NSString;

@interface IMDCoreSpotlightChatParticipant : NSObject
{
    BOOL _isSender;
    NSString *_handleID;
    CNContact *_contact;
}

@property(readonly, nonatomic) BOOL isSender; // @synthesize isSender=_isSender;
@property(readonly, retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy, nonatomic) NSString *handleID; // @synthesize handleID=_handleID;
- (void)dealloc;
- (id)initWithHandleID:(id)arg1 contact:(id)arg2 isSender:(BOOL)arg3;

@end
