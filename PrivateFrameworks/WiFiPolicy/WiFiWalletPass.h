//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WiFiCandidateNetwork.h"

@class NSDate, NSSet, NSString;

@interface WiFiWalletPass : NSObject <WiFiCandidateNetwork>
{
    BOOL matched;
    NSString *SSID;
    NSString *password;
    NSSet *attributes;
    NSSet *accessPoints;
    id <TBScore> qualityScore;
    id <TBScore> popularityScore;
    NSString *_uniqueIdentifier;
    NSString *_serialNumber;
    NSDate *_relevantDate;
    NSString *_localizedDescription;
}

@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) BOOL matched; // @synthesize matched;
@property(readonly, nonatomic) id <TBScore> popularityScore; // @synthesize popularityScore;
@property(readonly, nonatomic) id <TBScore> qualityScore; // @synthesize qualityScore;
@property(readonly, nonatomic) NSSet *accessPoints; // @synthesize accessPoints;
@property(readonly, nonatomic) NSSet *attributes; // @synthesize attributes;
@property(copy, nonatomic) NSString *password; // @synthesize password;
@property(copy, nonatomic) NSString *SSID; // @synthesize SSID;
- (void).cxx_destruct;
- (BOOL)containsAccessPointMatchingBSSIDs:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long source;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
