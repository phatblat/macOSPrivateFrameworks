//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUtilities/TUCTCapabilitiesState.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "TUPubliclyAccessibleCopying.h"

@class NSSet, NSString;

@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>
{
    BOOL _approved;
    NSSet *_approvedSecondaryDeviceIDs;
    NSString *_localDeviceID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property(copy, nonatomic) NSSet *approvedSecondaryDeviceIDs; // @synthesize approvedSecondaryDeviceIDs=_approvedSecondaryDeviceIDs;
@property(nonatomic, getter=isApproved) BOOL approved; // @synthesize approved=_approved;
- (void).cxx_destruct;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (id)publiclyAccessibleCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

