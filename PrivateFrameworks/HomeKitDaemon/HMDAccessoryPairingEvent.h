//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import "HMDAWDLogEvent.h"

@class HMDAccessory, NSString;

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _addOperation;
    BOOL _addViaWAC;
    BOOL _wacLegacy;
    BOOL _usedWiFiPPSK;
    BOOL _usedOwnershipProof;
    BOOL _networkRouterAdd;
    BOOL _networkRouterReplace;
    HMDAccessory *_pairedAccessory;
    long long _linkType;
    long long _certificationStatus;
    unsigned long long _authMethod;
    NSString *_identifier;
}

+ (id)removingAccessory:(id)arg1 hapAccessory:(id)arg2;
+ (id)pairingAccessory:(id)arg1 home:(id)arg2;
+ (id)pairingAccessoryWithDescription:(id)arg1 home:(id)arg2;
+ (id)uuid;
+ (void)initialize;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, getter=isNetworkRouterReplace) BOOL networkRouterReplace; // @synthesize networkRouterReplace=_networkRouterReplace;
@property(nonatomic, getter=isNetworkRouterAdd) BOOL networkRouterAdd; // @synthesize networkRouterAdd=_networkRouterAdd;
@property(nonatomic, getter=isUsedOwnershipProof) BOOL usedOwnershipProof; // @synthesize usedOwnershipProof=_usedOwnershipProof;
@property(nonatomic, getter=isUsedWiFiPPSK) BOOL usedWiFiPPSK; // @synthesize usedWiFiPPSK=_usedWiFiPPSK;
@property(nonatomic) unsigned long long authMethod; // @synthesize authMethod=_authMethod;
@property(nonatomic) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(nonatomic, getter=isWacLegacy) BOOL wacLegacy; // @synthesize wacLegacy=_wacLegacy;
@property(nonatomic, getter=isAddViaWAC) BOOL addViaWAC; // @synthesize addViaWAC=_addViaWAC;
@property(readonly, nonatomic, getter=isAddOperation) BOOL addOperation; // @synthesize addOperation=_addOperation;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) HMDAccessory *pairedAccessory; // @synthesize pairedAccessory=_pairedAccessory;
- (void).cxx_destruct;
- (void)pairedAccessory:(id)arg1;
- (void)pairedToServer:(id)arg1 certificationStatus:(long long)arg2;
- (void)setAuthenticationMethod:(unsigned long long)arg1;
- (void)setAddedViaWAC:(BOOL)arg1;
- (id)initWithAccessoryDescription:(id)arg1 home:(id)arg2;
- (id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 home:(id)arg4 isAddOperation:(BOOL)arg5;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

