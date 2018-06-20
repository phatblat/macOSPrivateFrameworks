//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOAddressObjectProtocol.h"

@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol>
{
    _GEOAddressObject *_pimpl;
    int *_knownAccuracy;
}

+ (id)addressObjectWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4;
+ (BOOL)isMarkingMMStrings;
+ (void)markMMStrings:(BOOL)arg1;
+ (id)libraryVersion;
+ (BOOL)isLoggingDebug;
+ (void)setLoggingDebug:(BOOL)arg1;
+ (id)addressObjectForPlaceData:(id)arg1;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)rawBytes;
- (id)phoneticLocaleIdentifier;
@property(readonly, nonatomic) int knownAccuracy;
@property(readonly, nonatomic) BOOL hasKnownAccuracy;
- (id)titlesForMapRect:(CDStruct_90e2a262)arg1;
- (id)venueShortAddress;
- (id)venueLevel;
- (id)venueLabel;
- (id)venueLabel:(long long)arg1;
- (id)parkingDisplayName;
- (id)weatherDisplayName;
- (id)cityDisplayNameWithFallback:(BOOL)arg1;
- (id)shortAddress;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)arg1;
- (id)fullAddressWithMultiline:(BOOL)arg1 relative:(id)arg2;
- (id)fullAddressWithMultiline:(BOOL)arg1;
- (id)phoneticAddress;
- (id)phoneticName;
- (id)spokenStructuredAddress;
- (id)spokenAddressForLocale:(id)arg1;
- (id)spokenAddress;
- (id)spokenName;
- (id)cnPostalAddress;
- (id)addressDictionary;
- (id)address;
- (id)name;
- (void)dealloc;
- (id)initWithCurrentCountry;
- (id)initWithCNPostalAddress:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
- (id)initWithContactAddressDictionary:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
- (id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

