//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CWFChannel, NSArray, NSData, NSDictionary, NSSet, NSString;

@interface CWFScanResult : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isMFPRequired;
    NSDictionary *_internal;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) BOOL isMFPRequired; // @synthesize isMFPRequired=_isMFPRequired;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToScanResult:(id)arg1;
- (id)description;
- (id)__descriptionForPHYMode:(int)arg1;
- (id)__descriptionForAirPortBaseStationModel:(long long)arg1;
- (id)__descriptionForRSNIE:(id)arg1;
- (id)__descriptionForRSNAuthSel:(int)arg1;
- (id)__descriptionForRSNCipher:(int)arg1;
- (id)__descriptionForWPAIE:(id)arg1;
- (id)__descriptionForWPAAuthSel:(int)arg1;
- (id)__descriptionForWPACipher:(int)arg1;
@property(readonly, copy, nonatomic) NSArray *domainNameList; // @dynamic domainNameList;
@property(readonly, copy, nonatomic) NSArray *operatorFriendlyNameList; // @dynamic operatorFriendlyNameList;
@property(readonly, copy, nonatomic) NSArray *roamingConsortiumList; // @dynamic roamingConsortiumList;
@property(readonly, copy, nonatomic) NSArray *NAIRealmNameList; // @dynamic NAIRealmNameList;
@property(readonly, copy, nonatomic) NSArray *cellularNetworkInfo; // @dynamic cellularNetworkInfo;
@property(readonly, copy, nonatomic) NSString *deviceID; // @dynamic deviceID;
@property(readonly, copy, nonatomic) NSString *bluetoothMAC; // @dynamic bluetoothMAC;
@property(readonly, copy, nonatomic) NSString *primaryMAC; // @dynamic primaryMAC;
@property(readonly, copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, copy, nonatomic) NSString *modelName; // @dynamic modelName;
@property(readonly, copy, nonatomic) NSString *manufacturerName; // @dynamic manufacturerName;
@property(readonly, copy, nonatomic) NSString *friendlyName; // @dynamic friendlyName;
@property(readonly, nonatomic) BOOL supportsAirPlay2; // @dynamic supportsAirPlay2;
@property(readonly, nonatomic) BOOL supportsAirPlay; // @dynamic supportsAirPlay;
@property(readonly, nonatomic) BOOL supportsSecureWAC; // @dynamic supportsSecureWAC;
@property(readonly, nonatomic) BOOL supportsCarPlay; // @dynamic supportsCarPlay;
@property(readonly, nonatomic) BOOL supportsWoW; // @dynamic supportsWoW;
@property(readonly, nonatomic) BOOL supportsAirPrint; // @dynamic supportsAirPrint;
@property(readonly, nonatomic) BOOL supportsHomeKit2; // @dynamic supportsHomeKit2;
@property(readonly, nonatomic) BOOL supportsHomeKit; // @dynamic supportsHomeKit;
@property(readonly, nonatomic) BOOL supportsMFiSoftwareCertAuth; // @dynamic supportsMFiSoftwareCertAuth;
@property(readonly, nonatomic) BOOL supportsMFiSoftwareTokenAuth; // @dynamic supportsMFiSoftwareTokenAuth;
@property(readonly, nonatomic) BOOL supportsMFiHardwareAuth; // @dynamic supportsMFiHardwareAuth;
@property(readonly, nonatomic) BOOL supportsMFi; // @dynamic supportsMFi;
@property(readonly, nonatomic) BOOL supports5GHzNetworks; // @dynamic supports5GHzNetworks;
@property(readonly, nonatomic) BOOL supports2GHzNetworks; // @dynamic supports2GHzNetworks;
@property(readonly, nonatomic) BOOL supportsiAPOverWiFi; // @dynamic supportsiAPOverWiFi;
@property(readonly, nonatomic) BOOL supportsWPS; // @dynamic supportsWPS;
@property(readonly, nonatomic) BOOL providesInternetAccess; // @dynamic providesInternetAccess;
@property(readonly, nonatomic) BOOL isUnconfiguredDevice; // @dynamic isUnconfiguredDevice;
@property(readonly, copy, nonatomic) NSString *HESSID; // @dynamic HESSID;
@property(readonly, nonatomic) long long venueType; // @dynamic venueType;
@property(readonly, nonatomic) long long venueGroup; // @dynamic venueGroup;
@property(readonly, nonatomic) BOOL isUnauthenticatedEmergencyServiceAccessible; // @dynamic isUnauthenticatedEmergencyServiceAccessible;
@property(readonly, nonatomic) BOOL isEmergencyServicesReachable; // @dynamic isEmergencyServicesReachable;
@property(readonly, nonatomic) BOOL isAdditionalStepRequiredForAccess; // @dynamic isAdditionalStepRequiredForAccess;
@property(readonly, nonatomic) BOOL isInternetAccessible; // @dynamic isInternetAccessible;
@property(readonly, nonatomic) int accessNetworkType; // @dynamic accessNetworkType;
@property(readonly, nonatomic) BOOL isMFPCapable;
@property(readonly, nonatomic) BOOL isPasspoint; // @dynamic isPasspoint;
@property(readonly, nonatomic) BOOL isEAP; // @dynamic isEAP;
@property(readonly, nonatomic) BOOL isPSK; // @dynamic isPSK;
@property(readonly, nonatomic) BOOL isWPA3; // @dynamic isWPA3;
@property(readonly, nonatomic) BOOL isWPA2; // @dynamic isWPA2;
@property(readonly, nonatomic) BOOL isWPA; // @dynamic isWPA;
@property(readonly, nonatomic) BOOL isWAPI; // @dynamic isWAPI;
@property(readonly, nonatomic) BOOL isWEP; // @dynamic isWEP;
@property(readonly, nonatomic) unsigned long long cacheAge; // @dynamic cacheAge;
@property(readonly, copy, nonatomic) NSData *informationElementData; // @dynamic informationElementData;
@property(readonly, nonatomic) BOOL isAppleSWAP; // @dynamic isAppleSWAP;
@property(readonly, nonatomic) BOOL isUnconfiguredAirPortBaseStation; // @dynamic isUnconfiguredAirPortBaseStation;
@property(readonly, nonatomic) long long airPortBaseStationModel; // @dynamic airPortBaseStationModel;
@property(readonly, nonatomic) long long beaconInterval; // @dynamic beaconInterval;
@property(readonly, copy, nonatomic) CWFChannel *channel; // @dynamic channel;
@property(readonly, copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(readonly, nonatomic) BOOL isPersonalHotspot; // @dynamic isPersonalHotspot;
@property(readonly, nonatomic) BOOL isIBSS; // @dynamic isIBSS;
@property(readonly, nonatomic) long long noise; // @dynamic noise;
@property(readonly, nonatomic) long long RSSI; // @dynamic RSSI;
@property(readonly, copy, nonatomic) NSString *BSSID; // @dynamic BSSID;
@property(readonly, copy, nonatomic) NSString *networkName; // @dynamic networkName;
@property(readonly, copy, nonatomic) NSData *SSID; // @dynamic SSID;
@property(readonly, copy, nonatomic) NSDictionary *scanRecord; // @dynamic scanRecord;
@property(readonly, copy, nonatomic) NSSet *properties; // @dynamic properties;
@property(readonly, nonatomic) int fastestSupportedPHYMode; // @dynamic fastestSupportedPHYMode;
@property(readonly, nonatomic) int supportedPHYModes; // @dynamic supportedPHYModes;
@property(readonly, nonatomic) unsigned long long supportedSecurityTypes; // @dynamic supportedSecurityTypes;
@property(readonly, nonatomic) long long WAPISubtype; // @dynamic WAPISubtype;
@property(readonly, nonatomic) unsigned long long strongestSupportedSecurityType; // @dynamic strongestSupportedSecurityType;
- (id)filteredScanResultWithProperties:(id)arg1;
- (id)initWithScanRecord:(id)arg1 includeProperties:(id)arg2;
- (id)__internalDictionaryFromScanRecord:(id)arg1 includeProperties:(id)arg2;
- (id)__requiredProperties;
- (id)__defaultProperties;

// Remaining properties
@property(readonly, copy, nonatomic) NSDictionary *ANQPResponse; // @dynamic ANQPResponse;

@end
