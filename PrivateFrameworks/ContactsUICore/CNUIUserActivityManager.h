//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactStore;

@interface CNUIUserActivityManager : NSObject
{
    CNContactStore *_contactStore;
    id <CNLSApplicationWorkspace> _applicationWorkspace;
    id <CNUIInteractionDonor> _interactionDonor;
}

+ (id)descriptorForRequiredKeys;
+ (id)log;
@property(readonly, nonatomic) id <CNUIInteractionDonor> interactionDonor; // @synthesize interactionDonor=_interactionDonor;
@property(readonly, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)makeActivityAdvertisingViewingList;
- (void)updateUserActivityState:(id)arg1 withContentsOfContact:(id)arg2;
- (id)makeActivityAdvertisingViewingOfContact:(id)arg1;
- (void)publishRequestToEditContact:(id)arg1;
- (void)publishRequestToCreateContact:(id)arg1;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 interactionDonor:(id)arg3;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;
- (id)initWithApplicationWorkspace:(id)arg1;
- (id)initWithContactStore:(id)arg1;

@end

