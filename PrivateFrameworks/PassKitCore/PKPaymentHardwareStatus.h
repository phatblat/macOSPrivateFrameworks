//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hasSecureElement;
    BOOL _hasRemoteDevices;
    BOOL _hasClamshell;
    BOOL _clamshellClosed;
    BOOL _screenReaderRunning;
    BOOL _remotePaymentsRequiredForVoiceover;
    BOOL _canMakeRemotePayments;
    unsigned long long _ownershipState;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL canMakeRemotePayments; // @synthesize canMakeRemotePayments=_canMakeRemotePayments;
@property(nonatomic) BOOL remotePaymentsRequiredForVoiceover; // @synthesize remotePaymentsRequiredForVoiceover=_remotePaymentsRequiredForVoiceover;
@property(nonatomic, getter=isScreenReaderRunning) BOOL screenReaderRunning; // @synthesize screenReaderRunning=_screenReaderRunning;
@property(nonatomic, getter=isClamshellClosed) BOOL clamshellClosed; // @synthesize clamshellClosed=_clamshellClosed;
@property(nonatomic) BOOL hasClamshell; // @synthesize hasClamshell=_hasClamshell;
@property(nonatomic) unsigned long long ownershipState; // @synthesize ownershipState=_ownershipState;
@property(nonatomic) BOOL hasRemoteDevices; // @synthesize hasRemoteDevices=_hasRemoteDevices;
@property(nonatomic) BOOL hasSecureElement; // @synthesize hasSecureElement=_hasSecureElement;
@property(readonly, nonatomic) BOOL canMakeLocalPayments;
@property(readonly, nonatomic) BOOL canMakePayments;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;

@end
